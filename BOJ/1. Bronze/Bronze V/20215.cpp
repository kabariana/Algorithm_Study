#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    double w, h;
    std::cin >> w >> h;
    double rec = w+h;
    double diag = std::sqrt(w*w + h*h);
    printf("%.6lf", rec - diag);
    return 0;
}