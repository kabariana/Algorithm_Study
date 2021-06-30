// 매우 유명한 문제 TSP
// DP, 비트마스킹
// 최소의 비용 - 모든 정점 순회하고 출발 지점으로 돌아오는 것
// 
#include <bits/stdc++.h>

const int SIZE = 16;
const int BIT_SIZE = 1 << SIZE;
const int INF = 1e7;

int cost[SIZE][BIT_SIZE];
int board[SIZE][SIZE];
int N;

int func(int vertex, int visit)
{
    int& ret = cost[vertex][visit];
    if(ret != -1)
        return ret;
    // 모든 도시를 다 방문함, 즉 모든 도시의 상태 1
    if(visit == (1<<N)-1)
        return (board[vertex][0]!= 0?board[vertex][0]:INF);
    ret = INF;
    for(int i = 0; i<N; i++)
    {   
        // 가는 길에 있으면서 방문한 적이 없는 도시라면
        if(board[vertex][i] && !(visit & (1<<i)))
        {
            // 방문
            int tmp = visit | (1 << i);
            ret = std::min(ret, func(i, tmp) + board[vertex][i]);
        }
    }
    return ret;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N;
    for(int i = 0; i < N; i++)
        for(int j = 0; j<N; j++)
            std::cin >> board[i][j];

    memset(cost, -1, sizeof(cost));
    std::cout << func(0, 1) << '\n';
    return 0;
}