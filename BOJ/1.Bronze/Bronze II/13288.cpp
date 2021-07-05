#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string newAlphabet[26] = { "@", "8", "(", "|)", "3", "#", "6", "[-]", "|", "_|", "|<", "1", "[]\\/[]", "[]\\[]", "0", "|D", "(,)", "|Z", "$", "']['", "|_|", "\\/", "\\/\\/", "}{", "`/", "2" };
    std::string input;
    
    std::getline(std::cin, input);
    for(int i = 0; i<input.length(); i++)
    {
        if(input[i]>='A' && input[i] <= 'Z')
            std::cout << newAlphabet[input[i]-'A'];
        else if(input[i]>='a' && input[i] <= 'z')
            std::cout << newAlphabet[input[i]-'a'];
        else
            std::cout << input[i];
    }
    return 0;
}