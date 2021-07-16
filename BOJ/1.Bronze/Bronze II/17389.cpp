#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    char ox;
    std::cin >> N;
    int score = 0, bonus = 0;
    
    for(int i = 1; i<=N; i++)
    {
        std::cin >> ox;
        if(ox == 'O')
        {
            score += i + bonus;
            bonus++;
        }
        else
            bonus = 0;
    }
    std::cout << score << '\n';
    return 0;
}