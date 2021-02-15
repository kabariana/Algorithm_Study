#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int t;
    std::cin >> t;

    while(t--)
    {
        int k, result = 1;
        std::cin >> k;
        for(int i = 1; i<k; i++)
            result = result*2 + 1;
        std::cout << result <<'\n';
    }
    return 0;
}