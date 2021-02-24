#include <bits/stdc++.h>
typedef long long ll;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    for(int i = 1; i<= T; i++)
    {
        ll e, a;
        std::cin >> e >> a;
        int cnt = 0;
        while(e > a)
        {
            cnt++;
            a *= 5;
        }
        std::cout << "Data Set " << i << ":\n";
        if(cnt == 0)
            std::cout << "no drought\n";
        else
        {
            for(int j = 0; j<cnt-1; j++)
                std::cout << "mega ";
            std::cout << "drought\n";
        }
        std::cout << '\n';       
    }
    return 0;
}