#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    if(a==b&&b==c&&c==d)
        std::cout<< "Fish At Constant Depth";
    else if(a<b&&b<c&&c<d)
        std::cout << "Fish Rising";
    else if(a>b&&b>c&&c>d)
        std::cout <<"Fish Diving";
    else
        std::cout <<"No Fish";
    return 0;
}