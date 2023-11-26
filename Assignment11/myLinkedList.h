#ifndef LINKED_LIST_H
#define LINKED_LIST_H


class myLinkedList
{
private:
    struct ListN
    {
        int       _val;
        ListN* _next;
    };

public:
    myLinkedList();
    ~myLinkedList();

    
    void insertN(int v, int local);
    int findN(int v);
    void deleteN();
    void addN(int v);
    void displayV();

private:
    ListN* _head;
};

#endif
