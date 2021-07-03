// 30의 배수의 조건
// 1. 반드시 마지막 자리가 0
// 2. 모든 자리의 수를 더하면 3의 배수
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string N;
    std::cin >> N;

    std::vector<int> v;
    int sum = 0;
    bool chk = false;

    for(int i = 0; i<N.length(); i++)
    {
        int tmp = N[i]-'0';
        if(tmp == 0)
            chk = true;
        sum += tmp;
        v.push_back(tmp);
    }

    // 끝자리가 0이 아니면서 자릿수의 합이 3의 배수가 아니라면
    // 존재하지 않음
    if(!chk || (sum % 3 != 0))
        std::cout << "-1\n";
    else
    {
        // 내림차순으로 정렬
        std::sort(v.begin(), v.end(), std::greater<int>());
        for(auto i : v)
            std::cout << i;
    }
    std::cout << '\n';
    return 0;
}