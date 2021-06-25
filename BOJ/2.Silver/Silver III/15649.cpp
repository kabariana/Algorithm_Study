#include <bits/stdc++.h>

int m, n;
int arr[9];
bool visited[9];

void func(int cnt)
{
    if(cnt == m)
    {
        for(int i = 0; i<m; i++)
            std::cout << arr[i] << ' ';
        std::cout << '\n';
        return;
    }
    for(int i = 1; i<=n; i++)
    {
        if(!visited[i])
        {
            visited[i] = true;
            arr[cnt] = i;
            func(cnt + 1);
            visited[i] = false;
        }
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> n >> m;
    func(0);
    return 0;
}