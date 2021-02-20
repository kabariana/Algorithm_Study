#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b, c;
    double s, e;
    std::cin >> a >> b >> c;

    s = 0;
    e = 1.0*a*c+a;
    while(e-s >= 1e-9)
    {
        double x = (s+e)/2;
        if(a*x + b*std::sin(x)<c)
            s = x;
        else
            e = x;
    }
    printf("%.19f", e);
    return 0;   
}