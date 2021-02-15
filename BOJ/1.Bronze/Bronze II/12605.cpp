#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int t;
    std::cin >> t;
    std::cin.ignore();

    for(int i = 1; i<=t; i++)
    {
        std::string str;
        std::getline(std::cin, str);

        char* arr = new char[26];
        std::strcpy(arr, str.c_str());

        std::vector<std::string> v;
        char* tok = std::strtok(arr, " ");
        while(tok!=nullptr)
        {
            v.push_back(std::string(tok));
            tok = std::strtok(nullptr, " ");
        }

        std::reverse(v.begin(), v.end());

        std::cout << "Case #" << i << ": ";
        for(int i = 0; i<v.size(); i++)
            std::cout << v[i] << ' ';
        std::cout << '\n';
        delete[] arr;
    }
    return 0;
}