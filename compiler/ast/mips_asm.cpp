using namespace std;
#include "mips_asm.h"
#include <sstream>

int MIPS_ASM::lines=0;
int MIPS_ASM::cols=0;
char MIPS_ASM::alltext2[20000];
char MIPS_ASM::current_chars[1000];
char MIPS_ASM::data[1000]="\n.data\n";
int MIPS_ASM::static_size=4;
ofstream MIPS_ASM::code;
extern std::ofstream ofs;
FILE * MIPS_ASM::file = fopen("AssemblyCode.asm","w");

void MIPS_ASM::add_instruction(string c)
{

	//fputs(c,file);
	ofs<<c.c_str();
}

void MIPS_ASM::add_data(char* c)
{
	strcat(MIPS_ASM::data,c);		
}

static bool char_exists(char* c)
{
	for(int i=0 ; i < sizeof(MIPS_ASM::current_chars);i++)
	{
		if(MIPS_ASM::current_chars[i]!=NULL)
		{
			char temp[2]="";
			temp[0] = MIPS_ASM::current_chars[i];
			if(strcmp(temp,c)==0)
				return true;
		}
	}
	return false;
}

char* MIPS_ASM::add_data_char(char c)
{
	char charr[2] = "";
	sprintf(charr,"%c",c);

	char label[10] = "";
	char cc[50] = "char_";	
	strcat(cc,charr);	
	strcpy(label,cc);
	strcat(cc,": .asciiz \"");
	strcat(cc,charr);
	strcat(cc,"\"\n");


	if(!char_exists(charr))
	{		
		strcat(MIPS_ASM::current_chars,charr);
		strcat(MIPS_ASM::data,cc);
	}

	return label;
}

char* MIPS_ASM::add_data_char(char * c)
{
	char * charr = new char (strlen(c));
	sprintf(charr,"%s",c);

	char label[100] = "";
	char cc[50] = "str_";	
	strcat(cc,charr);	
	strcpy(label,cc);
	strcat(cc,": .asciiz \"");
	strcat(cc,charr);
	strcat(cc,"\"\n");


	if(!char_exists(charr))
	{		
		strcat(MIPS_ASM::current_chars,charr);
		strcat(MIPS_ASM::data,cc);
	}

	return label;
}

void MIPS_ASM::write()
{	
	fputs(MIPS_ASM::data,MIPS_ASM::file);
	fputs("\nnewline: .asciiz \"\\n\"",MIPS_ASM::file);	
	fclose(MIPS_ASM::file);
}

void MIPS_ASM::operation(string reg1,string reg2,string reg3,int flag)
{
	//
	// 1 : +  2:- 3:* 4:/ 5:%
	//
	string c="";	

	if(flag ==1)
		c+="add $";
	else if(flag ==2)
		c+="sub $";
	
	else if(flag ==3)
		c+="mul $";
	
	else if(flag ==4)
		c+="div $";
	
	else if(flag ==5)
		c+="rem $";
		
	c+=reg1;
	c+=",$";

	c+=reg2;
	c+=",$";

	c+=reg3;
	c+="\n";
	MIPS_ASM::add_instruction(c);
		
}

void MIPS_ASM::operationf(string reg1,string reg2,string reg3,int flag)
{
	string c="";	

	if(flag ==1)
		c+="add.s $";
	else if(flag ==2)
		c+="sub.s $";
	
	else if(flag ==3)
		c+="mul.s $";
	
	else if(flag ==4)
		c+="div.s $";
	
	else if(flag ==5)
		c+="rem.s $";
		
		
	c+=reg1;
	c+=",$";

	c+=reg2;
	c+=",$";

	c+=reg3;
	c+="\n";
	MIPS_ASM::add_instruction(c);
		
}

void MIPS_ASM::slt(string reg1,string reg2,string reg3)
{	
	string c="slt $";	
	c+=reg1;
	c+=",$";
	c+=reg2;
	c+=",$";
	c+=reg3;
	c+="\n";
	MIPS_ASM::add_instruction(c);
		
}
void MIPS_ASM::la(string reg,string d)
{
	string c="la $";	
	c+=reg;
	c+=",";
	c+=d;
	c+="\n";
	MIPS_ASM::add_instruction(c);

	
	
}

void MIPS_ASM::li(string reg,int v)
{
	string c="li $";	
		
	c+=reg;
	c+=",";
	c+=to_string(v);
	c+="\n";
	MIPS_ASM::add_instruction(c);

	
	
}


