
// 12 April 2023

#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
// //     string simplifyPath(string path) {

// //        string s = "";

// //         for(int i = 0; i < path.length(); i++)
// //         {
// //             cout<<i<<" "<<path[i]<<" = ";

// //            if(path[i] == '.')
// //             {
// //                 int count = 0;
// //                 while(path[i] == '.')
// //                 {
// //                     count++;
// //                     i++;
// //                 }

// //                 if(count != 2)
// //                 {
// //                     while(count--)
// //                     {
// //                         s.push_back('.');
// //                     }
// //                     i--;
// //                 }
// //             }
// //             else{
// //                 cout<<"length = "<<s.length()<<" = "<<s.size();
// //                 //<<" := "<<s[s.length()-1]<<endl;

// //                 if(path[i] == '/')
// //                 {
// //                     if(s.length() == 0 || s.length()-1 >= 0 && s[s.length()-1] != '/')
// //                     {
// //                         s.push_back(path[i]);
// //                     }
// //                 }
// //                 else{
// //                     s.push_back(path[i]);
// //                 }
// //             }

// //             cout<<s<<endl;
// //         }

// //     if(s[0] == '/' && s.size() == 1 )
// //     {
// //         return s;
// //     }

// // cout<<endl<<endl;
// //     cout<<s<<endl;

// //     s.pop_back();

// //      cout<<s<<endl;

// //         return s;
// //     }

//     // string simplifyPath(string path) {

//     //     stack<char> st;

//     //      for(int i = 0 ; i < path.size(); i++)
//     //     {
//     //         if(path[i] == '/')
//     //         {
//     //             if(st.size() > 0 && st.top() == '/' || i == path.size()-1)
//     //             {
//     //                 continue;
//     //             }
//     //             st.push('/');
//     //         }
//     //         else if(path[i] == '.')
//     //         {
//     //             int count = 0;
//     //             if(st.size() > 0 && st.top() == '/')
//     //             {
//     //                 while(path[i] == '.')
//     //                 {
//     //                     count++;
//     //                     i++;
//     //                 }

//     //                 if(count == 2)
//     //                 {
//     //                     while(!st.empty())
//     //                     {
//     //                         st.pop();
//     //                     }
//     //                     st.push('/');
//     //                 }
//     //                 else
//     //                 {
//     //                     while(count--)
//     //                     {
//     //                         st.push('.');
//     //                     }
//     //                     i--;
//     //                 }
//     //             }
//     //             else{
//     //                 st.push('.');
//     //             }
//     //         }
//     //         else{
//     //             st.push(path[i]);
//     //         }
//     //     }

//     //     string s;

//     //     while(!st.empty())
//     //     {
//     //         s += st.top();
//     //         st.pop();
//     //     }

//     //     int i = 0;
//     //     int j = 0;
//     //     for(i = 0 ; i < s.size() ; i++)
//     //     {
//     //         if(s[i] >= 'a' && s[i] <= 'z')
//     //         {
//     //             break;
//     //         }

//     //         if(s[i] == '/')
//     //         {
//     //             j = i;

//     //         }
//     //     }

//     //    cout<<s<<endl;
//     //     reverse(s.begin(),s.end());

//     //     while(j--)
//     //     {
//     //         s.pop_back();
//     //     }

//     //     if(s[s.size()-1] == '/')
//     //     {
//     //         s.pop_back();
//     //     }

//     //    cout<<s<<endl;

//     //    if(s.size() == 0)
//     //    {
//     //        return "/";
//     //    }

//     //     return s;

//     // }

// };

// 😉😉😉😉Please upvote if it helps 😉😉😉😉
class Solution
{
public:
    string simplifyPath(string path)
    {

        stack<string> st;
        string res;

        for (int i = 0; i < path.size(); ++i)
        {
            if (path[i] == '/')
                continue;
            string temp;
            // iterate till we doesn't traverse the whole string and doesn't encounter the last /
            while (i < path.size() && path[i] != '/')
            {
                // add path to temp string
                temp += path[i];
                ++i;
            }
            if (temp == ".")
                continue;
            // pop the top element from stack if exists
            else if (temp == "..")
            {
                if (!st.empty())
                    st.pop();
            }
            else
                // push the directory file name to stack
                st.push(temp);
        }

        // adding all the stack elements to res
        while (!st.empty())
        {
            res = "/" + st.top() + res;
            st.pop();
        }

        // if no directory or file is present
        if (res.size() == 0)
            return "/";

        return res;
    }
};