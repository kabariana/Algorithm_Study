// 템플릿으로 만들어놔도 될 듯??
#include <bits/stdc++.h>

std::vector<int> arr, tree;
int N, K;

int init(int node, int start, int end)
{
    if(start == end) 
        return tree[node] = arr[end];
    int mid = (start + end) / 2;
    return tree[node] = init(2*node, start, mid) * init(2*node+1, mid + 1, end);
}

int query(int node, int start, int end, int left, int right)
{
    if(start > right || end < left)
        return 1;
    if(left <= start && end <= right)
        return tree[node];
    int mid = (start + end) / 2;
    return query(2*node, start, mid, left, right) * query(2*node + 1, mid + 1, end, left, right);
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
    tree[node] = tree[2*node] * tree[2*node + 1];
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    // TC 의 개수 안알려줌
    while(std::cin >> N >> K)
    {
        arr.resize(N + 1);
        tree.resize(4*(N + 1));
        for(int i = 1; i<= N; i++)
        {
            int num;
            std::cin >> num;
            if(num > 0)
                arr[i] = 1;
            else if(num == 0)
                arr[i] = 0;
            else
                arr[i] = -1;
        }
        init(1, 1, N);

        while(K--)
        {
            char ch;
            int i, V;
            std::cin >> ch >> i >> V;
            if(ch == 'C')
            {
                // 변경 명령
                if(V > 0)
                    arr[i] = 1;
                else if(V == 0)
                    arr[i] = 0;
                else
                    arr[i] = -1;
                update(1, 1, N, i, arr[i]);
            }
            else // ch == p // 곱셈 명령
            {
                int result = query(1, 1, N, i, V);
                if(result > 0)
                    std::cout << "+";
                else if(result == 0)
                    std::cout << "0";
                else
                    std::cout << "-";
            }
        }
        std::cout << '\n';
    }
    return 0;
}