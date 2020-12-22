#include <iostream>
#include <stack>
using namespace std;
bool bracecheck(string brace)
{ 
    stack <char> s;
    char x;
    for(int i=0;i<brace.length();i++)
    {   
        //checking for opening braces initially.
        
        if(brace[i]=='('||brace[i]=='{'||brace[i]=='[')
            {
                s.push(brace[i]);
                continue;
            }
            
            //when no opening braces found, so checking if stack is empty (if this happens, then the braces are unbalanced)
            
        if(s.empty())
            return false;
        
            //if string now has closing braces to be checked.
        
        switch(brace[i])
        {
            case ')':
                x=s.top();
                s.pop();
                if(x=='{'||x=='[')      //if any non-matching brace is found.
                    return false;
                break;    
            case '}':
                x=s.top();
                s.pop();
                if(x=='('||x=='[')      //if any non-matching brace is found.
                    return false;
                break;
            case ']':
                x=s.top();
                s.pop();
                if(x=='('||x=='{')      //if any non-matching brace is found.
                    return false;
                break;                
        }            
    }
    return(s.empty());
}      
int main()
{
    string bracestring;   
    int i,flag=0;
    cout<<"Enter string of brackets here, valid inputs are (, ), {, }, [, ]."<<endl;
    cin>>bracestring;
    if(bracecheck(bracestring))
        cout<<"The string is valid."<<endl;
    else
        cout<<"The string is invalid."<<endl;
return 0;    
} 