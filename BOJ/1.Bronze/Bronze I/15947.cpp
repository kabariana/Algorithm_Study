#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;

    int cnt = (n-1)/14 + 2;
    int l = (n-1)%14;

    switch(l)
    {
    case 0:
    case 12:
        std::cout << "baby";
        break;
    case 1:
    case 13:
        std::cout << "sukhwan";
        break;
    case 2:
    case 6:
    case 10:
        if(cnt < 5)
        {
            std::cout << "tu";
            for(int i = 0 ; i<cnt; i++)
                std::cout << "ru";
        }
        else
            std::cout << "tu+ru*" << cnt;
        break;
    case 3:
    case 7:
    case 11:
        if(cnt-1 < 5)
        {
            std::cout << "tu";
            for(int i = 0 ; i<cnt-1; i++)
                std::cout << "ru";
        }
        else
            std::cout << "tu+ru*" << cnt-1;
        break;
    case 4:
        std::cout << "very";
        break;
    case 5:
        std::cout << "cute";
        break;
    case 8:
        std::cout << "in";
        break;
    case 9:
        std::cout << "bed";
        break;
    default:
        break;
    }
}