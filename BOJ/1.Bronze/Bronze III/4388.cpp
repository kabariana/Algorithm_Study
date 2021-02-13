#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        long long a, b, carrycnt = 0;
        std::cin >> a >> b;
        
        if(a == 0 && b == 0)
            break;

        for(int i = 0; a>0 || b>0; a/=10, b/=10)
        {
            long long x = a%10;
            long long y = b%10;
            if(x + y + i > 9)
            {
                carrycnt++;
                i = 1;
            }
            else
                i = 0;
        }
        std::cout << carrycnt << '\n';
    }
    return 0;
}