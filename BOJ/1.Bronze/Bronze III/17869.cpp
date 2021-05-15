#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    long long n, cnt = 0;
    std::cin >> n;
    while(n != 1)
    {
        n%2 ? ++n:n/=2;
        cnt++;
    }
    std::cout << cnt;
    return 0;
}