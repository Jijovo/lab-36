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

    //dislay menu to add, delete, search, and modify
    int c;
    while (c != 5) {
        cout << "Menu" << endl << "----" << endl << "1. Add" << endl << "2. Delete" << endl << "3. Search" << endl << "4. Modify" << endl << "5. Exit" << endl << "Enter your choice (1-5): ";
        cin >> c;
        if (c == 1) { //add
            string code;
            cout << "Enter code: ";
            cin >> code;
            cout << endl;
            tree.insertNode(code);
        } else if (c == 2) { //delete
            string code;
            cout << "Enter code: ";
            cin >> code;
            tree.remove(code);
        } else if (c == 3) { //search
            string code;
            cout << "Enter code: ";
            cin >> code;
            if (tree.searchNode(code))
                cout << endl << "Found code" << endl << endl;
            else
                cout << endl << "Code not found" << endl << endl;
        } else if (c == 4) { //modify, delete old and add new
            string code, newCode;
            cout << "Enter code: ";
            cin >> code;
            cout << endl << "Enter new code: ";
            cin >> newCode;
            tree.insertNode(newCode);
            tree.remove(code);
        }
    }
    cout << "Goodbye." << endl;

    return 0;
}