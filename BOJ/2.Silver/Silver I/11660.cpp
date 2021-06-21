#include <bits/stdc++.h>

int sumArr[2<<10 + 1][2<<10 + 1];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, M;
    std::cin >> N >> M;

    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j< N; j++)
        {
            int tmp;
            std::cin >> tmp;
            sumArr[i + 1][j + 1] = sumArr[i + 1][j] + sumArr[i][j+1] - sumArr[i][j] + tmp;
        }
    }

    for(int i = 0; i<M; i++)
    {
        int x, y, x2, y2;
        std::cin >> y >> x >> y2 >> x2;

        std::cout << sumArr[y2][x2] - sumArr[y-1][x2] - sumArr[y2][x-1] + sumArr[y-1][x-1];
        std::cout <<'\n';
    }

    return 0;
}