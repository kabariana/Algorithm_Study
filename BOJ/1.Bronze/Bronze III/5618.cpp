#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, a, b, c = 0;

    std::cin>> n;

    if(n == 2)
        std::cin >> a >> b;
    else
        std::cin >> a >> b >> c;

    for(int i = 1; i<=a; i++)
        if(a%i == 0 && b%i == 0 && c%i == 0)
            std::cout << i << '\n';
    
    return 0;
}