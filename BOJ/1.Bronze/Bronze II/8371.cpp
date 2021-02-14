#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::string a, b;
    std::cin >> n >> a >> b;

    int cnt = 0;
    for(int i = 0; i<n; i++)
    {
        if(a[i]!=b[i])
            cnt++;
    }
    std::cout << cnt;
    return 0;
}