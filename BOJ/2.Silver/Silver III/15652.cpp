#include <bits/stdc++.h>

int N, M;
int arr[2<<3 + 1];

void function(int n)
{
    if(n == M)
    {
        for(int i = 0; i < M; i++)
            std::cout << arr[i] <<' ';
        std::cout << '\n';
        return;
    }
    for(int i = (!n?1:arr[n-1]); i <= N; i++)
    {
        arr[n] = i;
        function(n + 1);
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M;
    function(0);
    return 0;
}