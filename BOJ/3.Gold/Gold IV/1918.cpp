#include <bits/stdc++.h>

std::stack<std::string> num;
std::stack<char> oper;

int getPrior(char ch)
{
    if(ch == '+' || ch == '-')
        return 1;
    else if(ch == '*' || ch == '/')
        return 2;
    return 0;
}

void process()
{
    std::string a = num.top();
    num.pop();
    std::string b = num.top();
    num.pop();
    num.push(b + a + oper.top());
    oper.pop();
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::string exp;
    std::cin >> exp;

    for(int i = 0; i < exp.size(); i++)
    {
        char ch = exp[i];
        if('A' <= ch && ch <= 'Z')
            num.push(std::string(1, ch));
        else if(ch == '(')
            oper.push(ch);
        else if(ch == ')')
        {
            while(oper.top() != '(')
                process();
            oper.pop();
        }
        else
        {
            if(!oper.empty())
            {
                while(!oper.empty() && getPrior(ch) <= getPrior(oper.top()))
                    process();
            }
            oper.push(ch);
        }
    }
    while(!oper.empty())
        process();
    std::cout << num.top() <<'\n';
    return 0;
}