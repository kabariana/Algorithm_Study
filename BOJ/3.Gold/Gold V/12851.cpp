#include <bits/stdc++.h>

const int MAX = 1e5;
int N, K, ans, cnt;

bool visited[MAX + 1];
std::queue<std::pair<int, int>> q;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> K;

    q.push({N, 0});
    while(!q.empty())
    {
        int curr = q.front().first;
        int time = q.front().second;
        q.pop();

        visited[curr] = true;

        if(cnt && curr == K && ans == time) // 최소시간
            cnt++;
        if(!cnt && curr == K) // 첫 방문
        {
            ans = time;
            cnt++;
        }

        if(curr - 1 >= 0 && !visited[curr-1])
            q.push({curr-1, time + 1});
        if(curr + 1 <= MAX && !visited[curr+1])
            q.push({curr+1, time + 1});
        if(2*curr <= MAX && !visited[2*curr])
            q.push({2*curr, time + 1});
    }
    std::cout << ans << '\n' << cnt << '\n';
    return 0;
}