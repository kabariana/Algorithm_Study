#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    for(int i = 2; i <= std::sqrt(n); i++)
    {
        while(n%i == 0)
        {
            std::cout << i << '\n';
            n /= i;
        }
    }
    if(n!=1)
        std::cout << n;
    return 0;
}