#include "observer.h"

using namespace std;


void FileObserver::UpDate(bool ex, int size) {

    if (ChangeSize == -1)
        ChangeSize = size;

    if (ex) {
        if (ChangeSize != size) {
            std::cout << "The file exists, the file has been changed : " << size << std::endl;
            ChangeSize = size;
        }
        else {
            cout << "The file exists, the file is not empty : " << ChangeSize << endl;
        }
    }
    else {
        cout << "The file does not exist" << endl;
    }

}
