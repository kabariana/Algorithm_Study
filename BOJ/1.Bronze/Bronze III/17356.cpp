#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b;
    float m, result;

    std::cin >> a >> b;
    m = (b-a);
    m/=400;

    result = 1/(1+std::pow(10, m));
    std::cout << result;
    return 0;
}