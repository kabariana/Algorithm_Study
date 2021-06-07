#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int h, m;
    std::cin >> h >> m;

    int t = INT_MIN;
    for(int i = 1; i<= m; i++)
    {
        if(-6*i*i*i*i + h*i*i*i + 2*i*i + i <= 0)
        {
            t = i;
            break;
        }
    }
    std::cout << (t >= 0 ? "The balloon first touches ground at hour: " + std::to_string(t): "The balloon does not touch ground in the given time.");
    return 0;
}