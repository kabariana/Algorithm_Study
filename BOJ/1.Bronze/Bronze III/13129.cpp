#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b, n;
    std::cin >> a >> b >> n;
    for(int i = 1; i<=n; i++)
        std::cout << a * n + b * i << ' ';
    return 0;
}