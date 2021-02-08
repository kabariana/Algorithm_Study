#define _USE_MATH_DEFINES
#include <bits/stdc++.h>

int main()
{
    double n, r;
    std::cin >> n;
    
    r = std::sqrt(n/M_PI);
    printf("%.10lf", r * 2 * M_PI);
    return 0;
}