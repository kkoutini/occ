#pragma once
#include "VoidNode.h"
#include "CatchNode.h"
#include "CallNode.h"
#include "ast\IdentifierNode.h"
class FPNode :public Node
{
	public:
	FPNode(ScoopNode* scoop) :Node(scoop)
	{

	}
	virtual void generateCode(){
		MIPS_ASM::push("fp");
	}	
	virtual Type* generateType(){
		return symbolTable->getType("int");
	}
};
class SPNode :public Node
{
public:
	SPNode(ScoopNode* scoop) :Node(scoop)
	{

	}
	virtual void generateCode(){
		MIPS_ASM::add_instruction("addi $t0,$fp," + std::to_string(_scoop->getFrameSize() + _scoop->getVarsOffset()) + "\n");
		MIPS_ASM::push("t0");
	}
	virtual Type* generateType(){
		return symbolTable->getType("int");
	}
}; 

class LabelValNode :public Node
{
public:
	string lbl;
	LabelValNode(ScoopNode* scoop, string l) :Node(scoop), lbl(l)
	{

	}
	virtual void generateCode(){
		MIPS_ASM::add_instruction("la $t0,"+lbl+"\n");
		MIPS_ASM::push("t0");
	}
	virtual Type* generateType(){
		return symbolTable->getType("int");
	}
};
class TryNode :
	public VoidNode
{
public:
	Node* _statment;
	CatchNode* catches;
	TryNode(ScoopNode* scoop, Node* statment, CatchNode* c) :VoidNode(scoop), _statment(statment), catches(c)
	{
	}
	virtual void generateCode(){
		CatchNode* cat=catches;
		while (cat){
			//cat->exp->get_name()
			CallNode* cn = new CallNode(_scoop, new IdentifierNode("NSExceptionCatcher", _scoop), "");
			//+(NSExceptionCatcher*) new:(NSObject*)e:(NSExceptionCatcher*) p:(int)s :(int) f :(int)l{

			auto cs = new CallSelector("new");
			cs->addArg(new IdentifierNode(cat->exp->get_name(), _scoop));
			cs->addArg(new IdentifierNode("top_catcher", _scoop));
			cs->addArg(new SPNode(_scoop));
			cs->addArg(new FPNode(_scoop));
			cs->addArg(new LabelValNode(_scoop, cat->getCatchLabel()));

			cn->addSelector(cs);
		//	cn->generateCode();
			AssignNode* asn=new AssignNode(_scoop, new IdentifierNode("top_catcher", _scoop), cn);
			asn->generateCode();
			cat = cat->next;
		}
	}

	virtual ~TryNode()
	{
	}
};

