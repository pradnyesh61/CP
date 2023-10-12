// 12 October 2023

#include <bits/stdc++.h>
using namespace std;

 class Solution {
public:
    // int numUniqueEmails1(vector<string>& emails) {
        
    //     set<string> st;

    //     for(it : emails)
    //     {
    //         string s = it;

    //         string ans = '';

    //         for(int i = 0 ; i < s.size() ; i++)
    //         {
    //             if(s[i] == '')
    //         } 
    //     }
    // }

    int numUniqueEmails(vector<string>& emails) {
    unordered_set<string> st;
    for(string &email : emails) {
        string cleanEmail;
        for(char c : email) {
            if(c == '+' || c == '@') break;
            if(c == '.') continue;
            cleanEmail += c;
        }
        cleanEmail += email.substr(email.find('@'));
        st.insert(cleanEmail);
    }
    return st.size();
}
};

