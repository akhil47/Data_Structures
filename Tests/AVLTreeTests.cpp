#include "gtest/gtest.h"
#include <bits/stdc++.h>
#include <AVLTree.h>
//use std::endl in every test case after every cout statement if not they will not pass
TEST(AVLTreeInsertTests, LLCase){
    //LLCase
    auto *myTree = new AVLTree();
    int data[] = {5, 7, 4, 3, 2};
    int expectedOutput[] = {2, 3, 4, 5, 7};
    int expectedBal[] = {0, 0, 0, 0, -1};
    bool bal = true, order = true;
    int N = 5;
    int *obtainedOutput = new int[N]();
    int *obtainedBal = new int[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput);
    myTree->isBalanced(obtainedBal);
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
        std::cout<<obtainedBal[i]<<" ";
        if(obtainedBal[i] != expectedBal[i]){
            bal = false;
            break;
        }
    }
    std::cout<<std::endl;

    delete []obtainedBal;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(bal, true);
}

TEST(AVLTreeInsertTests, LRCase){
    //LRCase
    auto *myTree = new AVLTree();
    int data[] = {6, 7, 5, 3, 4};
    int expectedOutput[] = {3, 4, 5, 6, 7};
    int expectedBal[] = {0, 0, 0, 0, -1};
    bool bal = true, order = true;
    int N = 5;
    int *obtainedOutput = new int[N]();
    int *obtainedBal = new int[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput);
    myTree->isBalanced(obtainedBal);
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
        std::cout<<obtainedBal[i]<<" ";
        if(obtainedBal[i] != expectedBal[i]){
            bal = false;
            break;
        }
    }
    std::cout<<std::endl;

    delete []obtainedBal;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(bal, true);
}

TEST(AVLTreeInsertTests, RRCase){
    //LRCase
    auto *myTree = new AVLTree();
    int data[] = {5, 4, 7, 8, 9};
    int expectedOutput[] = {4, 5, 7, 8, 9};
    int expectedBal[] = {0, 0, 0, 0, 1};
    bool bal = true, order = true;
    int N = 5;
    int *obtainedOutput = new int[N]();
    int *obtainedBal = new int[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput);
    myTree->isBalanced(obtainedBal);
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
        std::cout<<obtainedBal[i]<<" ";
        if(obtainedBal[i] != expectedBal[i]){
            bal = false;
            break;
        }
    }
    std::cout<<std::endl;

    delete []obtainedBal;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(bal, true);
}

TEST(AVLTreeInsertTests, RLCase){
    //LRCase
    auto *myTree = new AVLTree();
    int data[] = {6, 5, 8, 10, 9};
    int expectedOutput[] = {5, 6, 8, 9, 10};
    int expectedBal[] = {0, 0, 0, 0, 1};
    bool bal = true, order = true;
    int N = 5;
    int *obtainedOutput = new int[N]();
    int *obtainedBal = new int[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->getInorder(obtainedOutput);
    myTree->isBalanced(obtainedBal);
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
        std::cout<<obtainedBal[i]<<" ";
        if(obtainedBal[i] != expectedBal[i]){
            bal = false;
            break;
        }
    }
    std::cout<<std::endl;

    delete []obtainedBal;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(bal, true);
}

TEST(AVLTreeInsertTests, randomInsert){
    AVLTree *myTree = new AVLTree();
    int N = 100000;
    int *obtained = new int[N]();
    int *bal = new int[N]();
    for(int i = 0; i < N; i++) myTree->insertNode(std::rand(), 0);
    myTree->getInorder(obtained);

    for(int i = 1; i < N; i++) {
        if(obtained[i] == 0) continue;
        EXPECT_EQ(obtained[i - 1] < obtained[i], true);
    }
    EXPECT_EQ(myTree->isBalanced(bal),true);
}

