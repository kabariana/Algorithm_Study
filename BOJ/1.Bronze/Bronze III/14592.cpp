#include <bits/stdc++.h>
typedef std::pair<int, int> pii;

bool comp(const std::pair<pii, pii>&p, const std::pair<pii, pii>&q)
{
    int a = p.first.first;
    int b = p.first.second;
    int c = p.second.first;

    int c_a = q.first.first;
    int c_b = q.first.second;
    int c_c = q.second.first;

    if(a == c_a)
    {
        if(b == c_b)
            return c<c_c;
        return b<c_b;
    }
    return a>c_a;
}

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    std::vector<std::pair<pii, pii>> v;
    for(int i = 1; i<=n; i++)
    {
        int s, c, l;
        std::cin >> s >> c >> l;
        v.push_back({{s,c},{l, i}});
    }
    std::sort(v.begin(), v.end(), comp);
    std::cout << v[0].second.second;
    return 0;
}