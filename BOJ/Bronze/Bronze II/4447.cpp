#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int T;
    std::cin >> T;
    std::cin.ignore();
    while (T--)
    {
        int arr[2] = { 0, };
        std::memset(arr, 0, 2);
        std::string str, result;
        std::getline(std::cin, str);

        for (int i = 0; str[i]; i++)
        {
            if (str[i] == 'g' || str[i] == 'G')
                arr[0]++;
            else if (str[i] == 'b' || str[i] == 'B')
                arr[1]++;
        }
        if (arr[0] > arr[1])
            result = "GOOD";
        else if (arr[0] < arr[1])
            result = "BAD";
        else
            result = "NEUTRAL";

        std::cout << str << " is " << result << '\n';
    }
}