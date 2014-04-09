#include<stdio.h>
#include<conio.h>
int main()
{
FILE *fp;
int i=0,g;
char ch,st[10];
fp=fopen("i.c","r");
while((ch=getc(fp))!=EOF)
printf("%c",ch);
rewind(fp);
printf("\n\n");
while((ch=getc(fp))!=EOF)
{
if(isalpha(ch)||isdigit(ch)||ch=='.'||ch=='['||ch=='_')
{
st[i]=ch;
i++;
g=i;
if(ch=='[')
{
while((ch=getc(fp))!=']')
{
st[i]=ch;
i++;
}
st[i]=']';
i++;
st[i]='\0';
printf("%s\t array identifier",st);
if(isdigit(st[g+1]))
{
if(isdigit(st[g+1])&&isdigit(st[i-2]))
printf("\n");
else
printf("\t----->error\n");
}
else
printf("\n");
i=0;
continue;
}
}
else
{
st[i]='\0';
if(strcmp(st,"main")==0||strcmp(st,"clrscr")==0||strcmp(st,"getch")==0)
{
st[i]=ch;
i++;
while((ch=getc(fp))!=')')
{
st[i]=ch;
i++;
}
st[i]=')';
i++;
st[i]='\0';
printf("%s\t function\n",st);
i=0;
st[i]='\0';
ch='\0';
}
if(strcmp(st,"printf")==0||strcmp(st,"scanf")==0)
{
printf("%s\t I/O function\n",st);
i=0;
st[i]='\0';
if(ch=='(')
printf("%c\t special symbol\n",ch);
while((ch=getc(fp))!=';')
{
if(isalpha(ch)||ch=='[')
{
st[i]=ch;
i++;
if(ch=='[')
{
while((ch=getc(fp))!=']')
{
st[i]=ch;
i++;
}
st[i]=']';
i++;
st[i]='\0';
printf("%s\t array identifier\n",st);
i=0;
st[i]='\0';
}
}
else
{
if(st[0]!='\0')
{
printf("%s\t identifier\n",st);
i=0;
}
}
st[i]='\0';
if(ch=='&')
printf("%c\t address operator\n",ch);
if(ch=='('||ch==')'||ch==',')
printf("%c\t special symbol\n",ch);
if(ch=='"')
{
printf("%c",ch);
while((ch=getc(fp))!='"')
{
printf("%c",ch);
}
printf("%c\t control string\n",ch);
}
}
}
if(strcmp(st,"if")==0||strcmp(st,"then")==0||strcmp(st,"while")==0||strcmp(st,"for")==0)
{
printf("%s\t keyword \n",st);
i=0;
st[i]='\0';
}
if(strcmp(st,"int")==0||strcmp(st,"float")==0||strcmp(st,"char")==0||strcmp(st,"double")==0||strcmp(st,"void")==0)
{
printf("%s\t datatype\n",st);
i=0;
st[i]='\0';
}
else
{
if(isspace(ch))
{
i=0;
continue;
}
if(isdigit(st[0]))
printf("%s\t constant\n",st);
if(st[0]!='\0'&&isalpha(st[0]))
printf("%s\t identifier\n",st);
i=0;
}
if(ch=='=')
{
ch=getc(fp);
if(ch=='=')
printf("==\t relational operator\n");
else
{
printf("=\tassignment operator\n");
st[i]=ch;
i++;
}
}
if(ch==';'||ch==',')
printf("%c\t special symbol\n",ch);
else if(ch=='('||ch==')'||ch=='{'||ch=='}')
printf("%c\t special symbol\n",ch);
else if(ch=='*'||ch=='/')
printf("%c\t arithmetic operator\n",ch);
else if(ch=='+'||ch=='-')
{
st[i]=ch;
i++;
ch=getc(fp);
if(ch=='+')
{
st[i]=ch;
i++;
st[i]='\0';
printf("%s\tincrement operator\n",st);
i=0;
continue;
}
if(ch=='-')
{
st[i]=ch;
i++;
st[i]='\0';
printf("%s\tdecrement operator\n",st);
i=0;
continue;
}
if(ch=='=')
{
st[i]=ch;
i++;
st[i]='\0';
printf("%s\t shorthand operator\n",st);
i=0;
continue;
}

else
{
printf("%s\t arithmetic operator\n",st);
i=0;
st[i]=ch;
i++;
st[i]='\0';
}
}
if(ch=='>'||ch=='<')
{
st[i]=ch;
i++;
ch=getc(fp);
if(ch=='=')
{
st[i]=ch;
i++;
st[i]='\0';
printf("%s\t relational operator\n",st);
i=0;
}
else
{
printf("%s\t relational operator\n",st);
i=0;
st[i]=ch;
i++;
st[i]='\0';
}
}
}
}
//rewind(fp);
//fclose(fp);
getch();
}

