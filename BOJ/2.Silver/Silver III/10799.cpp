#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    char c;
    std::string str;
    std::cin >> str;

    std::stack<int> s;

    int cnt = 0;
    for(int i = 0; str[i]; i++)
    {
        if(str[i] == '(')
            s.push(1);
        else
        {
            s.pop();
            if(c=='(')
                cnt+=s.size();
            else
                cnt++;
        }
        c = str[i];
    }
    std::cout << cnt << '\n';
    return 0;
}