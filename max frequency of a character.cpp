//To print the frequency of the most occuring character and itself as well.

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cout<<"Enter string"<<endl;
    getline(cin,s);
    cin.ignore();
    int f[26];
    for(int i=0;i<26;i++)
      f[i]=0;                         //setting frequency for all alphabets to zero.
    for(int i=0;i<s.size();i++)
      f[s[i]-'a']++;                  //to access index for the alphabet that occurs, and increment its frequency by 1.
    int max=0;                        //stores frequency of most occuring alphabet.
    char alp='a';                     //will store most occuring alphabet.
    for(int i=0;i<26;i++)
    {
      if(max<f[i])
        {
          max=f[i];
          alp=i+'a';
        }
    }
    cout<<max<<" "<<alp;
    return 0;
}
