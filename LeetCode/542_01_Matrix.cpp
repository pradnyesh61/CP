// 17 August 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        

        queue<pair<int,pair<int,int>>> q;


        int n = mat[0].size();
        int m = mat.size();
        
        vector<vector<int>> vis(m, vector<int> (n,-1));

          int count = 0;


        for(int i = 0 ; i< m ;i++)
        {
            for(int j = 0; j < n ; j++)
            {
                if(mat[i][j] == 0)
                {
                    vis[i][j] = 1;
                    count++;
                    q.push( {0, {i,j} } );
                }
            }
        }

       /* for(auto it : mat)
        {
            for(auto itt : it)
            {
                cout<<itt<<" ";
            }
            cout<<endl;
        }
*/

      
        int box = n*m;

        vector<int> col = {-1,0,+1,0};
        vector<int> row = {0,+1,0,-1};

        while(!q.empty())
        {
            if(count >= box)
            {
                break;
            }
          //  cout<<"count = "<<count<<endl;

            int sz = q.size();

            for(int k = 1; k <= sz ; k++)
            {
                pair<int,pair<int,int>> p = q.front();
                int i = p.second.first;
                int j = p.second.second;
                int c = p.first + 1;
                q.pop();

                for(int l = 0; l < col.size();l++)
                {
                    int icol = i + col[l];
                    int jrow = j + row[l];
/*
                     cout<<" --------"<<endl;
                    for(auto it : mat)
                        {
                            for(auto itt : it)
                            {
                                cout<<itt<<" ";
                            }
                            cout<<endl;
                        }
                        cout<<endl;
*/
                    if(icol >= 0 && icol < m && jrow >= 0 && jrow < n)
                    {
                        if(mat[icol][jrow] == 1 && vis[icol][jrow] == -1)
                        {
                            vis[icol][jrow] = 1;
                //            cout<<"1 = mat = "<<mat[icol][jrow]<<endl;
                            mat[icol][jrow] = c;
                            q.push({c,{icol,jrow}});
                            count++;
                        }
                        else if((vis[icol][jrow] != -1 && mat[icol][jrow] == 1) ||
                                 (mat[icol][jrow] != 0 && mat[icol][jrow] != 1)){

                  //          cout<<"2 = mat = "<<mat[icol][jrow]<<endl;
                            int mini = min(mat[icol][jrow], c);
                            mat[icol][jrow] = mini;
                           // q.push({mini, {icol,jrow}});
                        }
                    }
              /*        for(auto it : mat)
                        {
                            for(auto itt : it)
                            {
                                cout<<itt<<" ";
                            }
                            cout<<endl;
                        }
                         cout<<" --------"<<endl;
                        cout<<endl;
                */
                }

            }

        }

        return mat;

    }
};