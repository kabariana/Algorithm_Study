#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    double k, p, x, tmp, a, i = 1;
    std::cin >> k >> p >> x;

    tmp = 2*std::sqrt(k*p*x);
    a = 2*x;
    while(a*i<tmp)
        i++;
    std::cout << std::fixed << std::setprecision(3) << x*i+k*p/i;
    return 0;
}