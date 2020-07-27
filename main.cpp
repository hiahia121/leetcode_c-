#include <iostream>
#include "FindNumsRepeat.h"

using namespace std;

int main() {
    int arrays[] = {1, 2, 3, 4, 5, 1};
    int length = sizeof(arrays) / sizeof(arrays[0]);
    FindNumsRepeat fnr;
    cout << fnr.findRepeatNum(arrays, length);
    return 0;
}
