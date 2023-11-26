#ifndef STATIC_QUEUE_H
#define STATIC_QUEUE_H

#include <iostream>

using namespace std;

template <typename T>
class StaticQueue
{
    public:
        StaticQueue(int size)
        {
            queueArr = new T[size];
            queueS  = size;
            darear       = -1;
        }

        ~StaticQueue()
        {
            delete[] queueArr;
        }

        

        bool isFull()
        {
            return queueS == darear + 1 ? true : false;
        }
        
        bool isEmpty()
        {
            return darear == -1 ? true : false;
        }
        
        void printQ()
        {
            cout << "Trying to print queue: ";

            for (int i = 0 ; i < darear + 1 ; i++)
            {
                cout << queueArr[i] << " ";
            }

            cout << endl;
        }

        void enqueue(T val)
        {
            if (isFull())
            {
                cout << "The Queue is full." << endl;
                return;
            }
            
            darear++;
            queueArr[darear] = val;
        }

        void dequeue(T& val)
        {
            if (isEmpty())
            {
                cout << "There is nothing in Queue." << endl;
                return;
            }

            val = queueArr[0];
            darear--;

            // shift all elements to the front of the array
            for (int i = 0 ; i < queueS - 1 ; i++)
            {
                queueArr[i] = queueArr[i + 1];
            }
        }
        

    private:
        T*queueArr;
        int queueS;
        int darear;
};

#endif
