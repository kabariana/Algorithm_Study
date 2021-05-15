#include <bits/stdc++.h>
using namespace std;

int N;
string str, M;
vector<string> v;



void rotate()
{
    reverse(str.begin(), str.end()); // 180도 회전
    for(int i = 0; i<str.length(); i++)
    {
        if(str[i] == '9')
            str[i] = '6';
        else if(str[i] == '6')
            str[i] = '9';
    }
}

bool compare(string s1, string s2)
{
    if(s1.length() == s2.length())
        return stoi(s1) > stoi(s2);
    return s1.length() > s2.length();
}

bool compare2(string s1, string s2)
{
    return s1 + s2 > s2 + s1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> N;

    for(int i = 0; i<N; i++)
    {
        int input;
        cin >> input;
        str = to_string(input);
        rotate();
        if(compare(str, M))
             M = str;
        v.push_back(str);
    }
    v.push_back(M);
    sort(v.begin(), v.end(), compare2);
    string ans = "";
    for(int i = 0; i<v.size(); i++)
        ans += v[i];
    for(int i = ans.size()-1; i>=0; i--)
    {
        if(ans[i] == '6')
            cout << "9";
        else if(ans[i] == '9')
            cout << "6";
        else
            cout << ans[i];
    }
    return 0;
}