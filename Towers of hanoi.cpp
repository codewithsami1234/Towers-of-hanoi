#include <iostream>
using namespace std;
void moveDiscs(int num, int fromPeg, int toPeg, int tempPeg); 
int main() {
    const int NUM_DISCS = 3;
    const int FROM_PEG = 1;
    const int TO_PEG = 3;
    const int TEMP_PEG = 2;
    moveDiscs(NUM_DISCS, FROM_PEG, TO_PEG, TEMP_PEG);
    cout << "All pegs are moved!" << endl;
    return 0;
}
void moveDiscs(int num, int fromPeg, int toPeg, int tempPeg) { 
    if (num > 0) {
        moveDiscs(num - 1, fromPeg, tempPeg, toPeg); 
        cout << "Move a disc from peg " << fromPeg << " to peg " << toPeg << endl;
        moveDiscs(num - 1, tempPeg, toPeg, fromPeg);
    }
}
