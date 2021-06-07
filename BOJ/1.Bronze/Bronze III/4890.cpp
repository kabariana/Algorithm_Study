#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    long long a, b;
    while(true)
    {
        std::cin>> a >> b;
        if(a == 0 && b == 0)
            break;

        if(a < b)
            std::swap(a, b);
        std::cout << (a != b ? (a %b == 0? a/b:a*b):1) << '\n';
    }
    return 0;
}