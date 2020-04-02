#include "gtest/gtest.h"
#include <iostream>
#include <random>
#include <RedBlackTree.h>
#include <chrono>

//use std::endl in every test case after every cout statement if not they will not pass

TEST(RBTreeInsertTests, case_1_1){
    //Case 1.1
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {3, 1};
    int expectedOutput[] = {1, 3};
    char expectedColor[] = {'R', 'B'};
    bool color = true, order = true, property;
    int N = 2;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeInsertTests, case_1_2){
    //Case 1.2
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {1, 3};
    int expectedOutput[] = {1, 3};
    char expectedColor[] = {'B', 'R'};
    bool color = true, order = true, property;
    int N = 2;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeInsertTests, case_2_1_1){
    //Case 2.1.1
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {8, 4, 15, 1};
    int expectedOutput[] = {1, 4, 8, 15};
    char expectedColor[] = {'R', 'B', 'B', 'B'};
    bool color = true, order = true, property;
    int N = 4;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeInsertTests, case_2_1_2){
    //Case 2.1.2
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {8, 4, 15, 5};
    int expectedOutput[] = {4, 5, 8, 15};
    char expectedColor[] = {'B', 'R', 'B', 'B'};
    bool color = true, order = true, property;
    int N = 4;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeInsertTests, case_2_1_3){
    //Case 2.1.3
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {8, 4, 15, 14};
    int expectedOutput[] = {4, 8, 14, 15};
    char expectedColor[] = {'B', 'B', 'R', 'B'};
    bool color = true, order = true, property;
    int N = 4;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeInsertTests, case_2_1_4){
    //Case 2.1.4
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {8, 4, 15, 17};
    int expectedOutput[] = {4, 8, 15, 17};
    char expectedColor[] = {'B', 'B', 'B', 'R'};
    bool color = true, order = true, property;
    int N = 4;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeInsertTests, case_2_2_1){
    //Case 2.2.1
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {8, 4, 15, 2, 6, 1};
    int expectedOutput[] = {1, 2, 4, 6, 8, 15};
    char expectedColor[] = {'R', 'B', 'R', 'B', 'B', 'B'};
    bool color = true, order = true, property;
    int N = 6;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeInsertTests, case_2_2_2){
    //Case 2.2.2
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {8, 4, 15, 2, 6, 3};
    int expectedOutput[] = {2, 3, 4, 6, 8, 15};
    char expectedColor[] = {'B', 'R', 'R', 'B', 'B', 'B'};
    bool color = true, order = true, property;
    int N = 6;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeInsertTests, case_2_2_3){
    //Case 2.2.3
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {8, 4, 15, 2, 6, 5};
    int expectedOutput[] = {2, 4, 5, 6, 8, 15};
    char expectedColor[] = {'B', 'R', 'R', 'B', 'B', 'B'};
    bool color = true, order = true, property;
    int N = 6;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeInsertTests, case_2_2_4){
    //Case 2.2.4
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {8, 4, 15, 2, 6, 7};
    int expectedOutput[] = {2, 4, 6, 7, 8, 15};
    char expectedColor[] = {'B', 'R', 'B', 'R', 'B', 'B'};
    bool color = true, order = true, property;
    int N = 6;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeInsertTests, case_3_1_1){
    //Case 3.1.1
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {9, 7, 15, 5, 3};
    int expectedOutput[] = {3, 5, 7, 9, 15};
    char expectedColor[] = {'R', 'B', 'R', 'B', 'B'};
    bool color = true, order = true, property;
    int N = 5;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeInsertTests, case_3_1_2){
    //Case 3.1.2
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {9, 7, 15, 5, 3, 2, 1, 0};
    int expectedOutput[] = {0, 1, 2, 3, 5, 7, 9, 15};
    char expectedColor[] = {'R', 'B', 'R', 'B', 'B', 'B', 'R', 'B'};
    bool color = true, order = true, property;
    int N = 8;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeInsertTests, case_3_2_1){
    //Case 3.2.1
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {15, 7, 25, 3, 4};
    int expectedOutput[] = {3, 4, 7, 15, 25};
    char expectedColor[] = {'R', 'B', 'R', 'B', 'B'};
    bool color = true, order = true, property;
    int N = 5;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeInsertTests, case_3_2_2){
    //Case 3.2.2
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {15, 7, 25, 3, 4, 8, 9, 10};
    int expectedOutput[] = {3, 4, 7, 8, 9, 10, 15, 25};
    char expectedColor[] = {'B', 'R', 'B', 'B', 'B', 'R', 'R', 'B'};
    bool color = true, order = true, property;
    int N = 8;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeInsertTests, case_3_3_1){
    //Case 3.3.1
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {15, 7, 25, 27, 26};
    int expectedOutput[] = {7, 15, 25, 26, 27};
    char expectedColor[] = {'B', 'B', 'R', 'B', 'R'};
    bool color = true, order = true, property;
    int N = 5;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeInsertTests, case_3_3_2){
    //Case 3.3.2
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {15, 7, 25, 30, 29, 24, 23, 22};
    int expectedOutput[] = {7, 15, 22, 23, 24, 25, 29, 30};
    char expectedColor[] = {'B', 'R', 'R', 'B', 'B', 'B', 'R', 'B'};
    bool color = true, order = true, property;
    int N = 8;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeInsertTests, case_3_4_1){
    //Case 3.4.1
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {3, 1, 5, 7, 9};
    int expectedOutput[] = {1, 3, 5, 7, 9};
    char expectedColor[] = {'B', 'B', 'R', 'B', 'R'};
    bool color = true, order = true, property;
    int N = 5;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeInsertTests, case_3_4_2){
    //Case 3.4.2
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {3, 1, 5, 7, 9, 11, 8, 13};
    int expectedOutput[] = {1, 3, 5, 7, 8, 9, 11, 13};
    char expectedColor[] = {'B', 'R', 'B', 'B', 'B', 'R', 'B', 'R'};
    bool color = true, order = true, property;
    int N = 8;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeInsertTests, randomInsert){
    //random
    auto *myTree = new RedBlackTree<int, int>();
    int N = 100000;
    int *obtained = new int[N]();
    char *obtainedColor = new char[N]();

    bool property;

    for(int i = 0; i < N; i++) myTree->insertNode(std::rand() + 1, 0);
    property = myTree->checkRedBlackTreeProperties();

    myTree->getInorder(obtained, obtainedColor);
    std::cout<<"Property : "<<property<<std::endl;
    for(int i = 1; i < N; i++) {
        if(obtained[i] == 0) continue;
        EXPECT_EQ(obtained[i - 1] < obtained[i], true);
    }
    delete myTree;
    EXPECT_EQ(property, true);
}

