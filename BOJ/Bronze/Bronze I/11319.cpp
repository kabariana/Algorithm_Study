#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    std::cin.ignore();

    while(T--)
    {
        std::string str;
        int v_c = 0, c_c = 0;
        std::getline(std::cin, str);

        for(int i = 0; str[i]; i++)
        {
            if(str[i] != ' ')
            {
                if(str[i]=='a' || str[i] =='e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
                    v_c++;
                else if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
                    v_c++;
                else
                    c_c++;
            }
        }
        std::cout << c_c << ' ' << v_c <<'\n';
    }
    return 0;
}