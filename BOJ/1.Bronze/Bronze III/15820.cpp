#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int s1, s2;
    bool chk1 = true, chk2 = true;
    
    std::cin >> s1 >> s2;

    while(s1--)
    {
        int a, b;
        std::cin >> a >> b;
        if(a!=b)
            chk1 = false;
    }

    while(s2--)
    {
        int a, b;
        std::cin >> a >> b;
        if(a!=b)
            chk2 = false;
    }

    if(chk1 == true && chk2 == false)
        std::cout << "Why Wrong!!!";
    else if(chk1 == true && chk2 == true)
        std::cout << "Accepted";
    else
        std::cout << "Wrong Answer";
    return 0;
}