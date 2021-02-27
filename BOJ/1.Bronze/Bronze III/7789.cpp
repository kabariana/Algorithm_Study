#include <bits/stdc++.h>

bool func(int n)
{
    for(int i = 2; i < n; i++)
        if( (n % i) == 0)
            return false;
    return true;
} 

int main(int argc, char* argv[])
{
    int a, b;
    std::cin >> a >> b;
    std::string str1 = std::to_string(a);
    std::string str2 = std::to_string(b);
    b = std::stoi(str2+str1);

    if(func(a) && func(b))
        std::cout << "Yes";
    else
        std::cout << "No";
    return 0;
}