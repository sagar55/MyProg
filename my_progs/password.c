string_get_pass()	 //func to get input as a password with asterix
{
char *pass;
int i=0;
char ch;
do
{
ch=_getch();
if(ch==8) // if the charecter is backspace
{
cout< <'\b'; //clear one output
cout<<' ';
cout<<'\b';
if(i>0)
i--;
pass.erase(i,1); //clear one character from tthe string
}
else if(ch!=8 && ch!=13)
{
pass=pass+ch; // storing every charecter exept backspace and enter in the string
cout< <"*"; // display a * for every letter!
i++;
}
}while(ch!=13); // until the user presses enter!!!
return pass;
}
main()
{
      string_get_pass();
      getch();
      }
