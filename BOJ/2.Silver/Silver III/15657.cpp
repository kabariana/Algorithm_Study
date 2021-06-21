#include <bits/stdc++.h>

int N, M, arr[8];
int visited[8];


void function(int index, int s, int e)
{
    if(e == M)
    {
        for(int i = 0; i < M; i++)
            std::cout << arr[visited[i]] << " ";
        std::cout << '\n';
    }

    if(index == N)
    {
        return;
    }

    for(int i = s; i<N; i++)
    {
        visited[index] = i;
        function(index + 1, i, e + 1);
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M;

    for(int i = 0; i<N; i++)
        std::cin >> arr[i];

    std::sort(arr, arr + N);

    function(0, 0, 0);

    return 0;
}