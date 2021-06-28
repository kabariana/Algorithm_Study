#include <bits/stdc++.h>

typedef long long ll;

ll arr[250001], rra[250001];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, Q;
    std::cin >> N >> Q;

    for(int i = 0; i< N; i++)
    {
        std::cin >> arr[i];
        rra[N-i-1] = arr[i];
    }

    for(int i = 0; i<Q; i++)
    {
        ll x, y, cnt = 0;
        std::cin >> x >> y;

        cnt += std::max(0LL, arr[y-1] - x + 1);
        int index = std::lower_bound(rra, rra + N, x) - rra;
        y = N - y;
        int r = y - index;
        if(index <= y)
            cnt += r;
        std::cout << cnt << '\n';
    }
    return 0;
}