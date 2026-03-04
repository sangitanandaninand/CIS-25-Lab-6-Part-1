#include "Player.h"
#include <iostream>

Player:: Player() {
    name = "Hero";
    health = 100;
    maxHealth = 100;
    attackPower = 10;
}

Player::Player();
Player(std::string name, int health, int attackPower); {
    this->name = name;
    this->health = health;
    this->attackPower = attackPower;
    this-> maxHealth = health;
}

Player::Player() {
    std:: cout << "The object for Player [name] has been destroyed." << std:: endl;
}

//getters
std:: string Player:: getName() const
int Player:: getHealth() const
int Player:: getMaxHealth() const
int Player:: getAttackPower() const


//"actual functions"
void Player::takeDamage(int damage) {
    if(damage > health) {
        health = 0;
    }else{
        health -= damage;
    }
}
if (health <= 0) {
    std:: cout << name << name <<"falls to the ground,defeated." << std::endl;
} 

//common shortcut for health = health - damage;

void Player:: displayedStatus() {
    std::cout << name <<"-HP: " << health << "/" << maxHealth << std:: endl;
}
