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
	    
	    int i = 1;
	    int count = 0;
	    
	    while(b < a)
	    {
	        b += i;
	        i++;
	        count++;
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}
