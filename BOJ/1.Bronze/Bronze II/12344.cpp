#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC;
    std::cin >> TC;

    for(int i = 1; i <= TC; i++)
    {
        int N, cnt = 0;
        std::string str;
        std::cin >> N;
        std::cin.ignore();

        std::priority_queue<std::string> pq;
        while(N--)
        {
            std::getline(std::cin, str);
            if(!pq.empty() && pq.top() > str)
                cnt++;
            pq.push(str);
        }
        std::cout << "Case #" << i << ": " << cnt << '\n';
    }
    return 0;
}