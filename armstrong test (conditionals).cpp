//Implementation of looping statements(while) and conditional statements, to generate armstrong numbers; armstrong numbers are those whose sum of the cube of individual digits equals the number itself.
//Eg: 153 = 1^3+5^3+3^3 = 153, thus, 153 is an armstrong number.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num, temp, remainder, result=0;
    cout<<"Enter a three-digit integer\n";
    cin>>num;
    temp=num;       //temp is a temporary int type variable to store and manipulate value of the inputted number, without affecting the original input itself.
    while(temp!=0)
    {
        remainder=temp%10;      //to obtain the last digit of the number.
        result+=pow(remainder,3);
        temp/=10;           //to obtain second to last digit of the number.
    }
    if(result==num)
        cout<<"You have entered an armstrong number.\n";
    else
        cout<<"The number entered is not an armstrong number.\n";
    return 0;
}
