#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int A_attk, A_hp, B_attk, B_hp;
    std::cin >> A_attk >> A_hp >> B_attk >> B_hp;

    while(true)
    {
        A_hp -= B_attk;
        B_hp -= A_attk;
        if(A_hp < 1 || B_hp < 1)
            break;
    }
    if(A_hp < 1 && B_hp < 1)
        std::cout << "DRAW";
    else
    {
        std::cout << "PLAYER ";
        if(A_hp > B_hp)
            std::cout << "A";
        else
            std::cout << "B";
    }
    return 0;
}