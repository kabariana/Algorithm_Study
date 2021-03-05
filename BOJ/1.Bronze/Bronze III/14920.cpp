#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int cnt = 1;
    while(true)
    {
        if(n==1)
            break;
        if(n%2 == 0)
            n/=2;
        else
            n = 3*n + 1;
        cnt++;
    }
    std::cout << cnt;
    return 0;
}