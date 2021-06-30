#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    std::vector<int> LIS;
    LIS.push_back(-1);

    for(int i = 0; i<N; i++)
    {
        int Ai;
        std::cin >> Ai;
        if(LIS.back() < Ai)
            LIS.push_back(Ai);
        else
        {
            auto iter = std::lower_bound(LIS.begin(), LIS.end(), Ai);
            *iter = Ai;
        }
    }
    std::cout << LIS.size() - 1 <<'\n';
    return 0;
}