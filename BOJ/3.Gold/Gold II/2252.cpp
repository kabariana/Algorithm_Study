// 위상 정렬
#include <bits/stdc++.h>

const int SIZE = 32001;
int N, M;
std::vector<int> graph[SIZE];
std::vector<int> result;
int inDegree[SIZE];

void topSort()
{
    std::queue<int> q;

    for(int i = 1; i<=N; i++)
        if(inDegree[i] == 0)
            q.push(i);
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();
        result.push_back(cur);

        for(int i = 0; i<graph[cur].size(); i++)
        {
            int next = graph[cur][i];
            inDegree[next]--;
            if(inDegree[next] == 0)
                q.push(next);
        }
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M;

    for(int i = 0; i<M; i++)
    {
        int A, B;
        std::cin >> A >> B;
        graph[A].push_back(B);
        inDegree[B]++;
    }
    
    topSort();

    for(int i = 0; i<N; i++)
        std::cout << result[i] << ' ';
    std::cout << '\n';
    return 0;
}