// 오늘자 3번째 CCW 문제
#include <bits/stdc++.h>

typedef long long ll;
typedef std::pair<ll, ll> pll;

int getCCW(pll a, pll b, pll c)
{
    ll tmp = a.first * b.second + b.first * c.second + c.first * a.second;
    tmp += (-a.second * b.first - b.second * c.first - c.second * a.first);

    if(tmp > 0)
        return 1; // CW
    else if(tmp < 0)
        return -1; // CCW
    else
        return 0; // horizon
}

bool chk(pll a, pll b, pll c, pll d)
{
    int a_b_c = getCCW(a, b, c);
    int a_b_d = getCCW(a, b, d);
    int c_d_a = getCCW(c, d, a);
    int c_d_b = getCCW(c, d, b);

    if(a_b_c * a_b_d == 0 && c_d_a * c_d_b == 0)
    {
        if(a > b)
            std::swap(a, b);
        if(c > d)
            std::swap(c, d);
        return a <= d && c <= b;
    }
    return a_b_c * a_b_d <= 0 && c_d_a * c_d_b <= 0;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    pll arr[4];

    for(int i = 0; i<4; i++)
        std::cin >> arr[i].first >> arr[i].second;

    if(chk(arr[0], arr[1], arr[2], arr[3]))
        std::cout << 1 <<'\n';
    else
        std::cout << 0 <<'\n';
    return 0;
}
