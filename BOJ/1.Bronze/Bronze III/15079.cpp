#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::vector<std::string> v{"N", "NW", "W", "SW", "S", "SE", "E", "NE"};
    std::vector<double> dx{ 0, -(1 / std::sqrt(2)), -1, -(1 / std::sqrt(2)), 0, (1 / std::sqrt(2)), 1, (1 / std::sqrt(2)) };
    std::vector<double> dy{ 1, (1 / std::sqrt(2)), 0, -(1 / std::sqrt(2)), -1, -(1 / std::sqrt(2)), 0, (1 / std::sqrt(2)) };

    int n;
    double x, y;
    std::cin >> n >> x >> y;
    while(n--)
    {
        std::string str;
        int tmp;
        std::cin >> str >> tmp;
        int d = std::find(v.begin(), v.end(), str)- v.begin();
        x += dx[d] * tmp;
        y += dy[d] * tmp;
    }
    std::cout << std::fixed << std::setprecision(8) << x << ' ' << y <<'\n';
    return 0;
}