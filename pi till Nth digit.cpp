#include <bits/stdc++.h>
using namespace std;
void pitillNthdigit(int N,double pi)
{
    printf("%.*lf\n", N, pi);
}

int main()
{
    int N;
    cout<<"Enter value of N (precision value)."<<endl;
    cin>>N;
    double pi=2*acos(0.0);
    pitillNthdigit(N,pi);
    return 0;
}
