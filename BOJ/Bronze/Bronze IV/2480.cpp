#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b, c, result;
    std::cin >> a >> b >> c;
    if(a == b && b == c)
        result = 10000 + 1000 * a;
    else if(a == b)
        result = 1000 + 100 * a;
    else if(b == c)
        result = 1000 + 100 * b;
    else if(c == a)
        result = 1000 + 100 * c;
    else
    {
        if(a > b && a > c)
            result = a*100;
        else
        {
            if(b>c)
                result = b * 100;
            else
                result = c * 100;
        }
    }
    std::cout << result;
    return 0;
}