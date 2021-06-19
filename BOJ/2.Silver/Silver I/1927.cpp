#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

    while(n--)
    {
        int tmp;
        std::cin >> tmp;

        if(!tmp && pq.empty())
            std::cout << 0 << '\n';

        else if(!tmp)
        {
            std::cout << pq.top() <<'\n';
            pq.pop();
        }
        else
            pq.push(tmp);
    }
    return 0;
}