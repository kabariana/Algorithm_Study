// Top Sort
#include <bits/stdc++.h>

const int SIZE = 32001;

int N, M;
std::vector<int> graph[SIZE];
int inDegree[SIZE];

void topSort()
{
    std::priority_queue<int> pq;
    for(int i = 1; i<=N; i++)
        if(!inDegree[i])
            pq.push(-i); // 내림차순
    while(!pq.empty())
    {
        int curr = -pq.top();
        pq.pop();

        std::cout << curr << " ";

        for(int i = 0; i < graph[curr].size(); i++)
        {
            int next = graph[curr][i];
            inDegree[next]--;
            if(!inDegree[next])
                pq.push(-next);
        }
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M;

    for(int i = 0; i < M; i++)
    {
        int A, B;
        std::cin >> A >> B;
        graph[A].push_back(B);
        inDegree[B]++;
    }

    topSort();

    return 0;
}