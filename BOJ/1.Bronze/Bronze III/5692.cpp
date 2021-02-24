#include <bits/stdc++.h>

int v[6] = {0, 1, 2, 6, 24, 120};

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    while(true)
    {
        std::string s;
        std::cin >> s;

        if(s == "0")
            break;

        int sum = 0;
        for(int i = 0; s[i]; i++)
            sum += v[s.length()-i]*(s[i] - '0');
        std::cout << sum << '\n';
    }
    return 0;
}