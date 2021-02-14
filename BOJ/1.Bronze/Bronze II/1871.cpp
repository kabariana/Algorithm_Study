#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int n;
    std::cin >> n;
    std::cin.ignore();

    while(n--)
    {
        std::string str;
        std::cin >> str;
        std::string alphabet = str.substr(0, 3);
        std::string number = str.substr(4, 4);

        int temp = 1, sum = 0;
        for(int i = 2; i>=0; i--)
        {
            sum+=(alphabet[i]-'A')*temp;
            temp*=26;
        }

        if(std::abs(sum- std::stoi(number)) <=100)
            std::cout << "nice\n";
        else
            std::cout << "not nice\n";
    }
    return 0;
}