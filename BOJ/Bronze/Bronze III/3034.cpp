#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n, w, h;
    std::cin >> n >> w >> h;

    for(int i = 0; i<n; i++)
    {
        int num;
        std::cin >> num;

        if(num*num <= w*w + h*h)
            std::cout << "DA\n";
        else
            std::cout << "NE\n";
    }
    return 0;
}