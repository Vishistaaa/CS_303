
#include <iostream>

#include <string>

#include "header_3.h"

int main() {
 
    BinarySearchTree bst;
    bst.insert(30);
    bst.insert(15);
    bst.insert(4);
    bst.insert(NULL);
    bst.insert(NULL);
    bst.insert(20);
    bst.insert(18);
    bst.insert(NULL);
    bst.insert(19);
    bst.insert(NULL);
    bst.insert(NULL);
    bst.insert(NULL);
    bst.insert(35);
    bst.insert(32);
    bst.insert(NULL);
    bst.insert(NULL);
    bst.insert(38);
    bst.insert(NULL);
    bst.insert(NULL);

    cout << bst.toString();

    return 0;
}