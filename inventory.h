#include <iostream>
#include <vector>
#include "item.h"

class Inventory {
    private:
        std::vector<Item> items;

    public:
    Inventory(int item_name);

    //add an item
    void add_item(std::string item_name) {
        items.push_back(Item(item_name));
    }

    //inventory display
    void check_inventory() {
        for (auto& item : items) {
            std::cout << item.get_name() << std::endl;
        }
    }

};
