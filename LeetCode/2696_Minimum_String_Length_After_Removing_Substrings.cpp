// 21 May 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // int minLength(string s) {
        
    //     bool check = true;
    //     int i = 0;

    //     while(i < s.length())
    //     {   
    //         cout<<i<<" = "<<s<<endl<<endl;
    //         if(s[i] == 'A' || s[i] == 'C')
    //         {
    //             if(s[i] == 'A' && i+1 < s.length() && s[i+1] == 'B')
    //             {
    //                 s.erase(s.begin()+i,s.begin()+(i+2));
    //             }
    //             else if( s[i] == 'C' && i+1 < s.length() && s[i+1] == 'D')
    //             {
    //                s.erase(s.begin()+i,s.begin()+(i+2));
    //             }
    //             else{
    //                 i++;
    //             }
    //         }
    //         else {
    //             i++;
    //         }

    //     }
    //     cout<<s<<endl;
    //     return s.length();
    // }

    //  int minLength(string s) {
        
    //     stack<char> st;

    //     for(int i = 0 ; i < s.length() ; i++)
    //     {
    //         st.push(s[i]);
          
    //         while(st.size() > 0 && st.top() == 'A' || st.top() == 'C')
    //         {
    //             if(st.top() == 'A'  && i+1 < s.length() && s[i+1] == 'B')
    //             {
    //                 st.pop();
    //                 i++; 
    //             }            
    //             else if( st.top() == 'C' && i+1 < s.length() && s[i+1] == 'D')
    //             {
    //                 st.pop();
    //                 i++;
    //             }
    //             else{
    //                 break;
    //             }

    //             if(st.size() == 0)
    //             {
    //                 break;
    //             }
    //         }
           
    //     }
        
    //     return st.size();
    // }
    int minLength(string s) {
        
        stack<char> st;

        for(int i = 0 ; i < s.length() ; i++)
        {
                if( s[i] == 'B' && st.size() > 0 && st.top() == 'A' )
                {
                    st.pop(); 
                }            
                
                else if( s[i] == 'D' && st.size() > 0 && st.top() == 'C')
                {
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
        }
           
        
        return st.size();
    }
};