#include <iostream>
#include <cstdlib>
using namespace std;

unsigned int numKicks = 1;
unsigned int gold = 0;
int roll;
bool dead = false;

void kick(){
    roll = rand() % 25 + 1;
    if (numKicks == 1)
        roll = 10;
    else if (numKicks > 3) {
        cout << "Roll:" << roll << endl;
        cout << "numKicks: " << numKicks << endl;
        cout << roll - (numKicks - 2) << endl;
        roll = (1 > roll - (numKicks - 2)) ? 1 : roll - (numKicks - 2);
    }

    if (roll == 1){
        dead = true;
        return;
    }
    else if (roll < 10)
        gold += 10;
    else if (roll == 15)
        gold += 100;
    else if (roll == 20)
        gold += 200;
    else
        gold += 20;
    numKicks++;
}


int main() {
    srand((unsigned) time(NULL));
    for (int i = 0; i < 100; i++){
        while (!dead){
            kick();
        }
        cout << "Kicks: " << numKicks << endl;
        cout << "Gold: " << gold << endl;
        numKicks = 1;
        gold = 0;
        dead = false;
    }
}