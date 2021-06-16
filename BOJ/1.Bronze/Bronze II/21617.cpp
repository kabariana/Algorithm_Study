#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    double tmp;

    std::cin >> n;
    std::vector<double> v1, v2;

    for(int i = 0; i<= n; i++)
    {
        std::cin >> tmp;
        v1.push_back(tmp);
    }
    for(int i = 0; i < n; i++)
    {
        std::cin >> tmp;
        v2.push_back(tmp);
    }

    double sum = 0;

    for(int i = 0; i< n; i++)
        sum += (v1[i] + v1[i+1])/2.0 * v2[i];
    std::cout << std::fixed << std::setprecision(6) << sum <<'\n';
    return 0;
}