// CCW 이용
#include <bits/stdc++.h>

double getCCW(double x1, double x2, double x3, double y1, double y2, double y3)
{
    double res = x1 * y2 + x2 * y3 + x3 * y1;
    res += (-y1*x2 - y2*x3 - y3*x1);
    return res / 2;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<std::pair<double, double>> v(n);

    for(int i = 0; i<n ; i++)
        std::cin >> v[i].first >> v[i].second;
    
    double result = 0;
    for(int i = 1; i<n; i++)
        result += getCCW(v[0].first, v[i-1].first, v[i].first, v[0].second, v[i-1].second, v[i].second);
    std::cout << std::fixed << std::setprecision(1) << std::abs(result) <<'\n';
    return 0;
}