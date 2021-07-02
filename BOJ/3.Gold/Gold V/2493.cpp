// Stack
#include <bits/stdc++.h>
using pii = std::pair<int, int>;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    std::stack<pii> s;
    std::cin >> N;

    for(int i = 1; i<=N; i++)
    {
        int num;
        std::cin >> num;
        while(!s.empty())
        {
            if(s.top().first > num)
            {
                std::cout << s.top().second << " ";
                break;
            }
            s.pop();
        }
        if(s.empty())
            std::cout << "0 ";
        s.push({num, i});
    }
    std::cout << '\n';
    return 0;
}