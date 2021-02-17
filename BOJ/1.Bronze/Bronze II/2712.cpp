#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    while(T--)
    {
        std::pair<double, std::string> p;
        std::cin >> p.first >> p.second;

        if(p.second == "kg")
            printf("%.4lf lb\n", p.first*2.2046);
        else if(p.second == "lb")
            printf("%.4lf kg\n", p.first*0.4536);
        else if(p.second == "l")
            printf("%.4lf g\n", p.first*0.2642);
        else if(p.second == "g")
            printf("%.4lf l\n", p.first*3.7854);
    }
    return 0;
}