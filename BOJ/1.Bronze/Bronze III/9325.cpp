#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    while(T--)
    {
        int s, n, a, b, sum = 0;
        std::cin >> s;

        std::cin >> n;

        if(n == 0)
            sum = s;
        
        for(int i = 0; i<n; i++)
        {
            std::cin >> a >> b;
            s+= a*b;
        }
        sum = s;
        std::cout << sum << '\n';
    }
    return 0;
}