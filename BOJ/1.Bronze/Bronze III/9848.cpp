#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, k;
    std::cin >> n >> k;
    std::vector<int> v(n);

    for(int i = 0; i<n; i++)
        std::cin >> v[i];
    
    int cnt = 0;
    for(int i = 0; i<n-1; i++)
        if(v[i]- v[i+1]>=k)
            cnt++;
    std::cout << cnt;
    return 0;
}