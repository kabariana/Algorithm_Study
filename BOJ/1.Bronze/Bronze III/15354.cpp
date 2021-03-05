#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    std::vector<char> v(26);

    for(int i = 0; i<n; i++)
        std::cin >> v[i];
    
    int cnt = 1;
    for(int i = 1; i<n; i++)
    {
        if(v[i] == v[i-1])
            continue;
        else
            cnt++;
    }
    std::cout << cnt+1;
    return 0;
}