void MIPS_ASM::lif(string reg,float v)
{
	string c="li.s $";	
		
	c+=reg;
	c+=",";
	c+=v;
	c+="\n";
	MIPS_ASM::add_instruction(c);

	
	
}

void MIPS_ASM::push(string source)
{
	MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
	string c="sw $";	
	c+=source;
	c+=", 0($sp)\n";
	MIPS_ASM::add_instruction(c);

}
void MIPS_ASM::reserveStack(int size)
{
	MIPS_ASM::printComment("reserving space in stack for scope variables");
	MIPS_ASM::add_instruction(string("sub $sp,$sp,") + to_string(size) + string("\n"));
}

void MIPS_ASM::releaseStack(int size)
{
	MIPS_ASM::printComment("releasing space in stack for scope variables");
	MIPS_ASM::add_instruction(string("add $sp,$sp,") + to_string(size) + string("\n"));
}


void MIPS_ASM::pop(string dest)
{
	string c="lw $";	
	c+=dest;
	c+=", 0($sp)\n";
	MIPS_ASM::add_instruction(c);
	MIPS_ASM::add_instruction("add $sp,$sp,4\n");

}

void MIPS_ASM::pushf(string source)
{
	MIPS_ASM::add_instruction("sub $sp,$sp,4\n");
	string c="s.s $";	
	c+=source;
	c+=", 0($sp)\n";
	MIPS_ASM::add_instruction(c);

}


void MIPS_ASM::popf(string dest)
{
	string c="l.s $";	
	
	c+=dest;
	c+=", 0($sp)\n";
	MIPS_ASM::add_instruction(c);
	MIPS_ASM::add_instruction("add $sp,$sp,4\n");

}

void MIPS_ASM::beq(string reg1,string reg2,string label)
{
	string c="beq $";	
	
		
	c+=reg1;
	c+=",$";
	c+=reg2;
	c+=",";
	c+=label;
	c+="\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::bne(string reg1,string reg2,string label)
{
	string c="bne $";		
	c+=reg1;
	c+=",$";
	c+=reg2;
	c+=",";
	c+=label;
	c+="\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::label(string label)
{
	string c="";	
	c+=label;	
	c+=":\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::jump(string label)
{
	string c="";		
	c+="j ";
	c+=label;	
	c+="\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::jr(string reg)
{
	string c="";	
	c+="jr $";
	c+=reg;	
	c+="\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::jal(string label)
{
	string c="";	
	c="jal ";
	c+=label;	
	c+="\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::lw_fp(string reg,int o)
{

	string c="";	
	c="lw $";
	c+=reg;
	c+=",";
	c+=to_string( o);
	c+="($fp)\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::sw_fp(string reg,int o)
{
	string c="";	
	c="sw $";
	c+=reg;
	c+=",";
	c+=to_string(o);
	c+="($fp)\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::lw_gp(string reg,int o)
{
	string c="";	
	c="lw $";
	c+=reg;
	c+=",";
	c+=to_string(o);
	c+="($gp)\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::sw_gp(string reg,int o)
{
	string c="";	
	c="sw $";
	c=reg;
	c=",";
	c+=to_string(o);
	c+="($gp)\n";
	MIPS_ASM::add_instruction(c);
}


void MIPS_ASM::lw_fpf(string reg,int o)
{
	string c="";	
	c="l.s $";
	c+=reg;
	c+=",";
	c+=to_string(o);
	c+="($fp)\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::sw_fpf(string reg,int o)
{
	string c="";	
	c="s.s $";
	c+=reg;
	c+=",";
	c+=to_string(o);
	c+="($fp)\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::lw(string dest_reg,int offset,string mem_adress)
{
	string  c = "lw $";
	c+=dest_reg;
	c+=",";	
	c+=to_string(offset);
	c+="($";
	c+=mem_adress;
	c+=")\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::sw(string source_reg,int offset,string mem_adress)
{
	string c = "sw $";
	c+=source_reg;
	c+=",";
	c+=to_string(offset);
	c+="($";
	c+=mem_adress;
	c+=")\n";
	MIPS_ASM::add_instruction(c);
}

void MIPS_ASM::move(string dest_reg,string from_reg)
{
	string c = "move $";
	c+=dest_reg;
	c+=",$";
	c+=from_reg;
	MIPS_ASM::printComment("move"+from_reg+" to "+dest_reg);
	c+="\n";
	MIPS_ASM::add_instruction(c);
	
}

void MIPS_ASM::printComment(string comment)
{
	stringstream cmt(comment);
	string line;
		while (getline(cmt, line))
		{
			string c = " #";
			c += line + "\n";
			MIPS_ASM::add_instruction(c);

		}
	}


