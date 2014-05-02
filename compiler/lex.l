%{
	#include "yacc.hpp"
	#include <iostream>
	#include <istream>
	#include <ostream>
	#include <stdlib.h>
	int lineNum=1;
	int colNum=0;
	

%}
%option c++
%option noyywrap
%option yylineno
%x comment
digit						[0-9]
FLOAT						("+"|"-")?({digit}+\.{digit}+)

%%
"/*" {colNum+=2;	yylval.r.colNo=colNum;	BEGIN(comment);}
<comment>"\n" {lineNum+=1;	yylval.r.lineNo=lineNum;	BEGIN(comment);}
<comment>"*"*[^"/"] {colNum+=strlen(yytext);	yylval.r.colNo=colNum;}
<comment>[^"*"]*    {colNum+=strlen(yytext);	yylval.r.colNo=colNum;}
<comment>"*"+"/" { colNum+=strlen(yytext);	yylval.r.colNo=colNum; BEGIN(INITIAL);}

"@interface"		{colNum+=10;	yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;	yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);	return AT_INTERFACE;}
"@protocol"			{colNum+=9;	yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;				    		return AT_PROTOCOL;}
":"					{colNum+=1;	yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;							return SEMI_COLUMN;}
"NSString"			{colNum+=8;	yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;	yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);						return NSSTRING;}
"float"				{colNum+=5;	yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;		yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);					return FLOAT;}
"char"				{colNum+=4;  yylval.r.colNo=colNum;   yylval.r.lineNo=lineNum;		yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);						return CHAR;}
"bool"				{colNum+=4;  yylval.r.colNo=colNum;   yylval.r.lineNo=lineNum;			yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);					return BOOL;}
"int"				{colNum+=3;	yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;	yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);						return INT;}
";"					{colNum+=1;	yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;								return SEMI_COMA;}
"id"				{colNum+=2;	yylval.r.colNo=colNum;		yylval.r.lineNo=lineNum;								return ID;}
"@public"			{colNum+=7;	yylval.r.colNo=colNum;		yylval.r.lineNo=lineNum;		yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);				return AT_PUBLIC;}
"@protected"		{colNum+=10;yylval.r.colNo=colNum;		yylval.r.lineNo=lineNum;		yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);					return AT_PROTECTED;}
"@private"			{colNum+=8;	yylval.r.colNo=colNum;		yylval.r.lineNo=lineNum;		yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);				return AT_PRIVATE;}
"{"					{colNum++;	yylval.r.colNo=colNum;			yylval.r.lineNo=lineNum;					return OPEN_S;}
"}"					{colNum++;	yylval.r.colNo=colNum;			yylval.r.lineNo=lineNum;						return CLOSE_S;}
","					{colNum++;	yylval.r.colNo=colNum;		yylval.r.lineNo=lineNum;							return COMMA;}
"<"					{colNum++;	yylval.r.colNo=colNum;		yylval.r.lineNo=lineNum;						return LESS_THAN;}
">"					{colNum++;	yylval.r.colNo=colNum;		yylval.r.lineNo=lineNum;						return MORE_THAN;}
"@end"				{colNum+=4;	yylval.r.colNo=colNum;			yylval.r.lineNo=lineNum;						return AT_END;}
"const"				{colNum+=5;	yylval.r.colNo=colNum;			yylval.r.lineNo=lineNum;					return CONST;}
"void"				{	colNum+=4;	yylval.r.colNo=colNum;		yylval.r.lineNo=lineNum;	yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);				return VOID;}
"+"					{colNum++;	yylval.r.colNo=colNum;			yylval.r.lineNo=lineNum;					return PLUS;}
"-"					{colNum++;	yylval.r.colNo=colNum;			yylval.r.lineNo=lineNum;						return MINUS;}
"("					{colNum++;	yylval.r.colNo=colNum;			yylval.r.lineNo=lineNum;						return OPEN_P;}
")"					{colNum++;	yylval.r.colNo=colNum;			yylval.r.lineNo=lineNum;							return CLOSE_P;}
"@implementation"	{colNum+=15;yylval.r.colNo=colNum;				yylval.r.lineNo=lineNum;				return AT_IMPLEMENTATION;}
"&&"				{colNum+=2;	yylval.r.colNo=colNum;				yylval.r.lineNo=lineNum;						return AND_AND;}
"||"				{	colNum+=2;yylval.r.colNo=colNum;				yylval.r.lineNo=lineNum;					return OR_OR;}
"<="				{colNum+=2;		yylval.r.colNo=colNum;				yylval.r.lineNo=lineNum;				return LESS_OR_EQUAL;}
">="				{colNum+=2;	yylval.r.colNo=colNum;					yylval.r.lineNo=lineNum;					return MORE_OR_EQUAL;}
"*"					{colNum++;	yylval.r.colNo=colNum;					yylval.r.lineNo=lineNum;					return MULTI;}

