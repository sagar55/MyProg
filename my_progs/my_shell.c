#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<string.h>
typedef struct stack
{
int n;
char a[100][10];
}stk;
void ini(stk *S)
{
S->n==-1;
}
void push(char b[],stk *S,int j)
{
int i;

if(S->n==99)
printf("can't store more history\n");
else
{S->n=(S->n)+1;

for(i=0;i<=j;i++)
S->a[S->n][i]=b[i];
}
}
void pop(stk *S)
{
int i;
if(S->n==-1)
{printf("no history\n");}
else
{
for(i=0;i<=(S->n);i++)
{printf("%s\n",S->a[i]);}
}
}
void pop1(stk *S,int j)
{
if(S->n==-1)
{printf("no history\n");}
else
{
{printf("%s\n",S->a[j-1]);}
}
}

void changeDirectory(char *ptr) {
	char curr[128];
	int ret, i, pos;
	
	getcwd(curr, 128);
strcat(curr, "/");
		strcat(curr, ptr);
		ret = chdir((const char *)curr);
if(ret == -1) printf("myshell: %s: No such directory...\n", ptr);
}
void getCurrentDirectory(char *s) {
	char curr[128];
	int i, pos;
	getcwd(curr, 128);
           strcpy(s,curr);
}
int main()
{
	char c[20],a[20],temp[200];
stk S;
pid_t p;
int j,i;
ini(&S);
getCurrentDirectory(temp);
			printf("myshell[%s]:- ", temp);
while(1) {
gets(a);
	if(a[0] == '\0')
	{getCurrentDirectory(temp);
			printf("myshell[%s]:- ", temp);}
else if(!strcmp(a,"ls")){
j=strlen(a);
push(a,&S,j);
system("ls");
}
else if(!strcmp(a,"history"))
{
j=strlen(a);
push(a,&S,j);
pop(&S);
}
else if(strstr(a,"history"))
{
if(a[7]!='\0')
{pop1(&S,a[8]-48);}
}
else if(strstr(a,"cd")) {
j=strlen(a);
push(a,&S,j);
for(i=3;i<=strlen(a);i++)
 c[i-3]=a[i];
			changeDirectory(c);
					getCurrentDirectory(temp);
			printf("myshell[%s]:- ", temp);	}
else 
printf("not a recognized command");
	}
	printf("\n");
	return 0;
}

