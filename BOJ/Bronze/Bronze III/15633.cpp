#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, sum = 0;
    std::cin >> n;

    for(int i = 1; i<=n; i++)
        if(n%i == 0)
            sum+= i;

    std::cout << (sum * 5) - 24;
    return 0;
}