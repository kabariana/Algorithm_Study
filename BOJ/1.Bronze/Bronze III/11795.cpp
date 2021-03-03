#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    int sum_a = 0, sum_b = 0, sum_c = 0;
    while(T--)
    {
        int a, b, c;
        std::cin >> a >> b >> c;
        sum_a += a;
        sum_b += b;
        sum_c += c;
        if(sum_a<30||sum_b<30||sum_c<30)
            std::cout << "NO\n";
        else
        {
            int min = std::min({sum_a, sum_b, sum_c});
            std::cout << min << '\n';
            sum_a-=min;
            sum_b-=min;
            sum_c-=min;
        }
    }
    return 0;
}