TEST(RBTreeInsertTests, performance){
    auto *myTree1 = new RedBlackTree<int, int>();
    auto *myTree2 = new RedBlackTree<int, int>();
    auto *myTree3 = new RedBlackTree<int, int>();
    auto *myTree4 = new RedBlackTree<int, int>();
    auto *myTree5 = new RedBlackTree<int, int>();
    int N = 100000;

    using milli = std::chrono::milliseconds;
    //Pass 1
    auto start = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < N; i++) myTree1->insertNode(i, 0);
    auto finish = std::chrono::high_resolution_clock::now();

    std::cout << "insertNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 2
    start = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < N; i++) myTree2->insertNode(i, 0);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "insertNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 3
    start = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < N; i++) myTree3->insertNode(i, 0);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "insertNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 4
    start = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < N; i++) myTree4->insertNode(i, 0);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "insertNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 5
    start = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < N; i++) myTree5->insertNode(i, 0);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "insertNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;
}

TEST(RBTreeDeleteTests, case_1){
    //Case 1
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {1};
    int expectedOutput[] = {0};
    char expectedColor[] = {};
    bool color = true, order = true, property;
    int N = 1;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->deleteNode(1);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeDeleteTests, case_2_2){
    //Case 2.2
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int expectedOutput[] = {1, 2, 3, 4, 6, 7, 8, 9};
    char expectedColor[] = {'B', 'B', 'B', 'B', 'B', 'R', 'B', 'B'};
    bool color = true, order = true, property;
    int N = 8;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->deleteNode(10);
    myTree->deleteNode(5);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeDeleteTests, case_2_4){
    //Case 2.4
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int expectedOutput[] = {2, 3, 4, 5, 7, 8, 9, 10};
    char expectedColor[] = {'B', 'B', 'R', 'B', 'B', 'B', 'B', 'B'};
    bool color = true, order = true, property;
    int N = 8;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->deleteNode(1);
    myTree->deleteNode(6);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeDeleteTests, case_3_1){
    //Case 3.1
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {10, 20, 30, 40};
    int expectedOutput[] = {20, 30};
    char expectedColor[] = {'B', 'R'};
    bool color = true, order = true, property;
    int N = 2;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->deleteNode(40);
    myTree->deleteNode(10);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeDeleteTests, case_3_3){
    //Case 3.3
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {10, 20, 30, 40};
    int expectedOutput[] = {10, 20};
    char expectedColor[] = {'R', 'B'};
    bool color = true, order = true, property;
    int N = 2;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->deleteNode(40);
    myTree->deleteNode(30);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeDeleteTests, case_4_1){
    //Case 4.1
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {10, 20, 30, 40, 50, 60};
    int expectedOutput[] = {10, 20, 40, 50};
    char expectedColor[] = {'B', 'B', 'B', 'R'};
    bool color = true, order = true, property;
    int N = 4;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->deleteNode(60);
    myTree->deleteNode(30);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeDeleteTests, case_4_3){
    //Case 4.3
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {60, 50, 40, 30, 20, 10};
    int expectedOutput[] = {20, 30, 50, 60};
    char expectedColor[] = {'R', 'B', 'B', 'B'};
    bool color = true, order = true, property;
    int N = 4;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->deleteNode(10);
    myTree->deleteNode(40);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeDeleteTests, case_5_1){
    //Case 5.2
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int expectedOutput[] = {1, 2, 3, 4, 6, 7, 8};
    char expectedColor[] = {'B', 'B', 'B', 'B', 'B', 'B', 'B'};
    bool color = true, order = true, property;
    int N = 7;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->deleteNode(10);
    myTree->deleteNode(9);
    myTree->deleteNode(5);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeDeleteTests, case_5_3){
    //Case 5.3
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int expectedOutput[] = {10, 15, 20, 40, 50, 60, 80};
    char expectedColor[] = {'B', 'B', 'B', 'B', 'B', 'B', 'B'};
    bool color = true, order = true, property;
    int N = 7;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->deleteNode(100);
    myTree->deleteNode(90);
    myTree->deleteNode(70);
    myTree->insertNode(15, 0);
    myTree->deleteNode(30);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeDeleteTests, case_6_1){
    //Case 6.1
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {1, 2, 3, 4};
    int expectedOutput[] = {2, 3, 4};
    char expectedColor[] = {'B', 'B', 'B'};
    bool color = true, order = true, property;
    int N = 3;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->deleteNode(1);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeDeleteTests, case_6_2){
    //Case 6.2
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {1, 3, 5, 4, 7};
    int expectedOutput[] = {3, 4, 5, 7};
    char expectedColor[] = {'B', 'R', 'B', 'B'};
    bool color = true, order = true, property;
    int N = 4;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->deleteNode(1);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeDeleteTests, case_6_3){
    //Case 6.3
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {4, 3, 2, 1};
    int expectedOutput[] = {1, 2, 3};
    char expectedColor[] = {'B', 'B', 'B'};
    bool color = true, order = true, property;
    int N = 3;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->deleteNode(4);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeDeleteTests, case_6_4){
    //Case 6.4
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {7, 4, 5, 3, 1};
    int expectedOutput[] = {1, 3, 4, 5};
    char expectedColor[] = {'B', 'B', 'R', 'B'};
    bool color = true, order = true, property;
    int N = 4;
    int *obtainedOutput = new int[N]();
    char *obtainedColor = new char[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->deleteNode(7);
    myTree->getInorder(obtainedOutput, obtainedColor);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedOutput[i]<<" ";
        if(obtainedOutput[i] != expectedOutput[i]){
            order = false;
            break;
        }
    }
    std::cout<<std::endl;
    for(int i = 0; i < N; i++){
        std::cout<<obtainedColor[i]<<" ";
        if(obtainedColor[i] != expectedColor[i]){
            color = false;
            break;
        }
    }
    std::cout<<std::endl;
    std::cout<<property<<std::endl;
    delete []obtainedColor;
    delete []obtainedOutput;
    delete myTree;

    EXPECT_EQ(order, true);
    EXPECT_EQ(color, true);
    EXPECT_EQ(property, true);
}

