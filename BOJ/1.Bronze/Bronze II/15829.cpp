#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int L;
    std::cin >> L;

    std::string str;
    std::cin >> str;

    long long sum = 0;
    long long r = 1;

    for(int i = 0; i<str.length(); i++)
    {
        sum = (sum + (str[i]- 'a' + 1)*r)%1234567891;
        r = (r*31)%1234567891;
    }
    std::cout << sum <<'\n';
    return 0;
}