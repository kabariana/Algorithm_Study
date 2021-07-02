// Segment Tree - 생각보다 재밌다...?
#include <bits/stdc++.h>

const int INF = 2e9;
int N, M;
std::vector<int> tree, arr;

int init(int node, int start, int end)
{
    if(start == end)
        return tree[node] = arr[end];
    int mid = (start + end) / 2;
    return tree[node] = std::min(init(2*node, start, mid), init(2*node + 1, mid + 1, end));
}

int query(int node, int start, int end, int left, int right)
{
    if(left > end || start > right)
        return INF;
    if(left <= start && end <= right)
        return tree[node];
    int mid = (start + end) / 2;
    return std::min(query(2*node, start, mid, left, right), query(2*node + 1, mid + 1, end, left, right));
}

void update(int node, int start, int end, int index, int value)
{
    if(index < start || index > end)
        return;
    if(start == end)
    {
        tree[node] = value;
        return;
    }
    int mid = (start + end) / 2;
    update(2*node, start, mid, index, value);
    update(2*node + 1, mid + 1, end, index, value);
    tree[node] = std::min(tree[2*node], tree[2*node + 1]);
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N;
    arr.resize(N + 1);
    tree.resize(4 * (N+1));

    for(int i = 1; i <= N; i++)
        std::cin >> arr[i];

    init(1, 1, N);

    std::cin >> M;

    while(M--)
    {
        int c, i, j;
        std::cin >> c >> i >> j;
        if(c == 1)
        {
            update(1, 1, N, i, j);
            arr[i] = j;
        }
        else
            std::cout << query(1, 1, N, i, j) << '\n';
    }
    return 0;
}