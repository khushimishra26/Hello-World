#include <bits/stdc++.h>
using namespace std;
int maxprofit(vector <int> arr)
{
    sort(arr.begin(),arr.end());
    int n=arr.size()-1;
    int mxprft=arr[n]-arr[0];
    return mxprft;    
}
int main() 
{   vector<int>stocks; 
    int i,stocksize,ele;
    cout<<"Enter the total number of stocks."<<endl;
    cin>>stocksize;
    cout<<"Enter the stocks below."<<endl;
    for(i=0;i<stocksize;i++)
        {   
            cin>>ele;
            stocks.push_back(ele);
        }
	int finalprofit=maxprofit(stocks);
	cout<<"The maximum profit that can be earned by selling and then buying the stock is: "<<finalprofit<<endl;
	return 0;
}
