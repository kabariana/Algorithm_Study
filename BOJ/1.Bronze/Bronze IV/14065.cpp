#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    const double gallonToliter = 3.785411784;
    const double mileTokm = 1.609344;

    double x;
    scanf("%lf", &x);

    printf("%lf", 100.0 / ((mileTokm / gallonToliter) * x));
    return 0;
}