// Segment Tree - 재밌음
#include <bits/stdc++.h>
using ll = long long;

std::vector<ll> arr, tree;
int N, M;

ll init(int node, int start, int end)
{
    if(start == end)
        return tree[node] = arr[end];
    int mid = (start + end) / 2;
    return tree[node] = init(node, start, mid) + init(node, mid + 1, end);
} 

ll query(int node, int start, int end, int left, int right)
{
    if(left > end || right < start)
        return 0;
    if(left <= start && end <= right)
        return tree[node];
    int mid = (start + end) / 2;
    return query(2*node, start, mid, left, right) + query(2*node +1 , mid + 1, end, left, right);    
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
        update(2*node+1, mid + 1, end, index, value);
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M;
    arr.resize(N + 1);
    tree.resize(4*(N+1));

    init(1, 1, N);

    while(M--)
    {
        int c, i, j;
        std::cin >> c >> i >> j;

        if(c == 0)
        {
            if(i > j)  
                std::swap(i, j);
            std::cout << query(1, 1, N, i, j) << '\n';
        }
        else
        {
            update(1, 1, N, i, j - arr[i]);
            arr[i] = j;
        }
    }
    return 0;
}