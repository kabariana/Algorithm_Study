#include <bits/stdc++.h>

int arr[10001];
bool visited[4000001];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, M, K;
    std::cin >> N >> M >> K;

    std::vector<int> v(N);
    for(int i = 0; i<M; i++)
        std::cin >> v[i];

    std::sort(v.begin(), v.end());

    for(int i = 0; i<K; i++)
        std::cin >> arr[i];
    
    for(int i = 0; i < K; i++)
    {
        int index = std::upper_bound(v.begin(), v.end(), arr[i]) - v.begin();
        while(visited[index])
            index++;
        visited[index] = true;
        std::cout << v[index] <<'\n';
    }
    return 0;
}