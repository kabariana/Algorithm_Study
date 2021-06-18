#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int K;
    std::cin >> K;

    while(K--)
    {
        int p, m, cnt = 0;
        std::cin >> p >> m;
        std::vector<bool> v(m + 1);

        for(int i = 0; i < p; i++)
        {
            int tmp;
            std::cin >> tmp;
            if(!v[tmp]){
                v[tmp] = 1;
            }
            else
                cnt++;
        }
        std::cout << cnt <<'\n';
    }
    return 0;
}