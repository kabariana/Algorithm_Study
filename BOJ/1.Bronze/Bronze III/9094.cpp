// 브루트포스 알고리즘
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int t;
    std::cin >> t;
    while(t--)
    {
        int n, m;
        std::cin >> n >> m;

        int cnt = 0;
        for(int a = 1; a<n; a++)
        {
            for(int b = 1; b<n; b++)
            {
                if((a*a+b*b+m)%(a*b) == 0 && b>a)
                    cnt++;
            }
        }
        std::cout << cnt <<'\n';
    }
    return 0;
}