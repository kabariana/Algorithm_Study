#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string str;
    while(std::getline(std::cin, str))
    {
        int arr[4] = {0, };
        for(int i = 0; str[i]; i++)
        {
            if(str[i]>='a' && str[i]<='z')
                arr[0]++;
            else if(str[i]>='A' && str[i]<='Z')
                arr[1]++;
            else if(str[i]>='0' && str[i]<='9')
                arr[2]++;
            else if(str[i]==' ')
                arr[3]++;
        }
        for(int i = 0; i<4; i++)
            std::cout << arr[i] << ' ';
        std::cout << '\n';
    }
    return 0;
}