// Segment Tree + Lazy Propagation
#include <bits/stdc++.h>
using ll = long long;

const int MOD = 1e9 + 7;
int N, M;
std::vector<ll> arr, tree, MultiplyLazy, AddLazy;

ll init(int node, int start, int end)
{
    if(start == end)
        return tree[node] = arr[start];
    int mid = (start + end) / 2;
    return tree[node] = (init(node * 2, start, mid) + init(node * 2 + 1, mid + 1, end)) % MOD;
}

void update_lazy(int node, int start, int end)
{
    if(AddLazy[node] == 0 && MultiplyLazy[node] == 1)
        return;
    if(start != end)
    {
        for(int i = 2 * node; i <= 2 * node + 1; i++)
        {
            AddLazy[i] = ((AddLazy[i] * MultiplyLazy[node])% MOD + AddLazy[node]) % MOD;
            MultiplyLazy[i] = MultiplyLazy[i] * MultiplyLazy[node] % MOD;
        }
    }
    tree[node] = ((MultiplyLazy[node] * tree[node]) % MOD + ((end - start + 1) * AddLazy[node]) % MOD) % MOD;
    AddLazy[node] = 0;
    MultiplyLazy[node] = 1;
    return;
}

void update(int node, int start, int end, int left, int right, ll mul_value, ll add_value)
{
    update_lazy(node, start, end);
    if(end < left || right < start)
        return;
    if(left <= start && end <= right)
    {
        AddLazy[node] = ((AddLazy[node] * mul_value % MOD) + add_value) % MOD;
        MultiplyLazy[node] = MultiplyLazy[node] * mul_value % MOD;
        update_lazy(node, start, end);
        return;
    }
    int mid = (start + end) / 2;
    update(node * 2, start, mid, left, right, mul_value, add_value);
    update(node * 2 + 1, mid + 1, end, left, right, mul_value, add_value);
    tree[node] = (tree[node * 2] + tree[node * 2 + 1]) % MOD;
    return;
}

ll query(int node, int start, int end, int left, int right)
{
    update_lazy(node, start, end);
    if(end < left || right < start)
        return 0;
    if(left <= start && end <= right)
        return tree[node] % MOD;
    int mid = (start + end) / 2;
    return (query(node * 2, start, mid, left, right) + query(node * 2 + 1, mid + 1, end, left, right)) % MOD;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N;
    
    arr.resize(N);
    tree.resize(4*N);
    MultiplyLazy.resize(4*N, 1);
    AddLazy.resize(4*N, 0);

    for(int i = 0; i<N; i++)
        std::cin >> arr[i];
    
    init(1, 0, N-1);

    std::cin >> M;

    while(M--)
    {
        int select, x, y;
        ll v;
        std::cin >> select;
        if(select == 1)
        {
            std::cin >> x >> y >> v;
            update(1, 0, N-1, x-1, y-1, 1, v);
        }
        else if(select == 2)
        {
            std::cin >> x >> y >> v;
            update(1, 0, N-1, x-1, y-1, v, 0);
        }
        else if(select == 3)
        {
            std::cin >> x >> y >> v;
            update(1, 0, N-1, x-1, y-1, 0, v);
        }
        else
        {
            std::cin >> x >> y;
            std::cout << query(1, 0, N-1, x-1, y-1) <<'\n';
        }
    }
    return 0;
}