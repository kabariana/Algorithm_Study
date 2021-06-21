#include <bits/stdc++.h>

struct node{
    char left;
    char right;
};

struct node arr[26 + 1];

void preOrder(char root)
{
    if(root == '.')
        return;
    std::cout << root;
    preOrder(arr[root].left);
    preOrder(arr[root].right);
}

void inOrder(char root)
{
    if(root == '.')
        return;
    inOrder(arr[root].left);
    std::cout << root;
    inOrder(arr[root].right);
}

void postOrder(char root)
{
    if(root == '.')
        return;
    postOrder(arr[root].left);
    postOrder(arr[root].right);
    std::cout << root;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    char a, b, c;
    std::cin >> n;

    while(n--)
    {
        std::cin >> a >> b >> c;
        arr[a].left = b;
        arr[a].right = c;
    }

    preOrder('A');
    std::cout << '\n';
    inOrder('A');
    std::cout << '\n';
    postOrder('A');
    std::cout << '\n';

    return 0;
}