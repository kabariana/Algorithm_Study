// 투 포인터
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, S;
    std::cin >> N >> S;

    std::vector<int> v(N);
    for(int i = 0; i < N; i++)
        std::cin >> v[i];

    int l, r;
    l = r = 0;
    int sum = v[0];
    int result = INT_MAX;

    while(l <= r && r < N)
    {
        if(sum < S)
            sum += v[++r];
        else if(sum == S)
        {
            result = std::min(result, (r - l + 1));
            sum += v[++r];
        }
        else if(sum > S)
        {
            result = std::min(result, (r - l + 1));
            sum -= v[l++];   
        }
    }
    if(result == INT_MAX)
        std::cout << "0\n";
    else
        std::cout << result <<'\n';
    return 0;
}