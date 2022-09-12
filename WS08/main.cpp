#include <iostream>
#include "Person.h"
#include "Computer.h"

using namespace std;

// credit to ryan for his code
int main() {
    // Create the players
    Person ryan = Person();
    Computer ai = Computer();

    // Both players make their moves
    ryan.move();
    ai.move();

    // Check who wins
    if(ryan.win(&ai)) {
        cout << "Ryan wins" << endl;
    }
    else if(ai.win(&ryan)) {
        cout << "AI wins" << endl;
    } else {
        cout << "It's a draw" << endl;
    }

    return 0;
}