#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, x, k;
    std::cin >> n >> x >> k;

    for(int i = 0; i<k; i++)
    {
        int a, b;
        std::cin >> a >> b;
        if(a==x)
            x=b;
        else if(b==x)
            x=a;
    }
    std::cout << x;
    return 0;
}