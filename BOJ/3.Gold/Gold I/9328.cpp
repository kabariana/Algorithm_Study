// BFS 문제
#include <bits/stdc++.h>
using pii = std::pair<int, int>;

void solution()
{
    int dx[] = {-1, 1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    int h, w;
    std::cin >> h >> w;

    char map[110][110];
    memset(map, 0, sizeof(map));

    for(int i = 1; i <= h; i++)
        for(int j = 1; j <= w; j++)
            std::cin >> map[i][j];
    
    std::queue<pii> q;
    std::vector<pii> door[26]; // 대문자의 개수 26개 - 지나갈 수 없는 문을 저장하기 위한 컨테이너
    bool ownKey[26] = {0}; // 소문자의 개수 26개 - 소유 여부
    bool visited[110][110];
    memset(visited, 0, sizeof(visited));

    std::string keyStream;
    std::cin >> keyStream;

    if(keyStream != "0")
        for(int i = 0; i < keyStream.size(); i++)
            ownKey[keyStream[i]-'a'] = 1;

    q.push({0, 0});
    int cnt = 0; // 문서의 개수
    while(q.size())
    {
        auto tmp = q.front();
        q.pop();
        int y = tmp.first, x = tmp.second;

        if(map[y][x] == '$')
            cnt++;
        for(int i = 0; i < 4; i++)
        {
            int newY = y + dy[i];
            int newX = x + dx[i];
            if(newY < 0 || newX < 0 || newY > h + 1 || newX > w + 1)
                continue;
            if(visited[newY][newX])
                continue;
            if(map[newY][newX] == '*')
                continue;
            if(map[newY][newX] >= 'A' && map[newY][newX] <= 'Z') // 문을 만남
            {
                // 열쇠를 소유하고 있지 않는다면
                if(!ownKey[map[newY][newX] - 'A'])
                {
                    door[map[newY][newX] - 'A'].push_back({newY, newX});
                    continue;
                }
            }
            if(map[newY][newX] >= 'a' && map[newY][newX] <= 'z') // 열쇠를 만남
            {
                ownKey[map[newY][newX]-'a'] = 1;
                // 해당하는 문이 있다면 q에 enqueue
                for(auto p : door[map[newY][newX] - 'a']) 
                    q.push(p);
            }
            visited[newY][newX] = 1;
            q.push({newY, newX});
        }
    }
    std::cout << cnt <<'\n';
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC;

    std::cin >> TC;

    while(TC--)
        solution();
    return 0;
}

//ㅂㄷㅂㄷㅂㄷㅂㄷㅂㄷㅂㄷㅂㄷㅂㄷㅂㄷㅂㄷㅂㄷㅂㄷㅂㄷㅂㄷㅂㄷㅂㄷㅂㄷㅂㄷㅂㄷ