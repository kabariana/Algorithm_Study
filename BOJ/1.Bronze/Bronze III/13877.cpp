#include <bits/stdc++.h>

int conv_8(int n)
{
    int sum = 0;
    std::string str = std::to_string(n);
    for(int i = str.length()-1; i>=0; i--)
    {
        if(str[i] < '0' || str[i] > '7')
            return 0;
        sum+=int(std::pow(8, str.length()-i-1)*(str[i]-'0'));
    }
    return sum;
}

int conv_16(int n)
{
    int sum = 0;
    std::string str = std::to_string(n);
    for(int i = str.length()-1; i>=0; i--)
        sum+=int(std::pow(16, str.length()-i-1)*(str[i]-'0'));
    return sum;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    while(n--)
    {
        int a, b;
        std::cin>> a>> b;
        std::cout << a << ' ' << conv_8(b) << ' ' << b << ' ' <<conv_16(b) << '\n';
    }
    return 0;
}