#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, K;
    std::cin >> N >> K;

    int l = 1, r = K;
    int result;
    while(l <= r)
    {
        int cnt = 0;
        int m = (l + r) / 2;

        for(int i = 1; i<= N; i++)
            cnt+=std::min(m/i, N);
        if(cnt < K)
            l = m + 1;
        else
        {
            result = m;
            r = m-1;
        }
    }
    std::cout << result <<'\n';
    return 0;
}