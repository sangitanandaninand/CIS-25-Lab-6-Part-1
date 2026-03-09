#include "Item.h"

class Inventory{

    private:
    Item * items; //TODO: check back up on the correct syntax for a pointer to an array (I think this is right)
    int capacity;
    int itemCount;

    //items (a pointer to an Item array), capacity (an int), and itemCount (an int).


    public:
    Inventory(int capacity);
    Inventory ();
    bool addItem(const Item& item);
    void display() const;
}