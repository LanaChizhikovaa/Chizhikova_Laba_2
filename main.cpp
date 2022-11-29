#include <iostream>
#include "observeable.h"
#include "observer.h"
#include <chrono>
#include <thread>
#include "infofile.h"

using namespace std;

int main()
{
    InfoFile monitor("file.txt");
    FileObserver observer;
    monitor.Attach(&observer);

    while (true){
        monitor.checkFile();
        this_thread::sleep_for(chrono::milliseconds(100));
    }
    return 0;
}
