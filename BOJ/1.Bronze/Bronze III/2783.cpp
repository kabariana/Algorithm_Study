#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    double x, y;
    int n;
    std::cin >> x >> y >> n;
    double res = x/y*1000;
    while(n--)
    {
        double xinput, yinput;
        std::cin >> xinput >> yinput;
        if(res >= (xinput/yinput)*1000)
            res = (xinput/yinput)*1000;
    }
    printf("%.2lf", res);
    return 0;
}