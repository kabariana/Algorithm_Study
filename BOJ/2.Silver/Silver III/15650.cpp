#include <bits/stdc++.h>

int N, M;
int arr[8];

void function(int ind)
{
    if(ind == M)
    {
        for(int i = 0; i< M; i++)
            std::cout << arr[i] << ' ';
        std::cout << '\n';
        return;
    }

    for(int i = (!ind?1:arr[ind-1] + 1); i<= N; i++)
    {
        arr[ind] = i;
        function(ind + 1);
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