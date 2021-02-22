#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, T;
    std::cin >> n >> T;

    std::vector<int> v(n);
    for(int i = 0; i<n; i++)
        std::cin >> v[i];
    
    int sum = 0, cnt = 0;
    for(int i = 0; i<n; i++)
    {
        if(sum + v[i] > T)
            break;
        sum+=v[i];
        cnt++;
    }
    std::cout << cnt;
    return 0;
}