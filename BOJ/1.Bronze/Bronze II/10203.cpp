#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    while(n--)
    {
        int cnt = 0;
        std::string str;
        std::cin >> str;
        for(int i = 0;str[i]; i++)
            if(std::string("aeiou").find(str[i])!=std::string::npos)
                cnt++;
        std::cout << "The number of vowels in " << str << " is " << cnt << ".\n";
    }
    return 0;
}