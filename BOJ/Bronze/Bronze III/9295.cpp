#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    for(int i = 1; i<=T; i++)
    {
        int a, b;
        std::cin >> a >> b;
        std::cout << "Case " << i << ": " << a + b << '\n';
    }
    return 0;
}