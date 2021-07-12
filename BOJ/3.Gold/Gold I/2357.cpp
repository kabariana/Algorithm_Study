// Update를 안 해도 되는 Segment Tree 문제
// Segment Tree를 두 개를 해줬더니 안 풀리니
// 아예 pii Tree 하나를 만들어주는 방식
// O(nlogn)
#include <bits/stdc++.h>
using pii = std::pair<int, int>;

std::vector<int> arr;
std::vector<pii> tree;

pii init(int node, int start, int end)
{
    if(start == end)
    {
        tree[node].first = arr[start];
        tree[node].second = arr[start];
        return tree[node];
    }
    int mid = (start + end) / 2;
    pii a = init(node * 2, start, mid) ;
    pii b = init(node * 2 + 1, mid + 1, end);

    tree[node].first = std::min(a.first, b.first);
    tree[node].second = std::max(a.second, b.second);
    return tree[node];
}

pii query(int node, int start, int end, int left, int right)
{
    if(start > right || end < left)
        return {INT_MAX, 0};
    if(left <= start && end <= right)
        return tree[node];
    int mid = (start + end) / 2;
    pii a = query(2 * node, start, mid, left, right);
    pii b = query(2 * node + 1, mid + 1, end, left, right);

    return {std::min(a.first, b.first), std::max(a.second, b.second)};
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, M;
    std::cin >> N >> M;

    arr.resize(N + 1);
    tree.resize(4 * (N + 1));
    
    for(int i = 1; i<= N; i++)  
        std::cin >> arr[i];

    init(1, 1, N);

    while(M--)
    {
        int a, b;
        std::cin >> a >> b;
        pii res = query(1, 1, N, a, b);
        std::cout << res.first << ' ' << res.second << '\n';
    }
    return 0;
}