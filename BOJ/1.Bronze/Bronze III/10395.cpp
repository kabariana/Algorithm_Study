#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::vector<int> x(5);
    std::vector<int> y(5);

    for(int i = 0; i<5; i++)
        std::cin >> x[i];
    for(int i = 0; i<5; i++)
        std::cin >> y[i];

    bool flag = true;
    for(int i = 0; i<5; i++)
    {
        if(x[i]==y[i])
        {
            flag = false;
            break;
        }
    }
    if(flag)
        std::cout << "Y";
    else
        std::cout << "N";
    return 0;
}