#ifndef QUEUE_H
#define QUEUE_H

class DynamicQueue
{
private:
    struct QueueNode
    {
        double     daval;
        QueueNode* itSnext;
    };

public:
    DynamicQueue();
    ~DynamicQueue();

    void enqueue(int inte);
    bool isEmpty();
    void printQ();
    void getRidOf();
    void dequeue(int& inte);
    

private:
    QueueNode* dafront;
    QueueNode* darear;
};

#endif
