// 문자열 s가 펠린드롬이 아니면 s를 이어붙인 t도 펠린드롬이 될 수 없음.
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int k;
    std::string s;

    std::cin >> s;
    std::cin >> k;
    
    bool flag = true;

    for(int i = 0; s[i]; i++)
    {
        if(s[i] != s[s.size()-1-i])
        {
            flag = false;
            break;
        }
    }

    if(flag)
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}