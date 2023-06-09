// 9 June 2023

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {

        int n = letters.size();

        for (int i = 0; i < n; i++)
        {
            if (letters[i] == target)
            {
                if (i + 1 < n && letters[i + 1] != target)
                {
                    return letters[i + 1];
                }
            }
            if (letters[i] > target)
            {
                return letters[i];
            }
        }
        return letters[0];
    }
    char nextGreatestLetter1(vector<char> &letters, char target)
    {

        int start = 0;
        int end = letters.size() - 1;
        cout << start << " = " << end << endl;
        while (start < end)
        {
            int mid = (start + end) / 2;
            cout << mid << endl;
            if (letters[mid] == target)
            {
                cout << "Hi" << endl;
                if (mid + 1 < letters.size())
                {
                    return letters[mid + 1];
                }
            }
            else if (letters[mid] < target)
            {
                cout << "start" << endl;
                start = mid + 1;
            }
            else if (letters[mid] > target)
            {
                cout << "end" << endl;
                end = mid - 1;
            }
            cout << start << " = " << end << endl;
        }

        if (start < letters.size())
        {
            if (letters[start] <= target)
            {
                if (start + 1 < letters.size())
                {
                    return letters[start + 1];
                }
            }

            if (letters[start] > target)
            {

                return letters[start];
            }
        }

        // if( start == end && end == letters.size()-1)
        // {
        //     if(letters[end] > target)
        //     {
        //         return letters[end];
        //     }
        //     return letters[0];

        // }

        return letters[0];
    }
};