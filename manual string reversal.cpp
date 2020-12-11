#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s;
    char temp;
    int i,j;
    cout<<"Enter any string"<<endl;
    cin>>s;
    for(i=0,j=s.length()-1;j>0 && j>i;i++,j--)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    cout<<"Your reversed string is: "<<s<<endl;
    return 0;
}
