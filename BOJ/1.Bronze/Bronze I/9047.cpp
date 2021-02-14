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

        int cnt = 0;
        while(true)
        {
            if(str == "6174")
            {
                std::cout << cnt <<'\n';
                break;
            }
            std::sort(str.begin(), str.end(), std::greater<char>());
            int a = std::stoi(str);
            std::sort(str.begin(), str.end(), std::less<char>());
            int b = std::stoi(str);
            str = std::to_string(a-b);

            if(str.size()!=4){
                if(str.size() == 1)
                    str+="000";
                if(str.size() == 2)
                    str+="00";
                if(str.size() == 3)
                    str+="0";
            }
            cnt++;
        }
    }
    return 0;
}