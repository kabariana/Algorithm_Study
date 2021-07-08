#include <bits/stdc++.h>
using ll = long long;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    // Input
    int n, m;
    ll T;
    
    std::cin >> T;
    std::cin >> n;

    std::vector<ll> A(n);
    for(int i = 0; i<n; i++)
        std::cin >> A[i];

    std::cin >> m;
    
    std::vector<ll> B(m);
    for(int i = 0; i<m; i++)
        std::cin >> B[i];
    
    // 부분합 구하기
    std::vector<ll> subSumA;
    for(int i = 0; i<n; i++)
    {
        ll sum = A[i];
        subSumA.push_back(sum);
        for(int j = i + 1; j<n; j++)
        {
            sum += A[j];
            subSumA.push_back(sum);
        }
    }

    std::vector<ll> subSumB;
    for(int i = 0; i<m; i++)
    {
        ll sum = B[i];
        subSumB.push_back(sum);
        for(int j = i + 1; j < m; j++)
        {
            sum += B[j];
            subSumB.push_back(sum);
        }
    }

    std::sort(subSumA.begin(), subSumA.end());
    std::sort(subSumB.begin(), subSumB.end());

    ll res = 0;

    for(int i = 0 ; i<subSumA.size(); i++)
    {
        int l = std::lower_bound(subSumB.begin(), subSumB.end(), T - subSumA[i]) - subSumB.begin();
        int r = std::upper_bound(subSumB.begin(), subSumB.end(), T - subSumA[i]) - subSumB.begin();
        res += r - l;
    }
    std::cout << res << '\n';
    return 0;
}