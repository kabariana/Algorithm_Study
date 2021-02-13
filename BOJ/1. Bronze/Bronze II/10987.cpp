#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int cnt = 0;
    std::string str;
    std::cin >> str;

    for(int i = 0; str[i]; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            cnt++;
    }
    std::cout << cnt;
    return 0;
}