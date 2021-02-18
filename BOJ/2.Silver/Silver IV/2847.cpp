#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for(int i = 0; i<n; i++)
        std::cin >> v[i];

    int cnt = 0;
    int val = v[n-1];
    
    for(int i = n-2; i>=0; i--)
    {
        while(v[i] >= val)
        {
            v[i]--;
            cnt++;
        }
        val = v[i];
    }
    std::cout << cnt;
    return 0;
}