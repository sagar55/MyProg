#include <stdio.h>
#include<string.h>
int c[200];
char a[10000];
int patternmatch(char b[100])
{
int p=strlen(b),i=0,j=0,k=0;
while(a[i]!='\0')
{
if(b[k]==a[i])k++;else k=0;
if(k==p)return (i-p); 
i++;
}
return -1;
}
int freq(char b[])
{
int p=strlen(b),f=0,i=0,k=0;
while(a[i]!='\0')
{
if(b[k]==a[i])k++;
else k=0;
if(k==p){f++;k=0;}
i++;
}
return f;
}
int main() 
{ 
int i,j,k,l,m;
char b;
FILE *fp,*fopen();
fp=fopen("a.c","r");
b=getc(fp);i=0;
while(b!=EOF)
{
a[i]=(char)b;
b=getc(fp);i++;
}fclose(fp);
printf(".................symbol declaration and their datatypes..................\n");
i=patternmatch("int ");if(i!=-1){while(a[i]!=';'){printf("%c",a[i]);i++;}printf("\t");k=freq("int ");printf("freq=%d\n",k);}
i=patternmatch("double ");if(i!=-1){while(a[i]!=';'){printf("%c",a[i]);i++;}printf("\t");k=freq("double");printf("freq=%d\n",k);}
i=patternmatch("float ");if(i!=-1){while(a[i]!=';'){printf("%c",a[i]);i++;}printf("\t");k=freq("float");printf("freq=%d\n",k);}
i=patternmatch("char ");if(i!=-1){while(a[i]!=';'){printf("%c",a[i]);i++;}printf("\t");k=freq("char");printf("freq=%d\n",k);}
i=patternmatch("long int ");if(i!=-1){while(a[i]!=';'){printf("%c",a[i]);i++;}printf("\t");k=freq("long int");printf("freq=%d\n",k);}
printf(".........................loop statemants and keywords............\n");
i=patternmatch("if");if(i!=-1){printf("if\t");k=freq("if");printf("freq=%d\n",k);}
i=patternmatch("for");if(i!=-1){printf("for\t");k=freq("for");printf("freq=%d\n",k);}
i=patternmatch("while");if(i!=-1){printf("while\t");k=freq("while");printf("freq=%d\n",k);}
i=patternmatch("else ");if(i!=-1){printf("else\t");k=freq("else");printf("freq=%d\n",k);}
i=patternmatch("do");if(i!=-1){printf("do\t");k=freq("char");printf("freq=%d\n",k);}
i=patternmatch("return");if(i!=-1){printf("return\t");k=freq("return");printf("freq=%d\n",k);}
i=patternmatch("default");if(i!=-1){printf("default\t");k=freq("default");printf("freq=%d\n",k);}
i=patternmatch("continue");if(i!=-1){printf("continue\t");k=freq("continue");printf("freq=%d\n",k);}
i=patternmatch("goto");if(i!=-1){printf("goto\t");k=freq("goto");printf("freq=%d\n",k);}
i=patternmatch("enum");if(i!=-1){printf("enum\t");k=freq("enum");printf("freq=%d\n",k);}
i=patternmatch("switch");if(i!=-1){printf("switch\t");k=freq("switch");printf("freq=%d\n",k);}
i=patternmatch("break");if(i!=-1){printf("break\t");k=freq("break");printf("freq=%d\n",k);}
i=patternmatch("case");if(i!=-1){printf("case\t");k=freq("case");printf("freq=%d\n",k);}
printf("................assignment symbol..................\n");
i=patternmatch("+");if(i!=-1)printf("+\n");
i=patternmatch("-");if(i!=-1)printf("-\n");
i=patternmatch("/");if(i!=-1)printf("\n");
i=patternmatch("%");if(i!=-1)printf("%%\n");
i=patternmatch("*");if(i!=-1)printf("*\n");
i=patternmatch(">");if(i!=-1)printf(">\n");
i=patternmatch("<");if(i!=-1)printf("<\n");
i=patternmatch(">=");if(i!=-1)printf(">=\n");
i=patternmatch("<=");if(i!=-1)printf("<=\n");
getch();
return 0;
}
