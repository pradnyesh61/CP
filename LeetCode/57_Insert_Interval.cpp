//16 jan 2023

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

     int start = INT_MAX;
     int end = INT_MIN;

     vector<vector<int>> v;

    intervals.push_back({newInterval[0],newInterval[1]});

    sort(intervals.begin(),intervals.end());
     
     for(int i = 0; i < intervals.size(); i++)
    {
        cout<<intervals[i][0]<<" = "<<intervals[i][1]<<endl;

        if(intervals[i][0] < start)
        {
            start = intervals[i][0];
        }
        
        if(intervals[i][1] > end)
        {
            end = intervals[i][1];
        }

        if(i+1 != intervals.size())
        {
            if(intervals[i+1][0] > end)
            {
                v.push_back({start,end});
                start = INT_MAX;
                end = INT_MIN;
            }
        }

    }

     v.push_back({start,end});

    return v;
    }
};