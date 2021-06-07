#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
    int a, b, c;
    while(std::cin >> a >> b >> c)
    {
        std::vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        std::sort(v.begin(), v.end());
        if(v[0] + v[1] <= v[2])
            break;
        cnt1++;
        v[0]*v[0] + v[1] * v[1] == v[2]* v[2]? ++cnt2: v[0] * v[0] + v[1] * v[1] > v[2] * v[2] ? ++cnt3 : ++cnt4;
    }   
    std::cout << cnt1 << " " << cnt2 << " " << cnt3 << " " << cnt4 << '\n';
}