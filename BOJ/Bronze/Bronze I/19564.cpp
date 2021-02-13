// 다음에 오는 문자가 사전순으로 이전에 있는 문자면 cnt++;
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    std::cin >> str;
    int cnt = 0;

    for(int i = 0; str[i]; i++)
    {
        if(str[i+1]-'a'<=str[i]-'a')
            cnt++;
    }
    std::cout << cnt;
    return 0;
}