
#include <bits/stdc++.h>
int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string str;
    double temp;
    std::cin >> str;

    switch(str[0])
    {
    case 'A':
        temp = 4;
        break;
    case 'B':
        temp = 2;
        break;
    case 'C':
        temp = 3;
        break;
    case 'D':
        temp = 1;
        break;
    case 'F':
        temp = 0;
        break;
    }

    switch(str[1])
    {
    case '+':
        temp +=0.3;
        break;
    case '-':
        temp -=0.3;
        break;   
    }
    printf("%.1lf", temp);
    return 0;
}
