#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int N;
    std::cin >> N;

    while(N--)
    {
        int r, e, c;
        std:: cin >> r >> e >> c;

        int temp = e - c;

        if(r > temp)
            std::cout << "do not advertise\n";
        else if(r == temp)
            std::cout << "does not matter\n";
        else
            std::cout << "advertise\n";
    }
    return 0;
}