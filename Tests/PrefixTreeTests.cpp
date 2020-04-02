#include "gtest/gtest.h"
#include <bits/stdc++.h>
#include <PrefixTree.h>

TEST(PrefixTreeInsertTests, duplicateInsert){
    auto *myTrie = new Trie();

    myTrie->insertString("akhil");
    myTrie->insertString("akhil"); //Duplicate
    myTrie->insertString("akhilesh");
    myTrie->insertString("padma");
    myTrie->insertString("padmavathi");

    auto result = myTrie->searchPattern("akhil");
    std::cout<<std::endl<<result.first<<" "<<result.second<<std::endl;
    EXPECT_EQ(result.first, 2);
    EXPECT_EQ(result.second, 1);
}

TEST(PrefixTreeDeleteTests, deleteString){
    auto *myTrie = new Trie();

    myTrie->insertString("akhil");
    myTrie->insertString("akhil"); //Duplicate
    myTrie->insertString("akhilesh");
    myTrie->deleteString("akhilesh");
    myTrie->insertString("padma");
    myTrie->insertString("padmavathi");

    auto result = myTrie->searchPattern("akhil");
    std::cout<<std::endl<<result.first<<" "<<result.second<<std::endl;
    EXPECT_EQ(result.first, 1);
    EXPECT_EQ(result.second, 1);
}

TEST(PrefixTreeSearchTests, notFound){
    auto *myTrie = new Trie();

    myTrie->insertString("akhil");
    myTrie->insertString("akhil"); //Duplicate
    myTrie->insertString("akhilesh");
    myTrie->deleteString("akhilesh");
    myTrie->insertString("padma");
    myTrie->insertString("padmavathi");

    auto result = myTrie->searchPattern("akzz");
    std::cout<<std::endl<<result.first<<" "<<result.second<<std::endl;
    EXPECT_EQ(result.first, 0);
    EXPECT_EQ(result.second, 0);
}