//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  bool static comp(pair<int,int> &p1, pair<int,int> &p2)
    {
        if(p1.second != p2.second)
            return p1.second > p2.second;
            
        return p1.first > p2.first;
    }
    
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        map<int,int> m;
        int n = nums.size();
        for(int i = 0;  i <n ; i++)
        {
            m[nums[i]]++;
        }
        
        vector<pair<int,int>> v(m.begin(),m.end());
       
       sort(v.begin(),v.end(),comp); 
      
    
      
      vector<int> temp;
       for(int i = 0 ; i < k ; i++)
       {
           temp.push_back(v[i].first);
       }
      
       
        return temp;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends