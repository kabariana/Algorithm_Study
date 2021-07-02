// Segment Tree
#include <bits/stdc++.h>
using ll = long long;

const int MOD = 1e9 + 7;
int N, M, K;
std::vector<ll> arr, tree;

ll init(int node, int start, int end)
{
    if(start == end)
        return tree[node] = arr[end];
    int mid = (start + end) / 2;
    return tree[node] = (init(2*node, start, mid) * init(2*node + 1, mid + 1, end)) % MOD;
}

ll query(int node, int start, int end, int left, int right)
{
    if(start > right || left > end)
        return 1;
    if(left <= start && end <= right)
        return tree[node];
    int mid = (start + end) / 2;
    return (query(2*node, start, mid, left, right) * query(2*node + 1, mid + 1, end, left, right)) % MOD;
}

ll update(int node, int start, int end, int index, ll value)
{
    if(start > index || end < index)
        return tree[node];
    if(start == end)
        return tree[node] = value;

    int mid = (start + end) / 2;
    return tree[node] = (update(2*node, start, mid, index, value)*update(2*node + 1, mid + 1, end, index, value))%MOD;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M >> K;

    arr.resize(N + 1);
    tree.resize(4*(N+1));

    for(int i = 1; i<=N; i++)
        std::cin >> arr[i];

    init(1, 1, N);

    for(int i = 0; i<M+K; i++)
    {
        int a, b;
        ll c;
        std::cin >> a >> b >> c;

        if(a == 1)
        {
            update(1, 1, N, b, c);
            arr[b] = c;
        }
        else
            std::cout << query(1, 1, N, b, c) << '\n';
    }
    return 0;
}