#define _USE_MATH_DEFINES
#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int i = 1;
    while(true)
    {
        double d, r, t;
        std::cin >> d >> r >> t;

        if(!r)
            break;

        double dist = d*r*M_PI/5280/12;
        double mph = dist/t*3600;
        printf("Trip #%d: %.2lf %.2lf\n", i++, dist, mph);
    }
    return 0;
}