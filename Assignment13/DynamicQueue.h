#ifndef QUEUE_H
#define QUEUE_H

class StaticQueue
{
private:
    struct QueueNode
    {
        double     daval;
        QueueNode* itSnext;
    };

public:
    StaticQueue();
    ~StaticQueue();

    void enqueue(double inte);
    bool isEmpty();
    void printQ();
    void getRidOf();
    void dequeue(double& inte);
    

private:
    QueueNode* dafront;
    QueueNode* darear;
};

#endif
