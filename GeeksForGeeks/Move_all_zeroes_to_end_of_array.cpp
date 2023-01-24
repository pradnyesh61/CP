
//24 Jan 2023
// practice SDE sheet


#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    
	    int i = 0;
	    int j = 0;
	    
	    while(i < n)
	    {
	        if(arr[i])
	        {
	            int a= arr[i];
	            arr[i++] = arr[j];
	            arr[j++] = a;
	       
	        }
	        else{
	            i++;
	        }
	    }
	    
	}
};