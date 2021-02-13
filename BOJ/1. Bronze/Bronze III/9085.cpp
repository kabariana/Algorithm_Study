#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    while(T--)
    {
        int n, sum = 0;
        std::cin >> n;

        for(int i = 0; i<n; i++)
        {
            int num;
            std::cin >> num;
            sum+=num;
        }
        std::cout << sum << '\n';
    }
    return 0;
}