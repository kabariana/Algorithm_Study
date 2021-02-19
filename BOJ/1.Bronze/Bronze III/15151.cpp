#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    long long k, d, t, num=0;
    std::cin >> k >> d;

    t = k;
    for(int i=1; ;i++)
    {
        if(num+t > d)
        {
            std::cout << i-1;
            return 0;
        }
        num+=t;
        t*=2;
    }
    return 0;
}