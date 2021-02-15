#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int t;
    std::cin >> t;

    while(t--)
    {
        int n, d;
        std::cin >> n >> d;
        int cnt =0;
        while(n--)
        {
            int v, f, c;
            std::cin >> v >> f >> c;
            if(v*f/c>=d)
                cnt++;
        }
        std::cout << cnt <<'\n';
    }
    return 0;
}