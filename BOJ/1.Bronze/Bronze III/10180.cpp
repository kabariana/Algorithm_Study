#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    while(T--)
    {
        int n, d, cnt = 0;
        std::cin >> n >> d;
        for(int i = 0; i<n; i++)
        {
            int v, f, c;
            std::cin >> v >> f >> c;
            if(d*c <= f*v)
                cnt++;
        }
        std::cout << cnt << '\n';
    }
    return 0;
}