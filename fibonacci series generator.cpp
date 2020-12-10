//Implementaion of a function (fibonacci) and a looping statement in generating a fibonacci series.
#include <iostream>
using namespace std;
void fibonacci(int f)
    {int i,term1=0,term2=1,nxtterm=0;
    for(i=1;i<=f;i++)
        {if(i==1)
            {cout<<" "<<term1;
            continue;}
        else if(i==2)
            {cout<<" "<<term2<<" ";
            continue;}
        //Adding two terms(term1 and term2), putting result in another variable(nxtterm), and then putting nxterm value in term2.        
        nxtterm=term1+term2;
        term1=term2;
        term2=nxtterm;
        cout<<nxtterm<<" ";    
        }
    }
int main()
{int fib;
cout<<"Enter the number ";
cin>>fib;
cout<<"Fibonacci series is: ";
fibonacci(fib);                         //function call
return 0;}
