// 13 August 2023
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
          set<string> s;

        for(int i =0;i<words.size();i++)
        {
            string sw=words[i];
            int l = sw.size();

            for(int j= 0; j < words.size() ;j++)
            {
                if(i == j)
                {
                    continue;
                }

                for(int m = 0; m < words[j].size();m++)
                {
                    if(sw[0] == words[j][m])
                    {
                        int k = words[j].size();
                        int sz = min(k,l);

                        k =0;

                        int n = m;
                        while(k < sz && n < words[j].size())
                        {
                                if(sw[k] != words[j][n])
                                {
                                    break;
                                }
                                n++;
                                k++;
                        }

                        if( k == sw.size())
                        {
                            s.insert(sw);
                        }
                    }
                }
            }
        }

        vector<string> ans(s.begin(),s.end());

        return ans;
    }
};

int main()
    {
        Solution obj;
        vector<string>  words = {"mass","as","hero","superhero"};
        vector<string> s = obj.stringMatching(words);

        for(auto i : s)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }