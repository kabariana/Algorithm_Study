// Stack
#include <bits/stdc++.h>
using ll = long long;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    ll total = 0;
    std::cin >> N;

    std::stack<int> s;

    for(int i = 0; i<N; i++)
    {
        int level;
        std::cin >> level;
        while(!s.empty() && s.top() <= level)
            s.pop();
        s.push(level);
        total += s.size()-1;
    }
    std::cout << total << '\n';
    return 0;
}