// Segment Tree + Lazy Propagation
#include <bits/stdc++.h>

int N, M;
std::vector<int> tree;
std::vector<bool> lazy;

void update_lazy(int node, int start, int end)
{
    if (lazy[node] != false)
    {
        tree[node] = (end - start + 1) - tree[node];
        if (start != end)
        {
            lazy[node * 2] = (lazy[node * 2] ? false : true);
            lazy[node * 2 + 1] = (lazy[node * 2 + 1] ? false : true);
        }
        lazy[node] = 0;
    }
}

void update(int node, int start, int end, int left, int right)
{
    update_lazy(node, start, end);
    if (end < left || right < start)
        return;
    if (left <= start && end <= right)
    {
        tree[node] = (end - start + 1) - tree[node];
        if (start != end)
        {
            lazy[node * 2] = (lazy[node * 2] ? false : true);
            lazy[node * 2 + 1] = (lazy[node * 2 + 1] ? false : true);
        }
        return;
    }
    int mid = (start + end) / 2;
    update(node * 2, start, mid, left, right);
    update(node * 2 + 1, mid + 1, end, left, right);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

int query(int node, int start, int end, int left, int right)
{
    update_lazy(node, start, end);
    if (end < left || right < start)
        return 0;
    if (left <= start && end <= right)
        return tree[node];

    int mid = (start + end) / 2;
    return query(node * 2, start, mid, left, right) + query(node * 2 + 1, mid + 1, end, left, right);
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M;

    tree.resize(4 * N, 0);
    lazy.resize(4 * N, 0);

    while (M--)
    {
        int O, S, T;
        std::cin >> O;

        if (O == 0)
        {
            std::cin >> S >> T;
            update(1, 0, N - 1, S - 1, T - 1);
        }
        else
        {
            std::cin >> S >> T;
            std::cout << query(1, 0, N - 1, S - 1, T - 1) << '\n';
        }
    }
    return 0;
}