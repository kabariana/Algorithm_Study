#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int k, d1, d2;
    std::cin >> k >> d1 >> d2;

    if(d1 == d2)
        std::cout << k*k;
    else
    {
        double tmp = (double)(d1-d2)/2;
        printf("%.2lf", k*k-tmp*tmp);
    }
}