TEST(RBTreeDeleteTests, randomDelete){
    //random
    auto *myTree = new RedBlackTree<int, int>();
    bool property = false;

    for(int i = 0; i < 100000; i++) myTree->insertNode(std::rand(), 0);
    property = myTree->checkRedBlackTreeProperties();
    std::cout<<"Property: "<<property<<std::endl;

    EXPECT_EQ(property, true);
    property = false;

    for(int i = 0; i < 100000; i++) myTree->deleteNode(std::rand());

    property = myTree->checkRedBlackTreeProperties();
    std::cout<<"Property: "<<property<<std::endl;

    delete myTree;
    EXPECT_EQ(property, true);
}

TEST(RBTreeDeleteTests, performance){

    auto *myTree1 = new RedBlackTree<int, int>();
    auto *myTree2 = new RedBlackTree<int, int>();
    auto *myTree3 = new RedBlackTree<int, int>();
    auto *myTree4 = new RedBlackTree<int, int>();
    auto *myTree5 = new RedBlackTree<int, int>();
    int N = 100000;
    for(int i = 0; i < N; i++){
        myTree1->insertNode(i, 0);
        myTree2->insertNode(i, 0);
        myTree3->insertNode(i, 0);
        myTree4->insertNode(i, 0);
        myTree5->insertNode(i, 0);
    }
    using milli = std::chrono::milliseconds;
    //Pass 1
    auto start = std::chrono::high_resolution_clock::now();
    for(int i = N; i > 0; i--) myTree1->deleteNode(i);
    auto finish = std::chrono::high_resolution_clock::now();

    std::cout << "deleteNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 2
    start = std::chrono::high_resolution_clock::now();
    for(int i = N; i > 0; i--) myTree2->deleteNode(i);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "deleteNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 3
    start = std::chrono::high_resolution_clock::now();
    for(int i = N; i > 0; i--) myTree3->deleteNode(i);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "deleteNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 4
    start = std::chrono::high_resolution_clock::now();
    for(int i = N; i > 0; i--) myTree4->deleteNode(i);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "deleteNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 5
    start = std::chrono::high_resolution_clock::now();
    for(int i = N; i > 0; i--) myTree5->deleteNode(i);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "deleteNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;
}