TEST(AVLTreeInsertTests, performance){
    auto *myTree1 = new AVLTree();
    auto *myTree2 = new AVLTree();
    auto *myTree3 = new AVLTree();
    auto *myTree4 = new AVLTree();
    auto *myTree5 = new AVLTree();
    int N = 100000;

    using milli = std::chrono::milliseconds;
    std::cout<<std::endl;
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

TEST(AVLTreeDeleteTests, LLCase){
    //LLCase
    auto *myTree = new AVLTree();
    int data[] = {5, 7, 4, 3, 2};
    int expectedOutput[] = {2, 3, 4, 5};
    int expectedBal[] = {0, 0, -1, 1};
    bool bal = true, order = true;
    int N = 4;
    int *obtainedOutput = new int[N]();
    int *obtainedBal = new int[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->deleteNode(7);
    myTree->getInorder(obtainedOutput);
    myTree->isBalanced(obtainedBal);
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
        std::cout<<obtainedBal[i]<<" ";
        if(obtainedBal[i] != expectedBal[i]){
            bal = false;
            break;
        }
    }
    std::cout<<std::endl;

    delete []obtainedBal;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(bal, true);
}

TEST(AVLTreeDeleteTests, LRCase){
    //LLCase
    auto *myTree = new AVLTree();
    int data[] = {5, 7, 3, 4};
    int expectedOutput[] = {3, 4, 5};
    int expectedBal[] = {0, 0, 0};
    bool bal = true, order = true;
    int N = 3;
    int *obtainedOutput = new int[N]();
    int *obtainedBal = new int[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->deleteNode(7);
    myTree->getInorder(obtainedOutput);
    myTree->isBalanced(obtainedBal);
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
        std::cout<<obtainedBal[i]<<" ";
        if(obtainedBal[i] != expectedBal[i]){
            bal = false;
            break;
        }
    }
    std::cout<<std::endl;

    delete []obtainedBal;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(bal, true);
}

TEST(AVLTreeDeleteTests, RRCase){
    //RRCase
    auto *myTree = new AVLTree();
    int data[] = {5, 4, 7, 8, 9};
    int expectedOutput[] = {5, 7, 8, 9};
    int expectedBal[] = {0, 1, 0, -1};
    bool bal = true, order = true;
    int N = 4;
    int *obtainedOutput = new int[N]();
    int *obtainedBal = new int[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->deleteNode(4);
    myTree->getInorder(obtainedOutput);
    myTree->isBalanced(obtainedBal);
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
        std::cout<<obtainedBal[i]<<" ";
        if(obtainedBal[i] != expectedBal[i]){
            bal = false;
            break;
        }
    }
    std::cout<<std::endl;

    delete []obtainedBal;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(bal, true);
}

TEST(AVLTreeDeleteTests, RLCase){
    //LLCase
    auto *myTree = new AVLTree();
    int data[] = {5, 3, 7, 6};
    int expectedOutput[] = {5, 6, 7};
    int expectedBal[] = {0, 0, 0};
    bool bal = true, order = true;
    int N = 3;
    int *obtainedOutput = new int[N]();
    int *obtainedBal = new int[N]();

    for(auto i: data) myTree->insertNode(i, 0);
    myTree->deleteNode(3);
    myTree->getInorder(obtainedOutput);
    myTree->isBalanced(obtainedBal);
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
        std::cout<<obtainedBal[i]<<" ";
        if(obtainedBal[i] != expectedBal[i]){
            bal = false;
            break;
        }
    }
    std::cout<<std::endl;

    delete []obtainedBal;
    delete []obtainedOutput;
    delete myTree;
    EXPECT_EQ(order, true);
    EXPECT_EQ(bal, true);
}

TEST(AVLTreeDeleteTests, randomDelete){
    AVLTree *myTree = new AVLTree();
    int N = 100000;
    int *bal = new int[N]();
    for(int i = 0; i < N; i++) myTree->insertNode(std::rand(), 0);
    EXPECT_EQ(myTree->isBalanced(bal),true);

    for(int i = 0; i < N; i++) myTree->deleteNode(std::rand());

    EXPECT_EQ(myTree->isBalanced(bal),true);
}

TEST(AVLTreeDeleteTests, performance){
    auto *myTree1 = new AVLTree();
    auto *myTree2 = new AVLTree();
    auto *myTree3 = new AVLTree();
    auto *myTree4 = new AVLTree();
    auto *myTree5 = new AVLTree();
    int N = 100000;

    for(int i = 0; i < N; i++){
        myTree1->insertNode(i, 0);
        myTree2->insertNode(i, 0);
        myTree3->insertNode(i, 0);
        myTree4->insertNode(i, 0);
        myTree5->insertNode(i, 0);
    }
    using milli = std::chrono::milliseconds;
    std::cout<<std::endl;
    //Pass 1

    auto start = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < N; i++) myTree1->deleteNode(i);
    auto finish = std::chrono::high_resolution_clock::now();

    std::cout << "insertNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 2
    start = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < N; i++) myTree2->deleteNode(i);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "insertNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 3
    start = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < N; i++) myTree3->deleteNode(i);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "insertNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 4
    start = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < N; i++) myTree4->deleteNode(i);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "insertNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 5
    start = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < N; i++) myTree5->deleteNode(i);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "insertNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;
}

TEST(AVLTreeSearchTests, Found){
    auto *myTree = new AVLTree();
    int data[] = {7, 4, 5, 3, 1};
    for(auto i: data) myTree->insertNode(i, 0);
    auto * node = myTree->searchNode(1);
    std::cout<<node->getKey()<<std::endl;
    EXPECT_EQ(node->getKey() == 1, true);
}

TEST(AVLTreeSearchTests, NotFound){
    auto *myTree = new AVLTree();
    int data[] = {7, 4, 5, 3, 1};
    for(auto i: data) myTree->insertNode(i, 0);
    auto * node = myTree->searchNode(0);
    std::cout<<node<<std::endl;
    EXPECT_EQ(node == NULL, true);
}

TEST(AVLTreeSearchTests, performance){
    auto *myTree1 = new AVLTree();
    auto *myTree2 = new AVLTree();
    auto *myTree3 = new AVLTree();
    auto *myTree4 = new AVLTree();
    auto *myTree5 = new AVLTree();
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
    std::cout<<std::endl;
    //Pass 1

    auto start = std::chrono::high_resolution_clock::now();
    for(int i = N; i > 0; i--) myTree1->searchNode(i);
    auto finish = std::chrono::high_resolution_clock::now();

    std::cout << "searchNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 2
    start = std::chrono::high_resolution_clock::now();
    for(int i = N; i > 0; i--) myTree2->searchNode(i);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "searchNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 3
    start = std::chrono::high_resolution_clock::now();
    for(int i = N; i > 0; i--) myTree3->searchNode(i);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "searchNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 4
    start = std::chrono::high_resolution_clock::now();
    for(int i = N; i > 0; i--) myTree4->searchNode(i);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "searchNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;

    //Pass 5
    start = std::chrono::high_resolution_clock::now();
    for(int i = N; i > 0; i--) myTree5->searchNode(i);
    finish = std::chrono::high_resolution_clock::now();

    std::cout << "searchNode() took "
              << std::chrono::duration_cast<milli>(finish - start).count()
              << " milliseconds\n"<<std::endl;
}
