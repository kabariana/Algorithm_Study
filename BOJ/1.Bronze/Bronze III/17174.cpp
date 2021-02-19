#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, m;
    std::cin >> n >> m;
    // 1달러짜리 n장
    int cnt = n;

    while(n>=m)
    {
        n/=m;
        cnt+=n;
    }
    std::cout << cnt;
    return 0;

}