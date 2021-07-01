#include <bits/stdc++.h>
using pii = std::pair<int, int>;
using ll = long long;
const int MAX = 300000;

std::vector<pii> v; // weight, price
std::vector<int> c;

bool cmp(pii a, pii b)
{
    return a.first < b.first;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N, K;
    std::cin >> N >> K;

    v.resize(N);
    c.resize(K);

    for(int i = 0; i<N; i++)
        std::cin >> v[i].first >> v[i].second;
    for(int i = 0; i<K; i++)
        std::cin >> c[i];
    
    std::sort(v.begin(), v.end(), cmp);
    std::sort(c.begin(), c.end());

    std::priority_queue<int> pq;

    int ind = 0;
    ll res = 0;
    for(int i = 0; i<K; i++)
    {
        while(ind < N && c[i] >= v[ind].first)
            pq.push(v[ind++].second);
        if(!pq.empty())
        {
            res += (long long)pq.top();
            pq.pop();
        }
    }
    std::cout << res <<'\n';
    return 0;
}