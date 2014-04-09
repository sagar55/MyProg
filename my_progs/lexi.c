%{
    
    int lnno=0,wordno=0,charno=0;
%}

word [.* .*\t]
eol [\n]

%%
{word}    {wordno++; charno+=yyleng;}
{eol}     {charno++;lnno++;wordno++;}
.    {charno++;}
%%
main()
{
    yylex();
    printf("Line number= %d\n",lnno);
    printf("Word number= %d\n",wordno);
    printf("Character number= %d\n",charno);
    return 0;
}

Output:

nn@linuxmint ~ $ lex l6.l
nn@linuxmint ~ $ gcc lex.yy.c -lfl
nn@linuxmint ~ $ ./a.out <c1.c
Line number= 13
Word number= 43
Character number= 232
nn@linuxmint ~ $ 
( input file : c1.c

#include<stdio.h>
main ()
{
    int i,n,fact=1;
    printf("Enter the number: ");
    scanf("%d",&n);            //inputing the number
    for(i=1;i<=n;i++)        /* finding factorial */
    {
        fact = fact*i;
    }
    printf("Factorial=%d\n",fact);

}
)




%{
#include <stdio.h>
#include <stdlib.h>
int cno = 0, wno = 0, lno = 0; /*counts of characters, words and lines */
%}

character [a-zA-Z]
digit [0-9]
word ({character}|{digit})+
line \n

%%

{line} { cno++; lno++; }
{word} { wno++; cno += strlen(yytext); }
. { cno++; }

%%

int main(void)
{
    yylex();
    printf("Number of characters: %d; ", cno);
    printf("Number of words:      %d; ", wno);
    printf("Number of lines:      %d\n", lno);
    return 0;
}
