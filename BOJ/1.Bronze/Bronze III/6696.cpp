#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    double x, y;
    while(true)
    {
        std::cin >> x >> y;
        if(x == 0 && y == 0)
            break;
        double d = std::hypot(x, y), tmp = 0;
        int cnt = 0;
        while(tmp < d){
            cnt++;
            tmp = std::sqrt(100 / std::acos(-1) + tmp * tmp);
        }
        std::cout << "The property will be flooded in hour " << cnt << ".\n";
    }
    return 0;
}