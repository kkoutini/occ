%{
	#include "yacc.hpp"
	#include <iostream>
	#include <istream>
	#include <ostream>
	#include <stdlib.h>
	 extern int lineNum=1;
	extern int colNum=0;
	

%}
%option c++
%option noyywrap
%option yylineno
%x comment
digit						[0-9]
FLOAT						("+"|"-")?({digit}+\.{digit}+)

%%
"/*" {colNum+=2;		BEGIN(comment);}
<comment>"\n" {lineNum+=1;		BEGIN(comment);}
<comment>"*"*[^"/"] {colNum+=strlen(yytext);	}
<comment>[^"*"]*    {colNum+=strlen(yytext);	}
<comment>"*"+"/" { colNum+=strlen(yytext);	 BEGIN(INITIAL);}

"@interface"		{colNum+=10;yylval.r.colNo=colNum;		yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);	return AT_INTERFACE;}
"@protocol"			{colNum+=9;yylval.r.colNo=colNum;					    		return AT_PROTOCOL;}
":"					{colNum+=1;yylval.r.colNo=colNum;									return SEMI_COLUMN;}
"NSString"			{colNum+=8;yylval.r.colNo=colNum;			yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);						return NSSTRING;}
"float"				{colNum+=5;yylval.r.colNo=colNum;				yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);					return FLOAT;}
"char"				{colNum+=4;yylval.r.colNo=colNum;     		yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);						return CHAR;}
"bool"				{colNum+=4;yylval.r.colNo=colNum;     			yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);					return BOOL;}
"int"				{colNum+=3;yylval.r.colNo=colNum;			yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);						return INT;}
";"					{colNum+=1;yylval.r.colNo=colNum;										return SEMI_COMA;}
"id"				{colNum+=2;yylval.r.colNo=colNum;											return ID;}
"@public"			{colNum+=7;yylval.r.colNo=colNum;					yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);				return AT_PUBLIC;}
"@protected"		{colNum+=10;yylval.r.colNo=colNum;				yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);					return AT_PROTECTED;}
"@private"			{colNum+=8;yylval.r.colNo=colNum;					yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);				return AT_PRIVATE;}
"{"					{colNum++;yylval.r.colNo=colNum;									return OPEN_S;}
"}"					{colNum++;yylval.r.colNo=colNum;										return CLOSE_S;}
","					{colNum++;yylval.r.colNo=colNum;										return COMMA;}
"<"					{colNum++;yylval.r.colNo=colNum;									return LESS_THAN;}
">"					{colNum++;yylval.r.colNo=colNum;									return MORE_THAN;}
"@end"				{colNum+=4;yylval.r.colNo=colNum;										return AT_END;}
"const"				{colNum+=5;yylval.r.colNo=colNum;									return CONST;}
"void"				{	colNum+=4;				yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);				return VOID;}
"+"					{colNum++;yylval.r.colNo=colNum;									return PLUS;}
"-"					{colNum++;yylval.r.colNo=colNum;										return MINUS;}
"("					{colNum++;yylval.r.colNo=colNum;										return OPEN_P;}
")"					{colNum++;yylval.r.colNo=colNum;											return CLOSE_P;}
"@implementation"	{colNum+=15;yylval.r.colNo=colNum;								return AT_IMPLEMENTATION;}
"@asm"              {colNum+=4;yylval.r.colNo=colNum;                                 return AT_ASM;}
"self"              {colNum+=4;yylval.r.colNo=colNum;                                 return SELF;}
"&&"				{colNum+=2;yylval.r.colNo=colNum;											return AND_AND;}
"||"				{	colNum+=2;yylval.r.colNo=colNum;									return OR_OR;}
"<="				{colNum+=2;yylval.r.colNo=colNum;										return LESS_OR_EQUAL;}
">="				{colNum+=2;	yylval.r.colNo=colNum;										return MORE_OR_EQUAL;}
"*"					{colNum++;yylval.r.colNo=colNum;											return MULTI;}

"=="				{colNum+=2;	yylval.r.colNo=colNum;										return EQUAL_EQUAL;}
"!="				{colNum+=2;yylval.r.colNo=colNum;											return NOT_EQUAL;}
"for"				{colNum+=3;	yylval.r.colNo=colNum;										return FOR;}
"="					{	colNum++;yylval.r.colNo=colNum;									return EQUAL;}
"%"					{colNum++;yylval.r.colNo=colNum;										return DIV;}
"while"			{		colNum+=5;yylval.r.colNo=colNum;								return WHILE;}
"if"				{	colNum+=2;	yylval.r.colNo=colNum;									return IF;}
"else"              {   colNum+=2;	yylval.r.colNo=colNum;									return ELSE;}
"do"                {  colNum+=2; yylval.r.colNo=colNum;                                       return DO;}
"switch"            {  colNum+=6; yylval.r.colNo=colNum;                                     return SWITCH;}
"case"              {   colNum+=4;  yylval.r.colNo=colNum;                                   return CASE;}
"default"           {   colNum+=7;  yylval.r.colNo=colNum;                                 return DEFAULT;}
"break"             {   colNum+=5;  yylval.r.colNo=colNum;                               return BREAK;}
"enum"              {   colNum+=4;    yylval.r.colNo=colNum;                             return ENUM;}
"["					{	colNum++;yylval.r.colNo=colNum;										return OPEN_ARR;}
"]"					{	colNum++;yylval.r.colNo=colNum;									return CLOSE_ARR;}
"true"				{	colNum+=4;yylval.r.colNo=colNum;									return TRUE;}
"false"				{	colNum+=5;	yylval.r.colNo=colNum;							return FALSE;}
"struct"  {		colNum+=6;yylval.r.colNo=colNum;				return STRUCT;}
"return"			{		colNum+=6;	yylval.r.colNo=colNum;							return RETURN;}
([1-9][0-9]*)|0		{  colNum+=strlen(yytext);yylval.r.colNo=colNum;	 yylval.r.int_val=atoi(yytext);		return INT_VAL;}
{FLOAT}				{	colNum+=strlen(yytext);	yylval.r.colNo=colNum;				return FLOAT_VAL;}
\'[a-zA-z]\'		{	colNum+=strlen(yytext);	yylval.r.colNo=colNum;		return CHAR_VAL;}
"++"                {  colNum+=strlen(yytext);	yylval.r.colNo=colNum;		return DOUBLEPLUS;}
"--"                {  colNum+=strlen(yytext);	yylval.r.colNo=colNum;		return DOUBLEMINUS;}
\".*\"				{		colNum+=strlen(yytext);	yylval.r.colNo=colNum;yylval.r.string_val=new string(yytext+1);	yylval.r.string_val->pop_back();			return STRING_VAL;}
[_]*([a-z|A-Z])([a-z|A-Z|0-9|_])*					{		colNum+=strlen(yytext);yylval.r.colNo=colNum;		yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);		return IDENTIFIER;}
" "|\t|\a|\r									{		colNum+=strlen(yytext);yylval.r.colNo=colNum;				    }
"//".*								{		colNum+=strlen(yytext);yylval.r.colNo=colNum;			   }
"\n"                    { lineNum++;  colNum=1;yylval.r.colNo=colNum;yylval.r.lineNo=lineNum;}
"."                      {colNum+=1;yylval.r.colNo=colNum;				return DOT;}
%%
