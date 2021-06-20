#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::priority_queue<std::pair<int, int>> pq;

    while(n--)
    {
        int num;
        std::cin >> num;

        if(!num && pq.empty())
            std::cout << "0\n";
        else if(!num)
        {
            std::cout << -pq.top().second << '\n';
            pq.pop();
        }
        else
            pq.push({-std::abs(num), -num});
    }
    return 0;
}