
void revStr(char* str,int len)
{
    int i;
    char temp;
    for (i=0;i<len/2;i++)
    {
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
}
          
void revWords(char *str)
{
    int i = 0, j = 0;
    revStr(str,strlen(str)); 
    while(1)
    {
        if(*(str+j)==' '||*(str+j)=='\0') 
	{
            revStr( str+i,j-i);
            i = j+1;
        }
        if(*(str+j)=='\0')
            break;
        j++;
    }
}
main()
{
    char s[100];
   gets(s);
    revWords(s); 
     cout<<s<<endl;
       return 0;
      }
      
