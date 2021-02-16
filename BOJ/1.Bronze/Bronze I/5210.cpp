#include <bits/stdc++.h>

bool func(std::string str, std::string key, int a, int b)
{
    if (a == key.length())
        return true;
    for (int i = b; i < str.length(); i++)
    {
        if (str[i] == key[a] || str[i] - 32 == key[a] || str[i] == key[a] - 32)
        {
            b = i;
            return func(str, key, a + 1, b + 1);
        }
    }
    return false;
}

int main(int argc, char* argv[])
{
    int tc;
    std::cin >> tc;
    for (int i = 1; i <= tc; i++)
    {
        int num;
        std::cin >> num;
        std::cin.ignore();
        std::string* arr = new std::string[num];

        for (int j = 0; j < num; j++)
        {
            std::string str;
            std::getline(std::cin, str);
            arr[j] = str;
        }

        std::string key;
        std::cin >> key;

        std::cout << "Data Set " << i << ":" << '\n';
        for (int k = 0; k < num; k++)
        {
            if (func(arr[k], key, 0, 0))
                std::cout << arr[k] << '\n';
        }
        delete[] arr;
    }
    return 0;
}