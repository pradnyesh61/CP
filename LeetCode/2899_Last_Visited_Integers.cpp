// 14 October 2023

#include <bits/stdc++.h>
using namespace std

class Solution
{
public:
    vector<int> lastVisitedIntegers(vector<string> &words)
    {
        vector<int> nums;
        vector<int> nums_reverse;

        vector<int> ans;

        int count = 0;

        for (auto it : words)
        {

            if (it == "prev")
            {
                count++;
                if (count > nums.size())
                {
                    ans.push_back(-1);
                }
                else
                {
                    nums_reverse = nums;
                    reverse(nums_reverse.begin(), nums_reverse.end());

                    cout << endl;
                    for (auto i : nums_reverse)
                    {
                        cout << i << " ";
                    }
                    cout << endl;
                    ans.push_back(nums_reverse[count - 1]);
                }
            }
            else
            {
                count = 0;
                nums.push_back(stoi(it));
            }
        }

        return ans;
    }
};