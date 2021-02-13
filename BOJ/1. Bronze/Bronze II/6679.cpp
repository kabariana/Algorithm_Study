#include <bits/stdc++.h>

int func(int n, int b)
{
    int res = 0;
    while(n>0)
    {
        res+=n%b;
        n/=b;
    }
    return res;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    for(int i = 1000; i<10000; i++)
    {
        int d = func(i, 10);
        int t = func(i, 12);
        int h = func(i, 16);
        if(d == t && d == h)
            std::cout << i << '\n';
    }
    return 0;
}