/*
here need to find max points lie in same straight line
so for that if the slope of 2 points is same that means those points lie in same straight line
so we traverse through all elements and take the slope and check the max count 

slope is calculated as (y2-y1/x2-x1)

so we take a map and store all the slopes in it 
if the divisor becomes 0 ie. x2-x1 then we will get the error for that use the max int that will store the count
now if divisor is not zero then we calculate the slope and store in map 

after done for one point check the max count of points and make it as answer
make sure that the count of slope in map is of slope of 2 points so we need to add 1 in each count

now return the count of points which lie in same straight line


*/

//8 jan 2023

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        
        int ans = 1;
      
        int n = points.size();
        for(int i = 0 ; i< n-1 ; i++)
        {
            int temp = 0;
            
            unordered_map<double,int> m;
            for(int j = i+1  ;  j < n ;j++)
            {
                if(points[j][0] == points[i][0])
                {
                    m[INT_MAX]++;
                }
                else
                {
            double slope =(double)(points[j][1]-points[i][1])/(double)(points[j][0]-points[i][0]); 
               m[slope]++;
            }

            
            for(auto it : m)
            {
                temp = max(temp,it.second);    
            }

            }

            ans = max(ans,temp+1);
        }

        return ans;
    }
};


int main()
{
    vector<vector<int>> v = {{1,1},{3,2},{5,3},{4,1},{2,3},{1,4}};

    Solution s;
    cout<<s.maxPoints(v);
}