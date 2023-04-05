#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	while(n--)
	{
	    int a,b;
	    cin>>a>>b;
	    
	    int count = 0;
	    
	    while(a--)
	    {
	        int x;
	        cin>>x;
	        
	        if(x >= b)
	        {
	            count++;
	        }
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}
