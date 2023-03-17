// 17 March 2023

#include <bits/stdc++.h>
using namespace std;

class Trie
{
private:
  vector<string> v;
public:
  
    Trie()
    {
    }

    void insert(string word)
    {
        v.push_back(word);
    }

    bool search(string word)
    {
        if (find(v.begin(), v.end(), word) != v.end())
        {
            return true;
        }

        return false;
    }

    bool startsWith(string prefix)
    {
        int l = prefix.size();
        for (int i = 0; i < v.size(); i++)
        {

            string prevWord = v[i];
            int k = 0;

            int n = prevWord.size();

            if (l > n)
            {
                continue;
            }

            for (int j = 0; j <n && k < l; j++)
            {
                if (prevWord[j] == prefix[k] && k < l)
                {
                    k++;
                }
                else
                {
                    break;
                }
            }

            if (k == l)
            {
                return true;
            }
        }

        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */