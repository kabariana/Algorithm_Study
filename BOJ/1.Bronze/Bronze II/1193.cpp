#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, cnt = 0;
    std::cin >> n;

    while(n>0)
    {
        cnt++;
        n-=cnt;    
    }
    if(cnt % 2 == 1)
        std::cout << (-n) + 1 << '/' << cnt+n;
    else
        std::cout << cnt+n << '/' << (-n) + 1;
    return 0;
}