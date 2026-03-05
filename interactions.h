#include <iostream>
#include "hitpoints.h"
#include "inventory.h"


int current_hp = max_hp;

int damage_interaction() {

    int action = 0;

    // Simulate taking damage
    current_hp -= damage_taken;
    std::cout << "Took " << damage_taken << " damage. Current HP: " << current_hp << "/" << max_hp << std::endl;

    // Simulate healing
/* hold on to this I'm not sure if we need it ->
    int meditate = max_hp;
    current_hp += meditate;
*/

    //Actions

    if (action = 1) {
        enemy_health -= leaf_blade;
        std::cout << "Enemy took " << leaf_blade << " damage. ";
        std::cout << "Enemy HP: " << enemy_health << std::endl;
        action = 0;
        return 0;
    }
    else if (action = 2) {
        Inventory.check_inventory();
    }
    else if (action = 3) {
        //display current hp
        std::cout << "Starting HP: " << current_hp << "/" << max_hp << std::endl;
    }
    else if (action = 4) {
        //reset hp back to full health
        current_hp = max_hp;
        std::cout << "You healed " << (max_hp - current_hp) << std::endl;

    // Ensure HP doesn't exceed max HP
    if (current_hp > max_hp) {
        current_hp = max_hp;
    }

        return 0;
    }

    // Check if the character is dead
    if (current_hp <= 0) {
        std::cout << "Game Over! The character has died." << std::endl;
    }

    return 0;
}
