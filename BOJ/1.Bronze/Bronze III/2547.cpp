#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    while(T--)
    {
        int n;
        long long sum = 0;
        std::cin >> n;
        for(int i = 0; i<n; i++)
        {
            long long candy;
            std::cin >> candy;
            sum = (sum+candy) % n;
        }
        if(sum == 0)
            std::cout << "YES\n";
        else
            std::cout << "NO\n";
    }
    return 0;
}