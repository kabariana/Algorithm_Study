#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    std::cin >> N;
    std::vector<std::pair<int, int>> v(N);

    for(int i = 0; i< N; i++)
        std::cin >> v[i].first >> v[i].second;

    int max = INT_MIN;
    int x_ind, y_ind;
    for(int i = 0; i < N; i++)
    {
        for(int j = i + 1; j < N; j++)
        {
            int tmp = std::pow((v[i].first - v[j].first), 2) + std::pow((v[i].second - v[j].second), 2);
            if(max < tmp)
            {
                max = tmp;
                x_ind = i + 1;
                y_ind = j + 1;
            }
        }
    }
    std::cout << x_ind << " " << y_ind <<'\n';
    return 0;
}