// 22 October 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string capitalizeTitle(string title) {
        
       vector<string> v;

       title.push_back(' ');

       string t ="";

       for(auto it : title)
       {
           if(it == ' ')
           {
               for(int q = 0; q < t.size() ; q++)
               {
                   t[q] = tolower(t[q]);
               }
               v.push_back(t);
            t = "";
           }
            else{
                t += it;
            }
       }

       title = "";

       for(auto it : v)
       {
           t = it;
           if(t.size() > 2)
           {
               t[0] =toupper(t[0]);
           }

           title += t+' ';
       }

       title.pop_back();
        return title;

    }
};