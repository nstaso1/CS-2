

#ifndef MYARRAYLIST_H
#define MYARRAYLIST_H


class myArrayList
{

    
public:
    myArrayList()
    {
        length = 0;
    }
   
    void showValues();
    void insertE(int e);
    void removeE();
    void isFull();
    void findE(int value);
    void getLength();
    void makeEmpty();
private:
    static const int SIZE = 10;
    int length;
    int array[SIZE];
};
#endif
