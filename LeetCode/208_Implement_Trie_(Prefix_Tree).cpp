// 17 March 2023

#include <bits/stdc++.h>
using namespace std;

class Trie {
public:

    vector<string> v;

    Trie() {

    }
    
    void insert(string word) {
        v.push_back(word);
    }
    
    bool search(string word) {
        if(find(v.begin(),v.end(),word) != v.end())
        {
            return true;
        }

        return false;
    }
    
    bool startsWith(string prefix) {

   
        if(v.size() == 0)
        {
            return false;
        }

       
            for(int i = 0 ; i < v.size() ; i++)
            {   
            
                string prevWord = v[i];
                int k = 0;

                if(prefix.size() > prevWord.size())
                {
                    continue;
                }


                for(int j = 0; j < prevWord.size() && k < prefix.size() ; j++)
                {
                    if(prevWord[j] == prefix[k] && k < prefix.size())
                    {
                        k++;
                    }
                    else{
                        break;
                    }
                }

                    if(k == prefix.size())
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