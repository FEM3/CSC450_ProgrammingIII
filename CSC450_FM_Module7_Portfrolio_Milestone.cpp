#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

int countingNumber = 0;
mutex mutexForCounting;

void increaseCount() {
    for (int num = 0; num <= 20; num++) {
        lock_guard<mutex> mutexLock(mutexForCounting);
        countingNumber = num;
        cout << "Going Up: " << countingNumber << endl;
    }
}

void decreaseCount() {
    for (int num = 20; num >= 0; num--) {
        lock_guard<mutex> mutexLock(mutexForCounting);
        countingNumber = num;
        cout << "Going Down: " << countingNumber << endl;
    }
}

int main() {
    thread threadUp(increaseCount);
    threadUp.join();

    thread threadDown(decreaseCount);
    threadDown.join();

    return 0;
}
