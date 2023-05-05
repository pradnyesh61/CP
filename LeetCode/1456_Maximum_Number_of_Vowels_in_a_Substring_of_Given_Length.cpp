// 4 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isVowel(char c)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return true;
        return false;
    }

    // int vowels(int i, string s, string ans)
    // {
    //     if(i < 0)
    //     {
    //        return 0;
    //     }

    //     if(i == 0 )
    //     {
    //         if(isVowel(s[i]))
    //             return ans.size()+1;

    //         return ans.size();
    //     }

    //     int match = INT_MIN;
    //     int notMatch = INT_MIN;

    //     notMatch = vowels(i-1,s,"");

    //     if(isVowel(s[i]))
    //     {
    //         ans += s[i];

    //         cout<<ans<<endl;
    //         match = vowels(i-1,s,ans);
    //     }else{
    //         match = ans.size();
    //     }

    //     return max(match,notMatch);
    // }

    int countVowel(string s)
    {
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (isVowel(s[i]))
            {
                count++;
            }
        }
        return count;
    }

    // int vowels(int i, string s, int k, string ans)
    // {
    //     cout<<i<<" = "<<ans<<" = "<<k<<endl;

    //     if(k == 0)
    //     {
    //         int count = countVowel(ans);
    //         cout<<"count === "<<ans<<" = "<<count<<endl<<endl;
    //         return count;
    //     }

    //     if(i < 0)
    //     {
    //         int count = countVowel(ans);
    //         cout<<"i count === "<<ans<<" = "<<count<<endl<<endl;
    //         return count;
    //     }

    //     int match = 0;
    //     int notMatch = 0;

    //     if(k)
    //     {
    //         ans += s[i];
    //         match = vowels( i-1, s, k-1, ans);
    //     }

    //     notMatch = vowels(i-1,s,k,"");

    //     return max(match ,notMatch);

    // }

    int vowels(int i, string s, int k, string ans, int count1)
    {

        if (k == 0)
        {
            // cout<<ans<<" "<<count1<<endl;
            // int count = countVowel(ans);
            return count1;
        }

        if (i == 0)
        {
            if (isVowel(s[i]))
            {
                count1 += 1;
            }
            // cout<<ans<<" "<<count1<<endl;
            // int count = countVowel(ans);
            return count1;
        }

        int match = 0;
        int notMatch = 0;

        if (k)
        {
            ans += s[i];
            int temp = count1;
            if (isVowel(s[i]))
            {
                temp += 1;
            }
            match = vowels(i - 1, s, k - 1, ans, temp);
        }

        notMatch = vowels(i - 1, s, k, "", 0);

        return max(match, notMatch);
    }

    // int sliding(string s,int k)
    // {

    //     int maxi = 0;
    //     for(int i = 0; i < s.length();i++)
    //     {
    //         string ans= "";
    //         int count =0 ;
    //         for(int j = i; j < i+k && j < s.length() ;j++)
    //         {
    //             ans += s[j];
    //             if(isVowel(s[j]))
    //             {
    //                 count++;
    //             }
    //            // cout<<ans<<" = "<<count<<endl;
    //         }

    //         if(maxi < count)
    //         {
    //             maxi = count;
    //         }
    //     }

    //     return maxi;
    // }

    int sliding(string s, int k)
    {

        int maxi = 0;
        int count = 0;
        int i = 0;
        string ans = "";
        for (i = 0; i < k && i < s.length(); i++)
        {
            ans += s[i];
            if (isVowel(s[i]))
            {
                count++;
            }
        }

        if (maxi < count)
        {
            maxi = count;
        }

        int j = 0;

        for (; i < s.length(); i++)
        {
            ans += s[i];
            if (isVowel(ans[0]))
            {
                count--;
            }
            ans.erase(0, 1);

            if (isVowel(s[i]))
            {
                count++;
            }

            if (maxi < count)
            {
                maxi = count;
            }

            // cout<<ans<<" "<<count<<endl;
        }

        return maxi;
    }

    int maxVowels(string s, int k)
    {

        return sliding(s, k);
        // return vowels(s.size()-1,s,k,"",0);
    }
};