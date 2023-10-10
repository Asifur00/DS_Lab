#include<iostream>
#include <string>
using namespace std;


void encode(string s, int j)
{
    for(int i=j;i<s.length();i++)
    {
       s[i]=char(int (s[i])+3);
    }
    cout<<"The encoded string is: "<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<s<<endl;
    }

}

void decode(string s, int j)
{
   for(int i=j;i>s.length();i++)
    {
        s[i]=char(int(s[i])-3);
    }
    cout<<"The decoded string is: "<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<s[i];
    }

}
int main()
{
    char text[]="Asifur";
    int j=3;

    encode(text,j);


    decode(text,j);


    return 0;
}

