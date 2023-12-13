#ifndef LINKED_LIST_H
#define LINKED_LIST_H


class LinkedList
{
    private:
        struct ListNode
        {
            int       _val;
            ListNode* _next;
        };

    public:
        LinkedList();
        ~LinkedList();

        void appendN(int val);
        void insertN(int val, int location);
        void deleteN();
        int  search(int val);
        void displayV();

    private:
        ListNode* _head;
};

#endif
