#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, f, res;
    std::cin >> n >> f;

    int s = (n/100) * 100;
    int e = s + 100;

    for(int i = s; i<e; i++)
    {
        if(i%f == 0)
        {
            res = i % 100;
            break;
        }
    }
    if(res <10)
        std::cout << "0";
    std::cout << res;
    return 0;
}