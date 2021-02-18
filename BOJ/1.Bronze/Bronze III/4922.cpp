#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        int n;
        std::cin >> n;

        if(n == 0)
            break;

        std::cout << n << " => " << n*(n-1)+1 << '\n';
    }
    return 0;
}