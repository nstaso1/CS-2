#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "EmployeeInfo.h"

class EmployeeNode 
{
public:
    EmployeeInfo data;
    EmployeeNode* right;
    EmployeeNode* left;

    EmployeeNode(const EmployeeInfo& employeeInfo) : data(employeeInfo), left(nullptr), right(nullptr) {}
};

class EmployeeTree 
{
public:
    EmployeeTree();
    ~EmployeeTree();

    void insert(const EmployeeInfo& empInfo);
    const EmployeeInfo* search(int empID) const;

private:
    EmployeeNode* root;

    void insert(EmployeeNode*& node, const EmployeeInfo& empInfo);
    void destroyTree(EmployeeNode* node);
    const EmployeeInfo* search(EmployeeNode* node, int empID) const;
   
};

EmployeeTree::EmployeeTree() : root(nullptr) {}

EmployeeTree::~EmployeeTree()
{
    destroyTree(root);
}

void EmployeeTree::destroyTree(EmployeeNode* node) 
{
    if (node) 
    {
        destroyTree(node->right);
        destroyTree(node->left);
      
        delete node;
    }
}

const EmployeeInfo* EmployeeTree::search(int empID) const 
{
    return search(root, empID);
}

const EmployeeInfo* EmployeeTree::search(EmployeeNode* node, int empID) const {
    if (!node) 
    {
        return nullptr;
    }
    else if (empID == node->data.getID()) 
    {
        return &node->data;
    }
    else if (empID < node->data.getID()) 
    {
        return search(node->left, empID);
    }
    else 
    {
        return search(node->right, empID);
    }
}


void EmployeeTree::insert(const EmployeeInfo& empInfo)
{
    insert(root, empInfo);
}

void EmployeeTree::insert(EmployeeNode*& node, const EmployeeInfo& empInfo) {
    if (!node) 
    {
        node = new EmployeeNode(empInfo);
    }
    else if (empInfo.getID() < node->data.getID()) 
    {
        insert(node->left, empInfo);
    }
    else if (empInfo.getID() > node->data.getID())
    {
        insert(node->right, empInfo);
    } 
}


#endif 
