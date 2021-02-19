#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    double d1, d2, d3, d;
    std::cin >> d1 >> d2 >> d3;
    d = (d1 + d2 + d3)/2;

    if(d<=d1 || d<=d2 || d<=d3)
    {
        std::cout << "-1";
        return 0;
    }
    double a, b, c;
    a = std::round((d-d3)*10)/10;
    b = std::round((d-d2)*10)/10;
    c = std::round((d-d1)*10)/10;

    std::cout << "1\n";
    printf("%.1lf %.1lf %.1lf", a, b, c);
    return 0;
}