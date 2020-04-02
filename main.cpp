#include <iostream>
#include <bits/stdc++.h>
#include <RedBlackTree.h>
#include <chrono>
#include <AVLTree.h>
#include <PrefixTree.h>

int main() {
    auto *myTrie = new Trie();

    myTrie->insertString("akhil");
    myTrie->insertString("akhil");
    myTrie->insertString("akhilesh");
    myTrie->deleteString("akhil");
    myTrie->insertString("padma");
    myTrie->insertString("padmavathi");

    std::cout<<std::endl<<"Enter String : ";
    std::string s;
    std::cin>>s;
    auto result = myTrie->searchPattern(s);
    std::cout<<"No. of Patterns : "<<result.first;
    std::cout<<"\nNo. of Leafs : "<<result.second;
    return 0;
}