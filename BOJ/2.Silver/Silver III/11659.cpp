#include <bits/stdc++.h>

int sumArray[100001];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    for(int i = 1; i<= n; i++)
    {
        int num;
        std::cin >> num;

        sumArray[i] = sumArray[i-1] + num;
    }

    for(int i = 0; i<m; i++)
    {
        int qa, qb;
        std::cin >> qa >> qb;

        if(qa == 0)
            std::cout << sumArray[qb] << '\n';
        else
            std::cout << sumArray[qb] - sumArray[qa-1] <<'\n';
    }
    return 0;
}