#include <bits/stdc++.h>

int main()
{
    int P;
    std::cin >> P;

    while(P--)
    {
        int arr[8] = {0, };
        std::string str;
        std::cin >> str;

        for(int i = 0; str[i]; i++)
        {
            std::string temp = str.substr(i, 3);
            if(temp == "TTT")
                arr[0]++;
            else if(temp == "TTH")
                arr[1]++;
            else if(temp == "THT")
                arr[2]++;
            else if(temp == "THH")
                arr[3]++;
            else if(temp == "HTT")
                arr[4]++;
            else if(temp == "HTH")
                arr[5]++;
            else if(temp == "HHT")
                arr[6]++;
            else if(temp == "HHH")
                arr[7]++;
        }

        for(int i = 0; i<8; i++)
            std::cout << arr[i] << ' ';
        std::cout << '\n';
    }
    return 0;
}