#include <bits/stdc++.h>

bool comp(char a, char b)
{
    if(a == 'R' && b == 'S')
        return 1;
    else if(a == 'S' && b == 'P')
        return 1;
    else if(a == 'P' && b == 'R')
        return 1;
    return 0;
}

int main(int argc, char* argv[])
{
    char ml, mr, tl, tr;
    std::cin >> ml >> mr >> tl >> tr;
    if(comp(ml, tl)&&comp(ml, tr))
        std::cout << "MS";
    else if(comp(mr, tl) && comp(mr, tr))
        std::cout << "MS";
    else if(comp(tl, ml)&&comp(tl, mr))
        std::cout << "TK";
    else if(comp(tr, ml)&&comp(tr, mr))
        std::cout << "TK";
    else
        std::cout << "?";
    return 0;
}