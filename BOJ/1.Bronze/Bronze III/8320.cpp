#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    int cnt = 0;
    for(int i = 1; i<=n; i++)
        for(int j = i; i*j<=n; j++)
            cnt++;
    std::cout << cnt;
    return 0;
}