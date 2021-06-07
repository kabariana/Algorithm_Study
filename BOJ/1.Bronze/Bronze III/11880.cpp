#include <bits/stdc++.h>

inline long long square(long long n)
{
    return n*n;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    long long arr[3], result = 1e18;
    int tc;
    std::cin >> tc;
    while(tc--)
    {
        for(int i = 0; i<3; i++)
            std::cin >> arr[i];
        for(int i = 0; i<3; i++)
            result = std::min(square(arr[(i+1)%3] + arr[(i+2)%3]) + square(arr[i]), result);
        std::cout << result <<'\n';
    }
    return 0;
}