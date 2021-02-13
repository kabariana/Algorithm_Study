#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    double h, w, tmp, result;
    std::cin >> h >> w;

    if(h < w)
    {
        tmp = h;
        h = w;
        w = tmp;
    }

    if(h > w*3)
        result = w;
    else if(h > w * 1.5)
        result = h/3;
    else
        result = w/2;
    printf("%.6lf", result);
    return 0;
}
