#include <bits/stdc++.h>

int map[9][9];
bool complete;
std::vector<std::pair<int, int>> v;

void dfs(int cnt)
{
    if(cnt == v.size())
    {
        for(int i = 0; i<9; i++)
        {
            for(int j = 0; j<9; j++)
                std::cout << map[i][j];
            std::cout << '\n';
        }
        complete = true;
        return;
    }
    if(complete)
        return;
    
    for(int i = cnt; i<v.size(); i++){}
    int y = v[cnt].first;
    int x = v[cnt].second;

    bool tmp[10] = {0,};
    for(int i = 0; i < 9; i++)
    {
        tmp[map[y][i]] = 1;
        tmp[map[i][x]] = 1;
    }
    for(int i = y/3 * 3; i < y / 3 * 3 + 3; i++)
    {
        for(int j = x / 3 * 3; j < x / 3 * 3 + 3; j++)
            tmp[map[i][j]] = 1;
    }

    for(int i = 1; i<10; i++)
    {
        if(tmp[i] == 0){
            map[y][x] = i;
            dfs(cnt + 1);
            map[y][x] = 0;
        }
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    for(int i = 0; i<9; i++)
    {
        std::string str;
        std::cin >> str;
        for(int j = 0; j < 9; j++)
        {
            map[i][j] = str[j] - '0';
            if(map[i][j] == 0)
                v.push_back({i, j});
        }
    }
    dfs(0);
    return 0;
}