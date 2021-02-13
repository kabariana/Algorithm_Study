#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T, sum = 0;
    std::cin >> T;
    while(T--)
    {
        int a, b;
        std::cin >> a >> b;
        sum += b%a;
    }
    std::cout << sum;
    return 0;
}