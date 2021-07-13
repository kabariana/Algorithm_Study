#include <bits/stdc++.h>
using ll = long long;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int T;
    std::cin >> T;

    std::queue<int> q;
    while(T--)
    {
        ll n;
        std::cin >> n;

        while(n)
        {
            q.push(n%2);
            n /= 2;
        }

        ll tmp = 1;
        while(!q.empty())
        {
            int c = q.front();
            q.pop();

            n += tmp * c;
            tmp *= 3;
        }
        std::cout << n << '\n';
    }
    return 0;
}