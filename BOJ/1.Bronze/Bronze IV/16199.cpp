#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int y1, m1, d1, y2, m2, d2;
    std::cin >> y1 >> m1 >> d1;
    std::cin >> y2 >> m2 >> d2;

    int a = 0, b = 0, c = 0;
    b = y2 - y1 + 1;
    c = b - 1;

    if(y1 == y2) 
        a = 0;
    else
    {
        if(m1 < m2)
            a = y2 - y1;
        else if(m1 == m2)
        {
            if(d1 > d2)
                a = y2 - y1 - 1;
            else
                a = y2 - y1;
        }
        else
            a = y2 - y1 - 1;
    }
    std::cout << a <<'\n' << b << '\n' << c;
    return 0;
}