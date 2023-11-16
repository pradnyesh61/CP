// 16 November 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

void subset(int i, int n,string s,string nums,vector<string> st,string &ans, int leng,bool &check)
    {
        if(i >= n)
        {
            if(s.length() == leng)
            {
                if(find(st.begin(),st.end(),s) == st.end())
                {
                    check = true;
                    ans = s;
                }   
            }

            return;
        }

        if(check)
        {
            return;
        }

        s += nums[i];
        subset(i+1,n,s,nums,st,ans,leng,check);
        s.pop_back();
        subset(i+1,n,s,nums,st,ans,leng,check);
        
    }

    string findDifferentBinaryString1(vector<string>& nums) {
        
        if(nums.size() == 1 )
        {
            if(nums[0] == "1")
            {
                return "0";
            }
            return "1";
        }

        string ans;
        string num = "";

       for(int i = 0 ; i< nums.size() ; i++)
        {
            num += nums[i];
        }

        string s="";
        bool check = false;

        subset(0,num.length(),s,num,nums,ans,nums[0].length(),check);

        
       if(ans == "")
       {
        reverse(num.begin(), num.end());
        subset(0,num.length(),s,num,nums,ans,nums[0].length(),check);
       }
        return ans;
    }

    string changechar(int i, string ans, vector<string> &nums)
    {
        if(i == nums.size())
        {
            if(find(nums.begin(),nums.end(),ans) == nums.end())
            {
                return ans;
            }
            
            return "";
        }

        if(find(nums.begin(),nums.end(),ans) == nums.end())
        {
            return ans;
        }

        string s = ans;
        s[i] = '1';
       string a = changechar(i+1,s,nums);
        if(a != "")
        {
            return a;
        }
        cout<<"a = "<<a<<endl;
       string b = changechar(i,ans,nums);
        if(b != "")
        {
            return b;
        }
        cout<<"b = "<<b<<endl<<endl;

        return "";
    }

     string findDifferentBinaryString(vector<string>& nums) {
        
        if(nums.size() == 1 )
        {
            if(nums[0] == "1")
            {
                return "0";
            }
            return "1";
        }

        string ans;
        string num = "";

       for(int i = 0 ; i< nums.size() ; i++)
        {
            num += '0';
        }

        return changechar(0,num,nums);

    }
};