#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, m, p, cnt = 0;
    std::cin >> n >> m >> p;

    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=m; j++)
            if((i+j)*2>=p)
                cnt+=(n-i+1)*(m-j+1);
    std::cout << cnt;
    return 0;
}