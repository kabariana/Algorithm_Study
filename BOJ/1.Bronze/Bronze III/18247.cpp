#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int t;
    std::cin >> t;
    while(t--)
    {
        int n, m;
        std::cin >> n >> m;
        if(n<12 || m<4)
        {
            std::cout << "-1\n";
            continue;
        }
        std::cout << 11*m+4<<'\n';
    }
    return 0;
}