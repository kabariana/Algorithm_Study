#include <bits/stdc++.h>
using pii = std::pair<int, int>;

const int SIZE = 3001;
std::vector<int> parent;
std::vector<int> arr;
std::vector<std::pair<pii, pii>> v;

int find(int x)
{
    if(x == parent[x])
        return x;
    return find(parent[x]);
}

void _union(int x, int y)
{
    int px = find(x);
    int py = find(y);

    if(px < py)
        parent[py] = px;
    else if(px > py)
        parent[px] = py;
}

int CCW(pii &p1, pii &p2, pii &p3)
{
    int tmp = p1.first * p2.second + p2.first * p3.second + p3.first * p1.second;
    tmp -= (p1.first*p3.second + p2.first * p1.second + p3.first * p2.second);

    if(tmp > 0)
        return 1;
    else if(tmp == 0)
        return 0;
    else
        return -1;
}

// 두 선분 교차
bool checkInter(int line1, int line2)
{
    pii p1 = v[line1].first;
    pii p2 = v[line1].second;
    pii p3 = v[line2].first;
    pii p4 = v[line2].second;

    int line_12 = CCW(p1, p2, p3) * CCW(p1, p2, p4);
    int line_21 = CCW(p3, p4, p1) * CCW(p3, p4, p2);

    if(line_12 == 0 && line_21 == 0)
    {
        if(p1 > p2)
            std::swap(p1, p2);
        if(p3 > p4)
            std::swap(p3, p4);

        return p1 <= p4 && p3 <= p2;
    }
    return line_12 <= 0 && line_21 <= 0;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int N;
    std::cin >> N;

    v.resize(N);
    parent.resize(N);
    arr.resize(N);

    for(int i = 0; i<N; i++)
    {
        int x1, y1, x2, y2;
        std::cin >> v[i].first.first >> v[i].first.second >> v[i].second.first >> v[i].second.second;
        parent[i] = i;
        arr[i] = 0;
    }

    for(int i = 0; i<N; i++)
        for(int j = i + 1; j < N; j++)
            if(checkInter(i, j))
                _union(i, j);

    int cnt = 0;
    int maxV = 0;
    for(int i = 0; i < N; i++)
    {
        if(parent[i] == i) 
            cnt++;
        int tmp = find(i);
        arr[tmp]++;
        maxV = std::max(maxV, arr[tmp]);
    }
    std::cout << cnt << '\n';
    std::cout << maxV << '\n';
    return 0;
}