TEST(RBTreeSearchTests, Found){
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {7, 4, 5, 3, 1};
    for(auto i: data) myTree->insertNode(i, 0);
    RBNode <int ,int> * node = myTree->searchNode(1);
    std::cout<<node->getKey()<<std::endl;
    EXPECT_EQ(node->getKey() == 1, true);
}

TEST(RBTreeSearchTests, NotFound){
    auto *myTree = new RedBlackTree<int, int>();
    int data[] = {7, 4, 5, 3, 1};
    for(auto i: data) myTree->insertNode(i, 0);
    RBNode <int ,int> * node = myTree->searchNode(0);
    std::cout<<node<<std::endl;
    EXPECT_EQ(node == NULL, true);
}

TEST(RBTreeSearchTests, performance){

    auto *myTree1 = new RedBlackTree<int, int>();
    auto *myTree2 = new RedBlackTree<int, int>();
    auto *myTree3 = new RedBlackTree<int, int>();
    auto *myTree4 = new RedBlackTree<int, int>();
    auto *myTree5 = new RedBlackTree<int, int>();

    int N = 100000;

    for(int i = 0; i < N; i++){
        myTree1->insertNode(i, 0);
        myTree2->insertNode(i, 0);
        myTree3->insertNode(i, 0);
        myTree4->insertNode(i, 0);
        myTree5->insertNode(i, 0);
    }
    for(int i = N/2; i > 0; i--){
        myTree1->deleteNode(i);
        myTree2->deleteNode(i);
        myTree3->deleteNode(i);
        myTree4->deleteNode(i);
        myTree5->deleteNode(i);
    }
    for(int i = N/2; i > 0; i--){
        myTree1->insertNode(std::rand(), 0);
        myTree2->insertNode(std::rand(), 0);
        myTree3->insertNode(std::rand(), 0);
        myTree4->insertNode(std::rand(), 0);
        myTree5->insertNode(std::rand(), 0);
    }

    using milli = std::chrono::milliseconds;
    //Pass 1
    auto start = std::chrono::high_resolution_clock::now();
    for(int i = N; i > 0; i--) myTree1->searchNode(i);
    auto finish = std::chrono::high_resolution_clock::now();

    std::cout << "searchNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 2
    start = std::chrono::high_resolution_clock::now();
    for(int i = N; i > 0; i--) myTree1->searchNode(i);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "searchNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 3
    start = std::chrono::high_resolution_clock::now();
    for(int i = N; i > 0; i--) myTree1->searchNode(i);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "searchNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 4
    start = std::chrono::high_resolution_clock::now();
    for(int i = N; i > 0; i--) myTree1->searchNode(i);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "searchNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 5
    start = std::chrono::high_resolution_clock::now();
    for(int i = N; i > 0; i--) myTree1->searchNode(i);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "searchNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;
}