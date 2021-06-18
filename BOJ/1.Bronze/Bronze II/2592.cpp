#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::vector<int> v(10);

    for(int i = 0; i<10; i++)
        std::cin >> v[i];

    std::sort(v.begin(), v.end());

    std::cout << std::accumulate(v.begin(), v.end(), 0)/ 10 <<'\n';
    int cnt = 0, res;
    for(int i = 0; i<10;)
    {
        int tmp = std::upper_bound(v.begin(), v.end(), v[i]) - std::lower_bound(v.begin(), v.end(), v[i]);
        if(tmp > cnt){
            cnt = tmp;
            res = v[i];
        }
        i += tmp;
    }
    std::cout << res <<'\n';
    return 0;
}