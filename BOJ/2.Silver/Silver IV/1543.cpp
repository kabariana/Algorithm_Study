#include <bits/stdc++.h>

int main(int argc, char* argv[])
{
    std::string doc;
    std::string input;

    std::getline(std::cin, doc);
    std::getline(std::cin, input);

    int index = 0;
    int cnt = 0;
    while(doc.find(input, index)!=std::string::npos && index<doc.size())
    {
        index = doc.find(input, index) + input.size();
        cnt++;
    }
    std::cout << cnt;
    return 0;
}