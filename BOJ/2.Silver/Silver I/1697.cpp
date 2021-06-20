#include <bits/stdc++.h>

bool visited[100001];
int n, k;
std::queue<int> q;

void chk(int t)
{
    if(t >= 0 && t <= 100000 && !visited[t])
    {
        visited[t] = true;
        q.push(t);
    }
}

int bfs()
{
    q.push(n);
    int d = 0;
    while(!q.empty())
    {
        int size = q.size();
        for(int i = 0; i<size; i++)
        {
            int current = q.front();
            q.pop();
            if(current == k)
                return d;
            chk(current + 1);
            chk(current - 1);
            chk(current * 2);
        }
        d++;
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> n >> k;
    std::cout << bfs() << '\n';

    return 0;
}