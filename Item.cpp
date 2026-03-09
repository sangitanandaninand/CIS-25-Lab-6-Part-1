#include "Item.h"

int Item::totalItems = 0;

Item::Item(std::string name = "Scrap", int value = 0){

}

string Item: getName() const {
    return name;
    }
int Item:getValue() const {
    return value;
}
void Item::display() const {
    cout << "{" << getName() << "](Value: [" << getValue() << "]" << endl;
    return;
}