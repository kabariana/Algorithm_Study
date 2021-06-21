#include <bits/stdc++.h>

bool visited[8 + 1];
int arr[8 + 1], res[8 + 1];
int N, M;

void func(int x, int cnt)
{
    if(cnt == M)
    {
        for(int i = 0; i<M; i++)
            std::cout << res[i] << ' ';
        std::cout << '\n';
        return;
    }
    int tmp = -1;
    for(int i = x; i< N; i++)
    {
        if(tmp != arr[i])
        {
            tmp = arr[i];
            res[cnt] = arr[i];
            visited[i] = true;
            func(i, cnt + 1);
            visited[i] = false;
        }
    }
}


int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M;

    for(int i = 0; i< N; i++)
        std::cin >> arr[i];
    std::sort(arr, arr + N);
    func(0, 0);
    return 0;
}