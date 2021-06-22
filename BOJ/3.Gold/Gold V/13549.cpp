#include <bits/stdc++.h>
#define MAX 100000

int N, K, dist[MAX + 1];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> K;

    if(N > K)
    {
        std::cout << N - K <<'\n';
        return 0;
    }

    if(N == 0)  
        dist[N + 1] = 1;
    else if(N == 1)
    {
        dist[N + 1] = 0;
        dist[N - 1] = 1;
    }
    else{
        dist[N-1] = dist[N+1] = 1;
    }
    int index = N - 2, tmp = 2;
    
    while(index >= 0){
        dist[index] = tmp;
        index--;
        tmp++;
    }

    for(int i = N + 2; i<= K + 1; i++)
    {
        if(i % 2 == 0)
            dist[i] = std::min(dist[i-1] + 1, dist[i/2]);
        else
            dist[i] = dist[i-1] + 1;
        dist[i-1] = std::min(dist[i-1], dist[i] + 1);
    }
    std::cout << dist[K] <<'\n';
    return 0;
}