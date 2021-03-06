#include <bits/stdc++.h>

int f(int a, char op, int b)
{
    if (op == '+')
        return a + b;
    else if (op == '-')
        return a - b;
    else if (op == '*')
        return a * b;
    else
        return a / b;
}

int main(int argc, char* argv[])
{
    int a, b, c;
    char op1, op2;

    std::cin >> a >> op1 >> b >> op2 >> c;
    int r1 = f(f(a, op1, b), op2, c);
    int r2 = f(a, op1, f(b, op2, c));
    std::cout << std::min(r1, r2) << '\n' << std::max(r1, r2);
    return 0;
}