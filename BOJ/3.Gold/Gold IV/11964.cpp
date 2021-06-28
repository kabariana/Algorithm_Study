#include <bits/stdc++.h>

int arr[2][5000001], res;
int T, A, B;

void dfs(int x, int y)
{
    if(x > T || y > T || arr[y][x])
        return;
    arr[y][x]++;
    if(x > res) 
        res = x;
    if(!y)
        dfs(x/2, 1);
    dfs(x + A, y);
    dfs(x + B, y);
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> T >> A >> B;
    dfs(0, 0);
    std::cout << res << '\n';
    return 0;
}