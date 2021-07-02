// Segment Tree
#include <bits/stdc++.h>
using ll = long long;

int N, Q;
std::vector<ll> arr, tree;

ll init(int node, int start, int end)
{
    if(start == end)
        return tree[node] = arr[end];
    int mid = (start + end)/2;
    return tree[node] = init(2*node, start, mid) + init(2*node + 1, mid + 1, end);
}

ll query(int node, int start, int end, int left, int right)
{
    if(start > right || end < left)
        return 0;
    if(left <= start && end <= right)
        return tree[node];
    int mid = (start + end) / 2;
    return query(2*node, start, mid, left, right) + query(2*node + 1, mid + 1, end, left, right);
}

void update(int node, int start, int end, int index, ll value)
{
    if(index < start || index > end)
        return;
    tree[node] += value;
    if(start != end)
    {
        int mid = (start + end) / 2;
        update(2*node, start, mid, index, value);
        update(2*node + 1, mid + 1, end, index, value);
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> Q;

    arr.resize(N + 1);
    tree.resize(4*(N+1));

    for(int i = 1; i<= N; i++)
        std::cin >> arr[i];

    init(1, 1, N);

    for(int i = 0; i<Q; i++)
    {
        int x, y, a;
        ll b;
        std::cin >> x >> y >> a >> b;
        if(x > y)
            std::swap(x, y);
        std::cout << query(1, 1, N, x, y) << '\n';
        update(1, 1, N, a, b - arr[a]);
        arr[a] = b;
    }
    return 0;
}