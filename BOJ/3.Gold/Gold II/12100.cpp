// DFS 접근
#include <bits/stdc++.h>
#define SIZE 20

int N;
int board[SIZE][SIZE];

int DFS(int cnt)
{
    if(cnt == 5)
    {
        int max = 0;
        for(int i = 0; i<N; i++){
            for(int j = 0; j<N; j++){
                if(max < board[i][j])
                    max = board[i][j];
            }
        }
        return max;
    }
    int ret = 0;
    for(int k = 0; k<4; k++) // 판을 움직일 수 있는 방법은 4가지로써 0) 좌 1) 우 2) 상 3) 하
    {
        int copy[SIZE][SIZE];
        for(int i = 0; i<N; i++)
            for(int j = 0; j<N; j++)
                copy[i][j] = board[i][j];

        for(int i = 0; i<N; i++)
        {   
            // 방향이 vertical일 때, 행과 열을 뒤집음
            std::vector<int> v;
            for(int j = 0; j < N; j++)
            {
                if((k<2?board[i][j]:board[j][i])!=0)
                    v.push_back(k<2?board[i][j]:board[j][i]);
            }
            // 오른쪽 이동 혹은 아래로 이동 시 뒤집음
            if(k == 1 || k == 3)
                std::reverse(v.begin(), v.end());
            
            std::vector<int> q;
            for(int t = 0; t < v.size(); t++)
            {
                // 다음 상태와 비교했을 때 같은 경우가 있다면, 2의 배수만큼 늘려 벡터에 추가
                if(t + 1 < v.size() && v[t] == v[t+1])
                {
                    q.push_back(v[t]*2);
                    t++;
                }
                else
                    q.push_back(v[t]);
            }

            for(int t = q.size(); t < N; t++)
                q.push_back(0);
            
            if(k == 1 || k == 3)
                std::reverse(q.begin(), q.end());
            
            for(int t = 0; t <N; t++)
                (k<2?board[i][t]:board[t][i]) = q[t];
        }

        if(ret < DFS(cnt + 1))
            ret = DFS(cnt + 1);
        
        for(int i = 0; i<N; i++)
            for(int j = 0; j <N; j++)
                board[i][j] = copy[i][j];
    }
    return ret;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N;
    for(int i = 0; i<N; i++)
        for(int j = 0; j<N; j++)
            std::cin >> board[i][j];

    std::cout << DFS(0) << '\n';

    return 0;
}