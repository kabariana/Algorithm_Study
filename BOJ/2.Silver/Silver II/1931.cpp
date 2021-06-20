#include <bits/stdc++.h>
typedef std::pair<int, int> pii;

bool cmp(const pii& a, const pii& b)
{
    return a.second < b.second;
}

int main(int argc, char* argv[])
{
    int N, a, b;

    std::cin >> N;
    std::vector<pii> v;

    for(int i = 0; i < N; i++)
    {
        std::cin >> a >> b;
        v.push_back({a, b});
    }
    std::sort(v.begin(), v.end());
    std::sort(v.begin(), v.end(), cmp);

    int min = v[0].second;
    int cnt = 1;

    for(int i = 1; i<N; i++)
    {
        if(v[i].first >= min)
        {
            min = v[i].second;
            cnt++;
        }
    }
    std::cout << cnt << '\n';
    return 0;
}