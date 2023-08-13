//14 August 2023
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

            cout<<sw<<" === "<<endl;

            for(int j= 0; j < words.size() ;j++)
            {
                if(i == j)
                {
                    continue;
                }

                cout<<words[j]<<endl;

                for(int m = 0; m < words[j].size();m++)
                {
                    if(sw[0] == words[j][m])
                    {
                        int k = words[j].size();
                        int sz = min(k,l);

                        k =0;

                        cout<<"sw[0] = "<<sw[0]<<" = ";
                        int n = m;
                        while(k < sz && n < words[j].size())
                        {
                            cout<<"word[0] = "<<words[j][n]<<endl;
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
//                            s.push_back(sw);
                        }
                    }
                }
            }
            
            cout<<endl;
        }

        return vector(s.begin(),s.end());
    }
};