#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int a, b;
    std::cin >> a >> b;

    if(b<=a)
        std::cout << "Congratulations, you are within the speed limit!";
    else if(b<=a+20)
        std::cout << "You are speeding and your fine is $100.";
    else if(b<=a+30)
        std::cout << "You are speeding and your fine is $270.";
}