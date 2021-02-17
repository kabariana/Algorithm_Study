#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int maxv = -1, minv = 1001;
    for(int i = 0; i<n; i++)
    {
        int temp;
        std::cin >> temp;

        minv= std::min(minv, temp);
        maxv= std::max(maxv, temp);
    }
    std::cout << maxv-minv;
    return 0;
}