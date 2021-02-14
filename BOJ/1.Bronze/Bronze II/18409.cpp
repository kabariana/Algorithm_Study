#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::string str;

    std::cin >> n >> str;

    int cnt = 0;
    for(int i = 0; i<n; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            cnt++;
    }
    std::cout << cnt;
    return 0;
}