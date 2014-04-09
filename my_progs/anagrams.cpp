#include<stdio.h>
int check_anagram(char *str1,char *str2)
{
    int b[300],c[300];
    for(i=0;i<300;i++)
    {
    b[i]=0;
    c[i]=0;
}
    for(i=0;i<strlen(str1);i++)
  {  b[str1[i]]++;
  c[str2[i]]++;
}
    for(i=0;i<strlen(str2);i++)
    {
    if(a[i]!=b[i])
    return 0;

}
return 1;
}
    
main()
{
    
