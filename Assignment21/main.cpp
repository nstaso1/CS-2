/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "BinaryTree.h"
#include "Dynamic-Queue.h"

using namespace std;

int main()
{
    cout << "Program running..." << endl;
    
    int result;
    
    BinaryTree<int> tree;

    tree.insertNode(7);
    tree.insertNode(11);
    tree.insertNode(9);
    tree.insertNode(3);
    tree.insertNode(4);
    

    tree.displayPreOrder();
    tree.displayPostOrder();
    tree.displayInOrder();

    cout << "Contains 7?: "  << tree.searchNode(7)  << endl;
    cout << "Contains 16?: " << tree.searchNode(16) << endl;

    tree.remove(9);

    tree.displayInOrder();

    DynamicQueue mqueue;
    
    tree.makeQueue(mqueue);

    mqueue.dequeue(result);
    mqueue.dequeue(result);
    mqueue.dequeue(result);
    mqueue.dequeue(result);
    mqueue.dequeue(result);

    return 0;
}
