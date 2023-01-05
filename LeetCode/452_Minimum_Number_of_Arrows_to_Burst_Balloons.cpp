//5 jan 2023

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
        sort(points.begin(),points.end());

        int endpoint = INT_MAX;
        int count =  1;

        for(auto it : points)
        {
            cout<<it[0]<<" = "<<it[1]<<endl;
        }

        cout<<endl<<endl;

        for(int i  = 0 ; i < points.size() ; i++)
        {
cout<<i<<" = "<<endpoint<<" < "<<points[i][0]<<" :: "<<points[i][1]<<"   count = "<<count<<endl;
            if(endpoint < points[i][0])
            {
                endpoint = points[i][1];
                count++;
            }
            else{
                endpoint = min(points[i][1],endpoint);
            }
            
cout<<i<<" = "<<endpoint<<" < "<<points[i][0]<<" :: "<<points[i][1]<<"   count = "<<count<<endl<<endl;
        }

        return count;
    }
};

int main()
{
    vector<vector<int>> v = {{10,16},{2,8},{1,6},{7,12}};
    Solution s;
    cout<<s.findMinArrowShots(v);

}