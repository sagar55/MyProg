//int(A) to string(S)
 ostringstream convert;  
convert << A;
string S=convert.str();

//char (c) to string(S)
stringstream ss;
string s;
ss << c;
ss >> s;

// string(S) to char (c)
char *c = new char[S.size() + 1];
std::copy(S.begin(), S.end(), c);
c[S.size()] = '\0'; 

or 
const char * c = S.c_str();