"=="				{colNum+=2;	yylval.r.colNo=colNum;					yylval.r.lineNo=lineNum;					return EQUAL_EQUAL;}
"!="				{colNum+=2;	yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;									return NOT_EQUAL;}
"for"				{colNum+=3;	yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;									return FOR;}
"="					{	colNum++;yylval.r.colNo=colNum;yylval.r.lineNo=lineNum;									return EQUAL;}
"%"					{colNum++;	yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;								return DIV;}
"while"			{		colNum+=5;	yylval.r.colNo=colNum;yylval.r.lineNo=lineNum;							return WHILE;}
"if"				{	colNum+=2;yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;									return IF;}
"else"              {   colNum+=2;yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;									return ELSE;}
"do"                {  colNum+=2;  yylval.r.colNo=colNum; yylval.r.lineNo=lineNum;                                     return DO;}
"switch"            {  colNum+=6;  yylval.r.colNo=colNum;  yylval.r.lineNo=lineNum;                                  return SWITCH;}
"case"              {   colNum+=4;  yylval.r.colNo=colNum;    yylval.r.lineNo=lineNum;                               return CASE;}
"default"           {   colNum+=7;   yylval.r.colNo=colNum;   yylval.r.lineNo=lineNum;                             return DEFAULT;}
"break"             {   colNum+=5; yylval.r.colNo=colNum;     yylval.r.lineNo=lineNum;                           return BREAK;}
"enum"              {   colNum+=4;  yylval.r.colNo=colNum;   yylval.r.lineNo=lineNum;                            return ENUM;}
"["					{	colNum++;	yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;								return OPEN_ARR;}
"]"					{	colNum++;yylval.r.colNo=colNum;		yylval.r.lineNo=lineNum;							return CLOSE_ARR;}
"true"				{	colNum+=4;yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;								return TRUE;}
"false"				{	colNum+=5;	yylval.r.colNo=colNum;		yylval.r.lineNo=lineNum;					return FALSE;}
"struct"  {		colNum+=6;	yylval.r.colNo=colNum;		yylval.r.lineNo=lineNum;	return STRUCT;}
"return"			{		colNum+=6;	yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;						return RETURN;}
([1-9][0-9]*)|0		{  colNum+=strlen(yytext);yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum; yylval.r.int_val=atoi(yytext);		return INT_VAL;}
{FLOAT}				{	colNum+=strlen(yytext);	yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;			return FLOAT_VAL;}
\'[a-zA-z]\'		{	colNum+=strlen(yytext);yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;		return CHAR_VAL;}
"++"                {  colNum+=strlen(yytext);yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;		return DOUBLEPLUS;}
"--"                {  colNum+=strlen(yytext);yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;		return DOUBLEMINUS;}
\".*\"				{		colNum+=strlen(yytext);	yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;		return STRING_VAL;}
[_]*([a-z|A-Z])([a-z|A-Z|0-9|_])*					{		colNum+=strlen(yytext);	yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;yylval.r.text=new char[265];yylval.r.text[0]='\0'; strcat(yylval.r.text,yytext);		return IDENTIFIER;}
" "|\t|\a|\r									{		colNum+=strlen(yytext);	yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;		    }
"//".*								{		colNum+=strlen(yytext);	yylval.r.colNo=colNum;yylval.r.lineNo=lineNum;		   }
"\n"                    { lineNum++; yylval.r.lineNo=lineNum; colNum=0;}
"."                      {colNum+=1;	yylval.r.colNo=colNum;	yylval.r.lineNo=lineNum;		return DOT;}
.          {colNum+=strlen(yytext);	yylval.r.colNo=colNum;yylval.r.lineNo=lineNum; }
%%
