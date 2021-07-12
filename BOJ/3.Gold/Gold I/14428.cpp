// 최소 인덱스를 구해라... segment Tree
#include <bits/stdc++.h>

int N, M;
std::vector<int> arr, tree;

int findMinIndex(int a, int b)
{
    if(a == -1)
        return b;
    if(b == -1)
        return a;
    return arr[a] <= arr[b] ? a : b; 
}

int init(int node, int start, int end)
{
    if(start == end)
        return tree[node] = start;
    int mid = (start + end) / 2;
    return tree[node] = findMinIndex(init(2 * node, start, mid), init(2 * node + 1, mid + 1, end));
}

int query(int node, int start, int end, int left, int right)
{
    if(start > right || end < left)
        return -1;
    if(left <= start && end <= right)
        return tree[node];
    int mid = (start + end) / 2;
    return findMinIndex(query(2 * node, start, mid, left, right), query(2* node + 1, mid + 1, end, left, right));
}

int update(int node, int start, int end, int index, int value)
{
    if(index < start || index > end || start == end)
        return tree[node];
    int mid = (start + end) / 2;
    return tree[node] = findMinIndex(update(2 * node, start, mid, index, value), update(2 * node + 1, mid + 1, end, index, value));
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N;
    arr.resize(N + 1);
    tree.resize(4 * (N + 1));

    for(int i = 1; i<=N; i++)
        std::cin >> arr[i];
    
    init(1, 1, N);

    std::cin >> M;

    while(M--)
    {
        int a, b, c;
        std::cin >> a >> b >> c;
        
        if(a == 1)
        {
            arr[b] = c;
            update(1, 1, N, b, c);
        }
        else
            std::cout << query(1, 1, N, b, c) << '\n';
    }
    return 0;
}