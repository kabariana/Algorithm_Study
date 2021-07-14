// Segment Tree + Lazy Propagation
#include <bits/stdc++.h>

int N, M;
std::vector<int> arr, tree, lazy;

int init(int node, int start, int end)
{
    if (start == end)
        return tree[node] = arr[start];
    int mid = start + end >> 1;
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
    if (right < start || left > end)
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
    int mid = start + end >> 1;
    return tree[node] = update(node * 2, start, mid, left, right, value) ^ update(node * 2 + 1, mid + 1, end, left, right, value);
}

int query(int node, int start, int end, int index)
{
    update_lazy(node, start, end);
    if (end < index || start > index)
        return tree[node];
    if (start == end)
        return 0;
    int mid = start + end >> 1;
    return query(node * 2, start, mid, index) ^ query(node * 2 + 1, mid + 1, end, index);
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
        int t, a, b, c;
        std::cin >> t;

        if (t == 1)
        {
            std::cin >> a >> b >> c;
            update(1, 0, N - 1, a, b, c);
        }
        else
        {
            std::cin >> a;
            std::cout << (tree[1] ^ query(1, 0, N-1, a)) << '\n';
        }
    }
    return 0;
}