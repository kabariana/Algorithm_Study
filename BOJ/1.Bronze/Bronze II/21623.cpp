// 출력 조건도 잘 보자... 시부럴... 
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int k, n;
    std::cin >> k >> n;

    std::vector<int> v(k);
    int round = 0;
    for(int i = 0; i < k; i++)
        std::cin >> v[i];

    int score = n;
    for(int i = 0; i < k; i++)
    {
        if(score - v[i] < 0)
            continue;
        else
            score -= v[i];
        if(score == 0)
        {
            round++;
            score = n;
        }
    }
    if(score == n)
        score = 0;
    std::cout << round << '\n' << score << '\n';
    return 0;
}