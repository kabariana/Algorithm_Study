#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    int tc;
    std::cin >> tc;

    while(tc--)
    {
        int n;
        std::cin >> n;
        ll cnt = 0;
        for(int i = 1; i<=n; i++)
            cnt+=(ll)i*i;
        std::cout << cnt << '\n';
    }
    return 0;
}