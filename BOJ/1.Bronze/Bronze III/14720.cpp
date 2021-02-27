#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, cnt = 0, milk = 0;
    std::cin >> n;

    std::vector<int> v(n);

    for(int i = 0; i<n; i++)
        std::cin >> v[i];
    
    for(int i = 0; i<n; i++)
    {
        if(v[i] == 0 && milk == 0)
            cnt++, milk = 1;
        if(v[i] == 1 && milk == 1)
            cnt++, milk = 2;
        if(v[i] == 2 && milk == 2)
            cnt++, milk = 0;
    }
    std::cout << cnt;
    return 0;
}