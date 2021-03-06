#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, cnt = 0;
    std::cin >> n;

    for(int i = 1; i<=n/3; i++)
    {
        for(int j = 1; j<=n/3; j++)
        {
            int tmp = i*3 + j*3;
            if((n-tmp)%3 == 0 && tmp < n)
                cnt++;
        }
    }
    std::cout << cnt;
    return 0;
}