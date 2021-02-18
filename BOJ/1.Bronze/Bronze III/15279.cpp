#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    while(n--)
    {
        double b, p;
        scanf("%lf %lf", &b, &p);

        double cbpm = 60/p*b;
        double delta = 60/p;

        printf("%.4lf %.4lf %.4lf\n", cbpm-delta, cbpm, cbpm+delta);
    }
    return 0;
}