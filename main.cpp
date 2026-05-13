//Ezzat Mohamadein | ComSc 210 | Lab 36
#include <iostream>
#include <string>
#include <fstream>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    //define and fill BST with data from codes.txt
    IntBinaryTree tree;
    ifstream fin("codes.txt");
    string code;
    while (fin >> code) {
        tree.insertNode(code);
    }
    fin.close();

    //display codes in tree
    cout << "Codes in tree: " << endl;
    tree.displayInOrder();
    

    return 0;
}