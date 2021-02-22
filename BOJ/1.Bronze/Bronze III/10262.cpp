#include <bits/stdc++.h>

double func(int a, int b)
{
    double sum = 0;
    for(int i = a; i<=b; i++)
        sum+=i;
    sum /= (b-a+1);
    return sum;
}

int main(int argc, char* argv[])
{
    int a, b, c, d, a1, b1, c1, d1;
    std::cin >> a >> b >> c >> d >> a1 >> b1 >> c1 >> d1;

    double _a = func(a, b);
    double _b = func(c, d);
    double _c = func(a1, b1);
    double _d = func(c1, d1);

    if(_a + _b == _c + _d)
        std::cout << "Tie";
    else if(_a + _b > _c + _d)
        std::cout << "Gunnar";
    else
        std::cout << "Emma";
    return 0;
}