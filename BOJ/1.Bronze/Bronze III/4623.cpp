#include <bits/stdc++.h>
#define MIN(a, b) (((a) < (b)) ? (a) : (b))

int main(int argc, char* argv[])
{
    while(true)
    {
        double a, b, c, d;
        std::cin >> a >> b >> c >> d;

        if(a == 0 && b == 0 && c==0 && d==0)
            break;
        if(b>a)
            std::swap(a, b);
        if(d>c)
            std::swap(c, d);

        int result = (int)(100 * MIN(100, MIN(c/a, d/b)));
        
        if(result >100)
            std::cout << "100%\n";
        else
            std::cout << result <<"%\n";
    }
    return 0;
}