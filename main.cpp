//Ezzat Mohamadein | ComSc 210 | Lab 36
#include <iostream>
#include <string>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    //test new binary tree with strings instead of int
    IntBinaryTree tree;
    tree.insertNode("hello");
    tree.insertNode("world");
    tree.insertNode("how");
    tree.insertNode("are");
    tree.insertNode("you");
    tree.displayInOrder();

    return 0;
}