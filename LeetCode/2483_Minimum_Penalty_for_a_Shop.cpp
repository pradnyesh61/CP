// 29 August 2023

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int bestClosingTime(string customers) {

        int curPenalty = count(customers.begin(), customers.end(), 'Y');
        int minPenalty = curPenalty;
        int earliestHour = 0;

        for (int i = 0; i < customers.size(); i++) {
            char ch = customers[i];
            if (ch == 'Y') {
                curPenalty--;
            } else {
                curPenalty++;
            }

            if (curPenalty < minPenalty) {
                earliestHour = i + 1;
                minPenalty = curPenalty;
            }
        }

        return earliestHour;
/*   
        int maxiy = 0;
        int maxin = 0;

        for(auto it : customers)
        {
            if(it == 'Y')
            {
                maxiy++;
            }
            else{
                maxin++;
            }
        }

        int ind  = 0;
       
        int cy = 0;
        int cn = 0;

        vector<int> v;


        for(int i = 0 ;i < customers.size(); i++)
        {
           

            int temp = (maxiy-cy) + cn;

            if(customers[i] == 'Y')
            {
                cy++;
            }
            else{
                cn++;
            }
           v.push_back(temp);

        }


         int ans  = v[0];


        for(int i = 0; i< v.size();i++)
        {
            cout<<v[i]<<" ";
            if(ans > v[i])
            {
                ans = v[i];
                ind = i;
               
            }
        }

        if(maxiy == v.size())
        {
            return v.size();
        }

        
        return ind;

/*
        cout<<maxiy<<" = "<<maxin<<endl;

        int ans = INT_MAX;

    cout<<endl;
    int ind = 0;

    int nc = 0;

      for(int i = 0; i < customers.size() ; i++)
        {
            int temp =0;
            if(customers[i] == 'Y')
            {
                temp = abs(maxiy-i);
                if(nc)
                {
                    temp = temp + nc;
                }
                cout<<"temp="<<temp<<" "<<endl;
                   if(ans > temp)
                   {
                       ans = temp;
                        ind = i;
                        cout<<"ind="<<" = "<<ind<<endl;
                   }
                
            }
            else{
                nc++;
                temp = abs(maxin - i);
                cout<<"temp="<<temp<<" "<<endl;
                   if(ans > temp)
                   {
                       ans = temp;
                        ind = i;
                        cout<<"ind="<<" = "<<ind<<endl;
                   }
                
                cout<<" n ="<<temp<<" = "<<i<<endl;
            }
            cout<<"ans = "<<ans<<endl<<endl;

        }


       return ind;

       */
    }
};