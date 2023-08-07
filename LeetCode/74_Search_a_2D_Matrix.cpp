// 7 August 2023

#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int i = 0;
        int j = 0;

        int m = matrix.size()-1;
        int n = matrix[0].size()-1;

        int fixm = m;
        int fixn = n;
      
        while(i <= m)
        {
           // cout<<i<<" = "<<m<<endl;
            int ver = (i+m)/2;

            //cout<<matrix[ver][0]<<" = "<<target <<" = "<<matrix[ver][fixn]<<endl;
            
            if(matrix[ver][0] == target || matrix[ver][fixn] == target)
            {
                return true;
            }

            if(matrix[ver][0] > target)
            {
                m = ver-1;
            }
            else if(matrix[ver][fixn] < target)
            {
                i = ver+1;
            }
            else{
              //  cout<<endl;
                while(j <= n)
                {   
                    int hor = (j+n)/2;
            
               //     cout<<matrix[ver][hor]<<" = "<<target<<endl;
          
                    if(matrix[ver][hor] == target)
                    {
                        return true;
                    }

                    if(matrix[ver][hor] > target)
                    {
                        n = hor-1;
                    }
                    else if(matrix[ver][hor] < target)
                    {
                        j = hor+1;
                    }
                }
                break;
            }
          //  cout<<i<<" = "<<m<<endl;
        }

        return false;
    }
};