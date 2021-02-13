#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    int arr[8] = { 0, };
    std::string str;
    std::cin >> str;

    for (int i = 0; str[i]; i++)
    {
        switch (str[i])
        {
        case '1':
        case 'Q':
        case 'A':
        case 'Z':
            arr[0]++;
            break;
        case '2':
        case 'W':
        case 'S':
        case 'X':
            arr[1]++;
            break;
        case '3':
        case 'E':
        case 'D':
        case 'C':
            arr[2]++;
            break;
        case '4':
        case '5':
        case 'R':
        case 'T':
        case 'F':
        case 'G':
        case 'V':
        case 'B':
            arr[3]++;
            break;
        case '6':
        case '7':
        case 'Y':
        case 'U':
        case 'H':
        case 'J':
        case 'N':
        case 'M':
            arr[4]++;
            break;
        case '8':
        case 'I':
        case 'K':
        case ',':
            arr[5]++;
            break;
        case '9':
        case 'O':
        case 'L':
        case '.':
            arr[6]++;
            break;
        case '0':
        case 'P':
        case ';':
        case '/':
        case '-':
        case '[':
        case '\'':
        case ']':
        case '=':
            arr[7]++;
            break;
        }
    }
    for (int i = 0; i < 8; i++)
        std::cout << arr[i] << '\n';
    return 0;
}