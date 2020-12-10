#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    int i,j,flag=0;
    string s;
    cout<<"Enter the string"<<endl;
    getline(cin,s);
    for(i=0,j=s.length()-1;s[i]!='\0';i++,j--)
    {
        if(s[i]==s[j])
            continue;
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"String is not a palindrome"<<endl;
    else
        cout<<"String is a palindrome"<<endl;
    
    return 0;
}