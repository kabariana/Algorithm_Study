#include <bits/stdc++.h>

const int SIZE = 1e5 + 1;
std::vector<int> input;
int dp[5][5][SIZE];

int func(int f, int t)
{
    if(f == t) // 한 번 더 누르면 1의 힘
        return 1;
    switch(f) // 인접한 지점으로 움직일 때는 3의 힘, 반대편으로 움직일 때는 4의 힘
    {
    case 0: // 중앙에 있던 발이 다른 지점으로 움직일 때는 2의 힘
        return 2;
    case 1: // 1 <=> 3
        return t==3?4:3;
    case 2: // 2 <=> 4
        return t==4?4:3;
    case 3: // 3 <=> 1
        return t==1?4:3;
    case 4: // 4 <=> 2
        return t==2?4:3;
    }
}

int dfs(int l, int r, int cnt)
{
    if(cnt == input.size())
        return 0;
    int& res = dp[l][r][cnt];
    if(res != 0)
        return res;
    return res = std::min(func(l, input[cnt])+dfs(input[cnt], r, cnt + 1), func(r, input[cnt]) + dfs(l, input[cnt], cnt + 1));
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    while(true)
    {
        int foot;
        std::cin >> foot;
        if(foot == 0)
            break;
        input.push_back(foot);
    }

    std::cout << dfs(0, 0, 0) << '\n';
    return 0;
}