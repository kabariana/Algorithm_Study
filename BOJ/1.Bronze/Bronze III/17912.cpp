//최솟값을 가지는 인덱스 구하는 문제
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> v(n);

    for(int i = 0; i<n; i++)
        std::cin >> v[i];

    std::cout << std::min_element(v.begin(), v.end())-v.begin();
    return 0;
}