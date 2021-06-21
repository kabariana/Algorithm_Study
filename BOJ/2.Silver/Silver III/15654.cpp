#include <bits/stdc++.h>

int N, M, arr[8];
bool visited[8];

std::vector<int> res;

void function(int n)
{
    if(n == M)
    {
        for(int i = 0; i < res.size(); i++)
            std::cout << res[i] << " ";
        std::cout << '\n';
    }

    for(int i = 0; i<N; i++)
    {
        if(!visited[i])
        {
            visited[i] = true;
            res.push_back(arr[i]);
            function(n + 1);
            res.pop_back();
            visited[i] = false;
        }
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
    function(0);
    return 0;
}