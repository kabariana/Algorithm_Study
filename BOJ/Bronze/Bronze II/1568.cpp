#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    int cnt = 0;
    int increment = 1;

    while(n)
    {
        if(n < increment)
            increment = 1;
        n-=increment;
        cnt++;
        increment++;
    }
    std::cout << cnt;
    return 0;
}