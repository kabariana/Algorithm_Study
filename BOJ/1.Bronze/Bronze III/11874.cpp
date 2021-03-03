#include <bits/stdc++.h>

int func(int n)
{
    int sum = 0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int L, D, X;
    std::cin >> L >> D >> X;

    for(int i = L; i<=D; i++)
    {
        if(func(i)==X)
        {
            std::cout << i << '\n';
            break;
        }
    }

    for(int i = D; i>=L; i--)
    {
        if(func(i)==X)
        {
            std::cout << i << '\n';
            break;
        }
    }
    return 0;
}