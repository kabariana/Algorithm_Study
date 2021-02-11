#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;

    for(int i=1; i<=T; i++)
    {
        std::cout << "Case " << i << ": ";

        for(int j = 0; j<5; j++)
        {
            std::string str;
            std::cin >> str;

            if(str == ".-")
                std::cout << "A";
            else if(str == "-...")
                std::cout << "B";
            else if(str == "-.-.")
                std::cout << "C";
            else if(str == "-..")
                std::cout << "D";
            else if(str == ".")
                std::cout << "E";
            else if(str == "..-.")
                std::cout << "F";
            else if(str == "--.")
                std::cout << "G";
            else if(str == "....")
                std::cout << "H";
            else if(str == "..")
                std::cout << "I";
            else if(str == ".---")
                std::cout << "J";
            else if(str == "-.-")
                std::cout << "K";
            else if(str == ".-..")
                std::cout << "L";
            else if(str == "--")
                std::cout << "M";
            else if(str == "-.")
                std::cout << "N";
            else if(str == "---")
                std::cout << "O";
            else if(str == ".--.")
                std::cout << "P";
            else if(str == "--.-")
                std::cout << "Q";
            else if(str == ".-.")
                std::cout << "R";
            else if(str == "...")
                std::cout << "S";
            else if(str == "-")
                std::cout << "T";
            else if(str == "..-")
                std::cout << "U";
            else if(str == "...-")
                std::cout << "V";
            else if(str == ".--")
                std::cout << "W";
            else if(str == "-..-")
                std::cout << "X";
            else if(str == "-.--")
                std::cout << "Y";
            else if(str == "--..")
                std::cout << "Z";
        }
        std::cout << '\n';
    }
    return 0;
}