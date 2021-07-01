// 위상정렬 + DP
#include <bits/stdc++.h>

const int SIZE = 1001;
std::vector<int> graph[SIZE];
int inDegree[SIZE];
int D[SIZE];
int dp[SIZE];
int N, W;

void topSort()
{
    std::queue<int> q;
    for(int i = 1; i<= N; i++)
    {
        if(!inDegree[i])
        {
            q.push(i);
            dp[i] = D[i];
        }
    }
    while(!q.empty())
    {
        int curr = q.front();
        q.pop();

        if(W == curr)
            break;

        for(int i= 0; i<graph[curr].size(); i++)
        {
            int next = graph[curr][i];
            inDegree[next]--;
            if(dp[next] < D[next] + dp[curr])
                dp[next] = D[next] + dp[curr];
            if(!inDegree[next])
                q.push(next);
        }
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC;
    std::cin >> TC;

    while(TC--)
    {
        int K;
        std::cin >> N >> K;
        for(int i = 1; i<=N; i++)
            std::cin >> D[i];
        for(int i = 0; i < K; i++)
        {
            int x, y;
            std::cin >> x >> y;
            graph[x].push_back(y);
            inDegree[y]++;
        }
        std::cin >> W;

        topSort();

        std::cout << dp[W] << '\n';
        // 다음 테스트 케이스 가기 전에 초기화
        memset(inDegree, 0, sizeof(inDegree));
        memset(D, 0, sizeof(D));
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i<= N; i++)
            graph[i].clear();
    }
    return 0;
}