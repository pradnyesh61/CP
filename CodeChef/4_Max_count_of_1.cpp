#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	while(n--)
	{
	    int a;
	    cin>>a;
	    
	    string s;
	    cin>>s;
	    
	    string x(a,0);
	    x[1] = 1;
	    string z;
	    
	    for(int i = 1 ; i< a ; i++)
	    {
	        x[i+1] = x[i] ^ s[i];
	        z.push_back(stoi(x[i])^stoi(s[i]));
	    }
	    
	    cout<<x<<endl;
	}
	return 0;
}
