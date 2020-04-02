project(Data_Structures)

set(HEADER_FILES
        AVLTree.h
        BinarySearchTree.h
        CircularQueue.h
        DoubleLinkedList.h
        HashTable.h
        Heap.h LinkedList.h Queue.h
        PrefixTree.h
        RedBlackTree.h
        SparseTable.h
        Stack.h
        SuffixArray.h)

set(SOURCE_FILES DS.cpp)

add_library(Source_Files STATIC ${HEADER_FILES} ${SOURCE_FILES})