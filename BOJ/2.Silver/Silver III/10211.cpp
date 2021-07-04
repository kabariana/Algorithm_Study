#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC;
    std::cin >> TC;

    while(TC--)
    {
        int N;
        std::cin >> N;
        std::vector<int> v(N);
        for(int i = 0; i<N; i++)
            std::cin >> v[i];
        int sum = 0, maxValue = INT_MIN;
        for(int i = 0;i<N; i++)
        {
            sum += v[i];
            maxValue = std::max(sum, maxValue);
            if(sum < 0)
                sum = 0;
        }
        std::cout << maxValue << '\n';
    }
    return 0;
}