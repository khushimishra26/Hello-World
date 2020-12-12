#include <iostream>
using namespace std;
int main()
{
    int number,i,flag=0;
    cout<<"Enter the number"<<endl;
    cin>>number;
    for(i=2;i<number/2;i++)
    {
        if(number%i!=0)
        continue;
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    cout<<"The inputted number is composite."<<endl;
    else
    cout<<"The inputted number is prime."<<endl;
    return 0;
}
