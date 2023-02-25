// 25 Feb 2023

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
//  long result = 0;
//     int indicator = 1;
//     for(int i = 0; i<str.size();)
//     {
//         i = str.find_first_not_of(' ');
//         if(str[i] == '-' || str[i] == '+')
//             indicator = (str[i++] == '-')? -1 : 1;
//         while('0'<= str[i] && str[i] <= '9') 
//         {
//             result = result*10 + (str[i++]-'0');
//             if(result*indicator >= INT_MAX) return INT_MAX;
//             if(result*indicator <= INT_MIN) return INT_MIN;                
//         }
//         return result*indicator;
//     }
       int myAtoi(string s) {

           long temp = 0;
           int sign = 1;
           int i = 0;
           while(s[i] == ' ')
           {
               i++;
           }

           if(s[i] == '-' || s[i] == '+')
           {
               if(s[i] == '-')
               sign = -1;
               i++;
           }
           while('0' <= s[i] && s[i] <= '9'){
               temp = temp * 10 + (s[i++]-'0');
                if(temp*sign >= INT_MAX)
                {
                    return INT_MAX;
                }
                if(temp*sign <= INT_MIN)
                {
                    return INT_MIN;
                }
           }

           temp = temp*sign;
           
          

           return (int)temp;

       }
    // int myAtoi(string s) {
    //     string temp;
    //     int i =0;
    //     bool check = true;
    //     bool alpha = false;
    //     for( ; i <s.length();i++)
    //     {
    //         if( (s[i] == '-' || s[i] == '+'))
    //         {
    //             if(!check)
    //             {
    //                 break;
    //             }
    //             temp += s[i];
    //             check = false;
    //         }
    //         else if(s[i] >= '0' && s[i]<='9')
    //         {
    //             check = false;
    //             temp += s[i];
    //         }
    //         else if(s[i] == ' ')
    //         {
    //             continue;
    //         }
    //         else {
    //            // if(s[i] >= 'a' && s[i]<='z'|| s[i] >= 'A' && s[i]<='Z')
    //             if(temp.size() == 0)
    //                 return 0;
    //             break;
    //         }
           
    //     }

    
    //     string temp2;
       
    //         temp2 = temp.substr(1);

           
    //     cout<<temp<<endl;
    //     cout<<temp2;

    //    // -2,147,483,648 to 2,147,483,647
    //    string a = "2147483648";
    //    if(temp2.size() >= 9)
    //    {
    //     for(int  i = 0 ; i < temp2.size();i++)
    //     {
    //         if(temp2[i] > a[i])
    //         {
    //             if(temp[0] == '-')
    //             {
    //                 return -2147483648;
    //             }
    //             else{
    //                 return 2147483647;
    //             }
    //         }
    //     }
    //    }

   
    //   if(temp[0] == '+')
    //             temp2 = temp.substr(1);
    //             else
    //             temp2 = temp;
      
    //   cout<<"tem2"<<temp2<<endl;
    //    if(temp2[0] == '+' || temp2[0] == '-')
    //         return 0;
    //  // return 1;
    //    if(temp2.size()>0)
    //     return stoi(temp2);

    //     return 0;

     

    // }
};