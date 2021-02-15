#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    while(true)
    {
        std::string str;
        std::getline(std::cin, str);

        if(str == "EOI")
            break;

        for(int i = 0; str[i]; i++)
            str[i] = std::tolower(str[i]);

        bool flag = false;

        for(int i = 0; i+3<str.length(); i++)
            if(str.substr(i, 4) == "nemo")
                flag = true;

        if(flag)
            std::cout << "Found\n";
        else
            std::cout << "Missing\n"; 
    }
    return 0;
}