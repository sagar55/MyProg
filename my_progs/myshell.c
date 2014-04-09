#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<string.h>
#include <signal.h>
#define  MAXARG  64
typedef struct stack
{
int n;
char a[100][50];
}stk;
void ini(stk *S)
{
S->n=-1;
}
void sig_handler(int signal) {
  int status;
  int result = wait(&status);

  printf("Wait returned %d\n", result);
}
 int times_up(int sig)
     {
        printf("Caught signal #< %d >n", sig);
        printf("Time's up!  I'm outta here!!\n");
        exit(sig);                        
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
{printf("%d %s\n",i+1,S->a[i]);}
}
}
void pop1(stk *S,int j)
{
int i,count;
if(S->n==-1||j>99)
{printf("no history\n");}
else
{
i=S->n-j+1;
count=0;
while(count++<j)
{printf("%d %s\n",i,S->a[i++]);
}
}
}
 int parse_cmd(char *buf,char **args)
     {
        int count = 0;
        while (*buf != '\0' && count < MAXARG)
           {
           while ((*buf == ' ') || (*buf == '\t'))
                 *buf++ = '\0';
           *args++ = buf;
           ++count;
           while ((*buf != '\0') && (*buf != ' ') && (*buf != '\t'))
                 buf++;
           }
        *args = (char *) NULL;   
        return count;
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
void changeDirectory1(char *curr) {
	int ret, i, pos;
		ret = chdir((const char *)curr);
if(ret == -1) printf("myshell: No such directory...\n");
}
void getCurrentDirectory(char *s) {
	char curr[128];
	int i, pos;
	getcwd(curr, 128);

           strcpy(s,curr);
}
int main()
{
	char c[200],a[200],temp[50],home[50],*args[50];
stk S;
pid_t p;
int j,i,fd,n,flag=0,pid,num_arg,status,block;
  sigset(SIGCHLD, sig_handler);
ini(&S);
getCurrentDirectory(home);
while(1) {
if(!flag){
getCurrentDirectory(temp);
printf("myshell[%s]:- ", temp);
gets(a);
num_arg = parse_cmd(a,args);}
flag=0;

	if(a[0]== '\0');
else if(feof(stdin))
{printf("\n");
exit(0);}
else if(num_arg>1&&strstr(args[1],"&")){
        pid = fork();
if(pid==0)
{signal(SIGALRM,times_up);  alarm (10);
execvp(args[0], args);
//execlp(arg[0], "/usr", (char *) 0);
while(1);
            exit(0); }

           else{
    printf("Waiting for child, pid = %d\n",pid);
    waitpid(pid, &status, 0);
    printf("child process finished of pid = %d\n",pid);
  }
} 
else if(!strcmp(a,"ls")){
j=strlen(a);
push(a,&S,j);
system("ls");
}
else if(!strcmp(args[0],"history"))
{
i=0;n=0;
if(num_arg==1)
pop(&S);
else{
strcpy(c,args[1]);
while(c[i]!='\0')
{  n=n*10+c[i++]-48;}
pop1(&S,n);}
j=strlen(a);push(a,&S,j);
}
else if(!strcmp(args[0],"issue"))
{
n=0;push(a,&S,j);strcpy(c,args[1]);
while(c[i]!='\0')
{  n=n*10+c[i++]-48;}
j=strlen(a);
strcpy(a,S.a[n-1]);
flag=1;
}
else if(!strcmp(args[0],"cd"))
{j=strlen(a);push(a,&S,j);
if(num_arg==1)
changeDirectory1(home);
else{
changeDirectory(args[1]);
}}
else if (!strcmp(args[0],"rm")){
	 push(a,&S,j);
	fd=unlink(args[1]);
	printf("File deleted\n");
	if(fd==-1)
	printf("Can't delete file\n");
}
else if(!strcmp(a,"quit"))
exit(0);
else 
printf("not a recognized command\n");
	}
	printf("\n");
	return 0;
}

