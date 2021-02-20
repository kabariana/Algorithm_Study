#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);
    int T;
    std::cin >> T;
    while(T--)
    {
        int n;
        std::cin >> n;
        int cnt = 0;
        for(int i = 2; i<=n; i++)
        {
            int num = 0;
            for(int j=i;;j*=i)
            {
                if(n%j!=0)
                    break;
                num++;
            }
            cnt+=num;
        }
        std::cout << cnt << '\n';
    }
    return 0;
}