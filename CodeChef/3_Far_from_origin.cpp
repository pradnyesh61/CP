#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
while(t--)
	{
	    int x,y,x1,y1;
	    cin>>x>>y>>x1>>y1;
	    
	    int a = (x*x) + (y*y);
	    int b = (x1*x1) + (y1*y1);
	    
	   if(a < b)
	   {
	       cout<<"BOB"<<endl;
	   }else
	   if(a > b)
	   {
	       cout<<"ALEX"<<endl;
	   }
	   else{
	       cout<<"EQUAL"<<endl;
	   }
	   
	}
	return 0;
}
