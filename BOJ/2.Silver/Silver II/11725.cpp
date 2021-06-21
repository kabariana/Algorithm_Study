#include <bits/stdc++.h>
#define MAX 100001

std::vector<int> v[MAX];
int parent[MAX];
bool visited[MAX];

void findParent(int x)
{
    visited[x] = true;
    for(int i = 0; i<v[x].size(); i++)
    {
        int nextX = v[x][i];
        if(!visited[nextX])
        {
            parent[nextX] = x;
            findParent(nextX);
        }
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    for(int i = 1; i< N; i++)
    {
        int a, b;
        std::cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    findParent(1);

    for(int i = 2; i <= N; i++)
        std::cout << parent[i] << '\n';

    return 0;
}