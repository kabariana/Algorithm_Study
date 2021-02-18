#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        double speed, weight, strength;
        std::cin >> speed >> weight >> strength;

        if(speed==0 && weight==0 && strength==0)
            break;

        int cnt = 0;
        if(speed<=4.5 && weight>=150 && strength>=200)
            std::cout << "Wide Receiver ", cnt++;
        if(speed<=6.0 && weight>=300 && strength>=500)
            std::cout << "Lineman ", cnt++;
        if(speed<=5.0 && weight>=200 && strength>=300)
            std::cout << "Quarterback ", cnt++;
        if(cnt==0)
            std::cout << "No positions";
        std::cout << '\n';
    }
    return 0;
}