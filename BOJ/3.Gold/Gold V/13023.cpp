#include <iostream>
#include <vector>
#define MAXSIZE 2000

bool visited[MAXSIZE];
std::vector<int> vec[MAXSIZE];

void dfs(int v, int cnt)
{
    visited[v] = true;
    if(cnt == 4)
    {
        std::cout << "1";
        exit(0);
    }
    for(int i = 0; i< vec[v].size(); i++)
    {
        if(!visited[vec[v][i]])
            dfs(vec[v][i], cnt+1);
    }
    visited[v] = false;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m, x, y;

    std::cin >> n >> m;

    for(int i = 0; i< m; i++)
    {
        std::cin >> x >> y;
        vec[x].push_back(y);
        vec[y].push_back(x);
    }

    for(int i = 0; i< n; i++)
        dfs(i, 0);

    std::cout << "0";
    return 0;
}