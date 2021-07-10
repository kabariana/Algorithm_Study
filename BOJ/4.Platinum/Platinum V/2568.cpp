// LIS 최장 증가 수열
#include <bits/stdc++.h>
using pii = std::pair<int, int>;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N; 
    std::cin >> N;
    std::vector<pii> v(N);
    for(int i = 0; i<N; i++)
        std::cin >> v[i].first >> v[i].second;

    std::sort(v.begin(), v.end());

    std::vector<int> S;
    std::vector<pii> trace;

    for(int i = 0; i<N; i++)
    {
        if(S.empty() || S.back() < v[i].second)
        {
            trace.push_back({S.size(), v[i].first});
            S.push_back(v[i].second);
        }
        else
        {
            auto it = std::lower_bound(S.begin(), S.end(), v[i].second);
            *it = v[i].second;
            trace.push_back({it - S.begin(), v[i].first});
        }
    }

    std::vector<int> res;
    for(int i = trace.size() - 1, j = S.size()-1; i>=0; i--)
    {
        if(trace[i].first == j)
            j--;
        else
            res.push_back(trace[i].second);
    }
    std::sort(res.begin(), res.end());

    std::cout << res.size() <<'\n';
    for(auto i : res)
        std::cout << i << '\n';
    return 0;
}