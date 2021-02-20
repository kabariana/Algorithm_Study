#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int N, res = 0;
    std::cin >> N;

    while(N--)
    {
        int a, b, c;
        std::cin >> a >> b >> c;

        if(a == b && b == c)
            res = std::max(res, 10000+a*1000);
        else if(a == b)
            res = std::max(res, 1000+a*100);
        else if(b == c)
            res = std::max(res, 1000+b*100); 
        else if(c == a)
            res = std::max(res, 1000+c*100);
        else
            res = std::max(res, std::max(a, std::max(b, c))*100);
    }
    std::cout << res;
    return 0;
}