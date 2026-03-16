#include "Player.h"
#include <iostream>
#include <string>

// name "Hero", health 100, maxHealth 100, and attackPower 10.
Player::Player() : inventory(10) {
    name = "Hero";
    health = 100;
    maxHealth = 100;
    attackPower = 10;
}

Player::Player(std::string name, int health, int attackPower): inventory(10) {
    this->name = name;
    this->health = health;
    this->attackPower = attackPower;
    this->maxHealth = health;
    this->inventory = Inventory(10);
}
