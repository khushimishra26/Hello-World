#include<bits/stdc++.h>
using namespace std;
void decimaltobinary(int decimalnumber)
{
    int i=0,binary[32];
    while(decimalnumber>0)
    {
        binary[i]=decimalnumber%2;
        decimalnumber/=2;
        i++;
    }
    cout<<"Binary equivalent of the inputted decimal number is: ";
    for(int j=i-1;j>=0;j--)
        cout<<binary[j];
}
int main()
{
    int decimal;
    cout<<"Enter a number in its decimal form (eg- 2, 3 etc.)"<<endl;
    cin>>decimal;
    decimaltobinary(decimal);
    return 0;
}
