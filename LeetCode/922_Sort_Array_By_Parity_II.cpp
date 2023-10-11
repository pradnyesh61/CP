// 11 October 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParityII(vector<int> &nums)
    {
        vector<int> even;
        vector<int> odd;

        for (auto it : nums)
        {
            if (it % 2 == 0)
            {
                even.push_back(it);
            }
            else
            {
                odd.push_back(it);
            }
        }

        int k = 0;
        int j = 0;

        cout << "even = ";
        for (auto it : even)
        {
            cout << it << " ";
        }

        cout << endl
             << "Odd = ";
        for (auto it : odd)
        {
            cout << it << " ";
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                nums[i] = even[j];
                j++;
            }
            else
            {
                nums[i] = odd[k];
                k++;
            }
        }

        return nums;
    }
};