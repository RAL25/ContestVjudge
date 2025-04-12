#include<iostream>
#include<vector>
using namespace std;

int main(){
    const int target = 1500;
    vector<long> ugly(target);
    ugly[0] = 1;

    int i2 = 0, i3 = 0, i5 = 0;
    long next2 = 2, next3 = 3, next5 = 5;

    for (int i = 1; i < target; i++) {
        long nextUgly = min(next2, min(next3, next5));
        ugly[i] = nextUgly;

        if (nextUgly == next2) {
            i2++;
            next2 = ugly[i2] * 2;
        }
        if (nextUgly == next3) {
            i3++;
            next3 = ugly[i3] * 3;
        }
        if (nextUgly == next5) {
            i5++;
            next5 = ugly[i5] * 5;
        }
    }

    cout << "The 1500'th ugly number is " << ugly[target - 1] << "." << endl;

    return 0;
}