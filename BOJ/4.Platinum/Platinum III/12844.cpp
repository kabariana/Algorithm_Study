// Segment Tree + Lazy Propagation
#include <bits/stdc++.h>
using ll = long long;

int N, M;
std::vector<int> arr, tree, lazy;

int init(int node, int start, int end)
{
    if (start == end)
        return tree[node] = arr[start];
    int mid = (start + end) / 2;
    return tree[node] = init(node * 2, start, mid) ^ init(node * 2 + 1, mid + 1, end);
}

void update_lazy(int node, int start, int end)
{
    if (lazy[node] != 0)
    {
        tree[node] ^= lazy[node] * ((end - start + 1) % 2);
        if (start != end)
        {
            lazy[node * 2] ^= lazy[node];
            lazy[node * 2 + 1] ^= lazy[node];
        }
        lazy[node] = 0;
    }
}

int update(int node, int start, int end, int left, int right, int value)
{
    update_lazy(node, start, end);
    if (end < left || right < start)
        return tree[node];
    if (left <= start && end <= right)
    {
        tree[node] ^= value * ((end - start + 1) % 2);
        if (start != end)
        {
            lazy[node * 2] ^= value;
            lazy[node * 2 + 1] ^= value;
        }
        return tree[node];
    }
    int mid = (start + end) / 2;
    return tree[node] = update(node * 2, start, mid, left, right, value) ^ update(node * 2 + 1, mid + 1, end, left, right, value);
}

int query(int node, int start, int end, int left, int right)
{
    update_lazy(node, start, end);
    if (end < left || right < start)
        return 0;
    if (left <= start && end <= right)
        return tree[node];
    int mid = (start + end) / 2;
    return query(node * 2, start, mid, left, right) ^ query(node * 2 + 1, mid + 1, end, left, right);
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
    int select, L, R, val;
    while (M--)
    {
        std::cin >> select;
        if (select == 1)
        {
            std::cin >> L >> R >> val;
            update(1, 0, N - 1, L, R, val);
        }
        else
        {
            std::cin >> L >> R;
            std::cout << query(1, 0, N - 1, L, R) << '\n';
        }
    }
    return 0;
}