#include <bits/stdc++.h>
typedef long long ll;

ll func(int n, std::vector<int> &v)
{
    if(n <= 1) return 0;
    int mid = n/2;
    std::vector<int> L(mid), R(n-mid);
    std::copy(v.begin(), v.begin() + mid, L.begin());
    std::copy(v.begin()+mid, v.end(), R.begin());
    ll res = func(mid, L) + func(n-mid, R);
    for(int i = 0, j = 0, k = 0; k<n; k++)
    {
        int tmp = (i<mid?L[i]:INT_MAX);
        int tmp2 = (j < n-mid?R[j]:INT_MAX);
        if(tmp < tmp2)
            v[k] = L[i++];
        else{
            res += mid-i;
            v[k] = R[j++];
        }
    }
    return res;
}


int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for(int i = 0; i<n; i++)
        std::cin >> v[i];
    std::cout << func(n, v);
    return 0;
}