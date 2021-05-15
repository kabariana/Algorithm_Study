#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    for(int i = 0; i < str.length(); i++)
    {
        int tmp = (int)str[i];
        int repeat = tmp/100 + (tmp%100)/10 + tmp%10;
        for(int j = 0; j<repeat; j++)
            cout << str[i];
        cout << '\n';
    }
    return 0;
}