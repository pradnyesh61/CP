// 13 April 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
    //     stack<int> st;
    //     int j = 0;

    //     for(int i = 0; i < pushed.size() ; i++)
    //     {
    //         while(st.size() > 0 && st.top() == popped[j])
    //         {
    //             st.pop();
    //             j++;
    //         }

    //         st.push(pushed[i]);
    //     }

    //     while(st.size() > 0 && st.top() == popped[j])
    //     {
    //         st.pop();
    //         j++;
    //     }

    //     if(st.size() == 0)
    //     {
    //         return true;
    //     }

    //     return false;

    // }
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int> st;
        int j = 0;

        for(int i = 0; i < pushed.size() ; i++)
        {
            st.push(pushed[i]);
            
            while(st.size() > 0 &&  st.top() == popped[j])
            {
                st.pop();
                j++;
            }
        }

       
        return (st.size() == 0);
        

    }
};