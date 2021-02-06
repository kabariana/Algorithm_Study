#include <iostream>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int a,b,c,d;
    std::cin >> a >> b >> c >> d;

    if((a == 8 || a == 9) && (d == 8 || d == 9))
    {
        if(b == c)
            std::cout << "ignore";
        else
            std::cout << "answer";
    }
    else
        std::cout << "answer";
    return 0;
}
