#include <iostream>
using namespace std;

int main()
{
 char ch;
cin >> ch;

if(ch>= 'a' && ch <='z')
{
cout << "Lower case";
}
else if (ch>= 'A' &&ch <= 'Z')
{
     cout<< "Upper case";
}
else if(ch >='0' && ch <= '9')
{
 cout << "numeric";
}
}