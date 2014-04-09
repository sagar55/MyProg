//evaluation of postfix exp.
#include<stdio.h>
#include"stack.c"
main()
{
      int i,j,k,r;
      char post[20];
      stack s;
      clear(&s);
      printf("enter postfix exp.\t");
      scanf("%s",post);
      for(i=0;post[i]!='\0';i++)
      {
           if(post[i]>=48&&post[i]<58)
                push(&s,post[i]-'0');
           else
           {
               j=pop(&s);
               k=pop(&s);
               r=eval(post[i],j,k);
               push(&s,r);
           }
      } 
      printf("value of postfix exp. is  %d",pop(&s));
getch();
}   
