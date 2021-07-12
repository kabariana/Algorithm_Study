#include <bits/stdc++.h>
using ll = long long;
using pll = std::pair<ll, ll>;

std::vector<pll> v;

int getCCW(pll p1, pll p2, pll p3)
{
    ll tmp = p1.first * p2.second + p2.first * p3.second + p3.first * p1.second - (p2.first * p1.second + p3.first * p2.second + p1.first * p3.second);
    if(tmp > 0)
        return 1; // Counter Clockwise
    else if(tmp == 0)
        return 0; // 일직선상
    else
        return -1; // clockwise
}

void findPoint(pll p1, pll p2, pll p3, pll p4)
{
    // 두 선분이 있을 때 교점 구하는 공식 적용
    double dx = (p1.first*p2.second - p1.second*p2.first) * (p3.first - p4.first) - (p3.first*p4.second - p3.second*p4.first) * (p1.first - p2.first);
    double dy = (p1.first*p2.second - p1.second*p2.first) * (p3.second - p4.second) - (p3.first*p4.second - p3.second*p4.first) * (p1.second - p2.second);
    double no = (p1.first - p2.first) * (p3.second - p4.second) - (p1.second - p2.second) * (p3.first - p4.first);

    if(!no) // 평행
    {
        // 교점 1개
        if(p2 == p3 && p1 <= p3)
            std::cout << p2.first << " " << p2.second <<'\n';
        else if(p1 == p4 && p3 <= p1)
            std::cout << p1.first << " " << p1.second << '\n';
    }
    else // 교차
    {
        double x = dx / no;
        double y = dy / no;

        std::cout << std::fixed << std::setprecision(9) << x << " " << y << '\n';
    }
}

void isInter(pll p1, pll p2, pll p3, pll p4) // 겹치는지 안겹치는지
{
    ll line1 = getCCW(p1, p2, p3) * getCCW(p1, p2, p4);
    ll line2 = getCCW(p3, p4, p1) * getCCW(p3, p4, p2);

    if(line1 == 0 && line2 == 0)
    {
        if(p1 > p2) std::swap(p1, p2);
        if(p3 > p4) std::swap(p3, p4);

        if(p1 <= p4 && p2 >= p3) // 교차
        {
            std::cout << 1 << '\n';
            findPoint(p1, p2, p3, p4);
        }
        else // 교차하지 않음
            std::cout << 0 << '\n';
    }
    else
    {
        // 한 선분의 끝 점이 다른 선분에 있을 때
        if(line1 <= 0 && line2 <= 0)
        {
            std::cout << 1 <<'\n';
            findPoint(p1, p2, p3, p4);
        }
        else
            std::cout << 0 << '\n';
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    ll x, y;
    // INPUT - 4 * Coord
    for(int i = 0; i<4; i++)
    {
        std::cin >> x >> y;
        v.push_back({x, y});
    }

    isInter(v[0], v[1], v[2], v[3]);

    return 0;
}