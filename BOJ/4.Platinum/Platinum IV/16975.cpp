// Segment Tree + Lazy Propagation
#include <bits/stdc++.h>
using ll = long long;

int N, M;
std::vector<ll> arr, tree, lazy;

// 세그먼트 트리에 대표값을 지정
ll init(int node, int start, int end)
{
    if (start == end)
        return tree[node] = arr[start];
    int mid = (start + end) / 2;
    return tree[node] = init(2 * node, start, mid) + init(2 * node + 1, mid + 1, end);
}

void update_lazy(int node, int start, int end)
{
    if (lazy[node] != 0)
    {
        tree[node] += ((end - start + 1)) * lazy[node];
        if (start != end)
        {
            lazy[node * 2] += lazy[node];
            lazy[node * 2 + 1] += lazy[node];
        }
        lazy[node] = 0;
    }
}

void update(int node, int start, int end, int left, int right, ll value)
{
    update_lazy(node, start, end);
    if (end < left || right < start)
        return;
    if (left <= start && end <= right)
    {
        tree[node] += ((end - start + 1)) * value;
        if (start != end)
        {
            lazy[node * 2] += value;
            lazy[node * 2 + 1] += value;
        }
        return;
    }
    int mid = (start + end) / 2;
    update(node * 2, start, mid, left, right, value);
    update(node * 2 + 1, mid + 1, end, left, right, value);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

ll query(int node, int start, int end, int index)
{
    update_lazy(node, start, end);
    if (end < index || start > index)
        return tree[node];
    if (start == end)
        return 0;
    int mid = (start + end) / 2;
    return query(node * 2, start, mid, index) + query(node * 2 + 1, mid + 1, end, index);
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N;

    arr.resize(N);
    tree.resize(4 * N);
    lazy.resize(4 * N);

    for (int i = 0; i < N; i++)
        std::cin >> arr[i];

    init(1, 0, N - 1);

    std::cin >> M;

    while (M--)
    {
        int t, i, j, x;
        ll k;
        std::cin >> t;

        if (t == 1)
        {
            std::cin >> i >> j >> k;
            update(1, 0, N - 1, i - 1, j - 1, k);
        }
        else
        {
            std::cin >> x;
            std::cout << (tree[1] - query(1, 0, N - 1, x - 1)) << '\n';
        }
    }
    return 0;
}