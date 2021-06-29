// BFS로 풀었는데 안되서 DFS로 풀었더니 해결함. 야발 x 1e18
#include <bits/stdc++.h>

const int SIZE = 10;
const int dx[] = {-1, 1, 0, 0};
const int dy[] = {0, 0, -1, 1};
using pii = std::pair<int, int>;

int N, M, res = SIZE + 1;
pii exi;
std::string map[SIZE + 1];

bool chkInternal(pii x)
{
    return 0 <= x.first && x.first < N && 0 <= x.second && x.second < M;
}

void dfs(pii x, pii y, int cnt)
{
    if(cnt > SIZE)
        return;
    for(int i = 0; i<4; i++)
    {
        pii prevRed = x;
        pii prevBlue = y;
        bool process = false, redExi, blueExi;
        redExi = blueExi = false;
        do
        {
            process = false;
            if(!redExi)
            {
                pii newRedOffset = {prevRed.first + dx[i], prevRed.second + dy[i]};
                if(chkInternal(newRedOffset) && map[newRedOffset.first][newRedOffset.second] != '#' && (newRedOffset != prevBlue || blueExi)){
                    process = true;
                    prevRed = newRedOffset;
                }
                if(prevRed == exi)  
                    redExi = true;
            }
            if(!blueExi)
            {
                pii newBlueOffset = {prevBlue.first + dx[i], prevBlue.second + dy[i]};
                if(chkInternal(newBlueOffset) && map[newBlueOffset.first][newBlueOffset.second] != '#' && (newBlueOffset != prevRed || redExi)){
                    process = true;
                    prevBlue = newBlueOffset;
                }
                if(prevBlue == exi)
                    blueExi = true;
            }
        }while(process);
        if(redExi && !blueExi)
            res = std::min(res, cnt);
        else if(!redExi && !blueExi)
            dfs(prevRed, prevBlue, cnt + 1);
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    pii redBall, blueBall;
    std::cin >> N >> M;
    for(int i = 0; i<N; i++)
    {
        std::cin>> map[i];
        for(int j = 0; j<M; j++)
        {
            if(map[i][j] == 'R')
                redBall = {i, j};
            else if(map[i][j] == 'B')
                blueBall = {i, j};
            else if(map[i][j] == 'O')
                exi = {i, j};
        }
    }
    map[redBall.first][redBall.second] = map[blueBall.first][blueBall.second] = '.';
    
    dfs(redBall, blueBall, 1);

    if(res == SIZE + 1)
        std::cout << "-1\n";
    else
        std::cout << res <<'\n';
    return 0;
}