#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    while(T--)
    {
        long long n, result;
        std::cin >> n;
        result = (n*(n+1)^(n+1));
        std::cout << result <<'\n';
    }   
    return 0;
}