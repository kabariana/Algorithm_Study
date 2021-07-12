// TRIE?
#include <bits/stdc++.h> 

struct Node{
    std::map<std::string, Node> child;
};

void insertNode(Node& root, std::vector<std::string> v, int index)
{
    if(index == v.size())
        return;
    if(!root.child.count(v[index]))
        root.child[v[index]] = Node();

    // 재귀
    insertNode(root.child[v[index]], v, index + 1);
}

void pop(Node& root, int d = 0)
{
    for(auto i : root.child)
    {
        for(int j = 0; j < d; j++)
            std::cout << "--"; //깊이만큼 -- 출력
        std::cout << i.first << '\n'; // 문자열 출력

        // 깊이 순으로 들어감
        pop(i.second, d + 1);
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    Node head;

    int N;
    std::cin >> N;

    for(int i = 0; i<N; i++)
    {
        int k;
        std::vector<std::string> strV;
        
        std::cin >> k;
        for(int i = 0; i<k; i++)
        {
            std::string tmp;
            std::cin >> tmp;
            strV.push_back(tmp);
        }
        insertNode(head, strV, 0);
    }
    pop(head);
    return 0;
}