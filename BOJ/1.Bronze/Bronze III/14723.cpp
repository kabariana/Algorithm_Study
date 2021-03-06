#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, idx = 0;
    std::cin >> n;
    for(int i = 1; i<=n; i++)
    {
        if(i*(i+1)/2 >=n)
        {
            idx = i;
            break;
        }
    }
    int a = n-idx*(idx-1)/2;
    std::cout << idx - a + 1 << ' ' << a;
    return 0;
}