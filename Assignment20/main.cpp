#include <iostream>

#include "BinaryTree.h"

using namespace std;

int main()
{
    cout << "Program is starting up..." << endl;

    BinaryTree<int> tree;

    tree.insertN(13);
    tree.insertN(17);
    tree.insertN(24);
    tree.insertN(46);
    tree.insertN(8);
    tree.insertN(23);
    tree.insertN(20);
    tree.insertN(4);
    tree.insertN(2);

    tree.displayInOrder();

    cout << "Height: " << tree.getTreeH() << endl;
    cout << "Node count: " << tree.getNodeC() << endl;

    return 0;
}

