#include <iostream>
#include "Player.h"

int main() {
    Player hero;
    
    Item sword("Sword", 50);
    Item bonnent("Bonnset",150);
    Item boots("Boots",10);
    Item junk;

    hero.addItems(sword);
    hero.addItem(bonnent);
    hero.addItem(boots);
    hero.addItem(junk);

    cout << "The total number of item is" << Item::getTotalItems() << endl;

    return 0;
}