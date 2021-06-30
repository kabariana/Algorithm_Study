// Topology Sort
#include <bits/stdc++.h>

const int SIZE = 1001;
int N, M;
std::vector<int> graph[SIZE];
std::vector<int> result;
int Indeg[SIZE];

void topSort()
{
    std::queue<int> q;

    for(int i = 1; i<= N; i++)
        if(Indeg[i] == 0)
            q.push(i);
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();
        result.push_back(cur);

        for(int i = 0; i<graph[cur].size(); i++)
        {
            int next = graph[cur][i];
            Indeg[next]--;
            if(Indeg[next] == 0)
                q.push(next);
        }
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M;

    for(int i = 0; i< M; i++)
    {
        int num, top, nxt;
        std::cin >> num;
        std::cin >> top; // 제일 앞에 오는 사람
        for(int i = 1; i<num; i++)
        {
            std::cin >> nxt;
            graph[top].push_back(nxt);
            Indeg[nxt]++;
            top = nxt;
        }
    }

    topSort();

    if(result.size() != N)
        std::cout << "0\n";
    else
    {
        for(int i = 0; i<N; i++)
            std::cout << result[i] <<'\n';
    }
    return 0;
}