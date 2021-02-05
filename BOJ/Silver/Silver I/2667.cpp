#include <iostream>
#include <vector>
#include <algorithm>
#define ARRSIZE 25

std::vector<int> vec;

std::string arr[ARRSIZE];
bool visited[ARRSIZE][ARRSIZE];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
int n, cnt;

void dfs(int a, int b)
{
    visited[a][b] = true;
    cnt++;
    
    for(int i = 0; i<4; i++)
    {   
        int newX = b + dx[i];
        int newY = a + dy[i];

        if(newX >= 0 && newX < n && newY >= 0 && newY < n)
            if(arr[newY][newX] == '1' && !visited[newY][newX])
                dfs(newY, newX);
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> n;

    for(int i = 0; i<n; i++)
        std::cin >> arr[i];

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(arr[i][j] == '1' && !visited[i][j])
            {
                cnt = 0;
                dfs(i, j);
                vec.push_back(cnt);
            }
        }
    }
    std::sort(vec.begin(), vec.end());

    std::cout << vec.size() << '\n';
    for(int i = 0; i< vec.size(); i++)
        std::cout << vec[i] << '\n';    
    return 0;
}