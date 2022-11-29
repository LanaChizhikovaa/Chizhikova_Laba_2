#ifndef OBSERVER_H
#define OBSERVER_H

#include <iostream>
#include <cstring>
using namespace std;

class Observer {
public:
    virtual void UpDate(bool ex, int ChangeSize) = 0;
};

class FileObserver: public Observer
{
private:
    int ChangeSize = -1;
public:
    void UpDate(bool ex, int ChangeSize);

};


#endif // OBSERVER_H
