#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    while(T--)
    {
        int n;
        std::cin >> n;
        
        int sum = 0;
        for(int i = 1; i<=n; i++)
            sum+=(i+1)*(i+2)/2 *i;
        std::cout << sum << '\n';
    }
    return 0;
}