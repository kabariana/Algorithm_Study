// Segment Tree + Lazy Propagation
#include <bits/stdc++.h>
using ll = long long;

int N, M, K;
std::vector<ll> arr, tree, lazy;

// Segment Tree의 representative를 지정해주는 함수
ll init(int node, int start, int end)
{
    if(start == end)
        return tree[node] = arr[start];
    int mid = start + end >> 1;
    return tree[node] = init(node * 2, start, mid) + init(node * 2 + 1, mid + 1, end);
}

void update_lazy(int node, int start, int end)
{
    // lazy가 남아있을 때
    if(lazy[node] != 0)
    {
        tree[node] += lazy[node] * ((end - start + 1));
        if(start != end)
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
    if(right < start || left > end)
        return;

    if(left <= start && end <= right)
    {
        tree[node] += value * ((end - start + 1));
        if(start != end)
        {
            lazy[node * 2] += value;
            lazy[node * 2 + 1] += value;
        }
        return;
    }
    int mid = start + end >> 1;
    update(node * 2, start, mid, left, right, value);
    update(node * 2 + 1, mid + 1, end, left, right, value);

    tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

ll query(int node, int start, int end, int left, int right)
{
    update_lazy(node, start, end);
    if(right < start || left > end) // 범위 조심하자... 
        return 0;
    if(left <= start && end <= right)
        return tree[node];
    int mid = start + end >> 1;
    return query(node * 2, start, mid, left, right) + query(node * 2 + 1, mid + 1, end, left, right);  
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M >> K;
    
    arr.resize(N + 1);
    tree.resize(4 * (N + 1));
    lazy.resize(4 * (N + 1));

    for(int i = 1; i<=N; i++)
        std::cin >> arr[i];
    
    init(1, 1, N);

    int cnt = M + K;
    while(cnt--)
    {
        int a, b, c;
        ll d;
        std::cin >> a;

        if(a == 1)
        {
            std::cin >> b >> c >> d;
            update(1, 1, N, b, c, d);
        }
        else
        {
            std::cin >> b >> c;
            std::cout << query(1, 1, N, b, c) << '\n';
        }
    }
    return 0;
}