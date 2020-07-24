#include<iostream>
#include<string>
//printing the capital of the given string
using namespace std;
int main()
{
    string str;
    int len;
    cin>>str;
    len=str.length();
    for(int i=0;i<len;i++)
    {
        if(str[i]>64 && str[i]<91)
        {
            cout<<str[i];
        }
    }
}
