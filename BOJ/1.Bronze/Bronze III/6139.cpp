#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, K;
    std::cin >> N >> K;
    
    while(K--)
    {
        int s, t, r;
        std::cin >> s >> t >> r;

        int res = 0, i = N;
        while(i > 0)
        {
            if(i>s*t)
            {
                i-=(s*t);
                res+=(t+r);
            }
            else
            {
                if(i%s == 0)
                    res += (i/s);
                else
                    res += (i/s)+1;
                break;
            }
        }
        std::cout << res << '\n';
    }
    return 0;
}