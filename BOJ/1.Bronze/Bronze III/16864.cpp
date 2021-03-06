#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int dol, cen, sum, pizza, pita;
    char t;
    bool flag = true;

    std::cin >> dol >> t >> cen;
    sum = dol*100 + cen;
    std::cin >> dol >> t >> cen;
    pizza = dol*100 + cen;
    std::cin >> dol >> t >> cen;
    pita = dol*100 + cen;

    for(int i = 0; sum-i*pizza>=0; i++)
    {
        if((sum-i*pizza)%pita == 0)
        {
            std::cout << i << ' ' << (sum-i*pizza)/pita << '\n';
            flag = false;
        }
    }
    if(flag)
        std::cout << "none";
    return 0;
}