#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    while(T--)
    {
        long long n, result;
        std::cin >> n;
        result = (n*(n+1ll)^(n+1ll));
        std::cout << result <<'\n';
    }   
    return 0;
}