#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int n;
    cin >> n;

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        string s;
        cin >> s;

        if (s[0] == '0')
        {
            b--;
            s[0] = '1';
        }

        while (b--)
        {
            s.push_back('0');
        }

        cout << s << endl;
    }
    return 0;
}
