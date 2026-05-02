#ifndef POKEMON_HPP
#define POKEMON_HPP

#include <string>
#include <iostream>

class Pokemon {
private:
    std::string name;
    int level;
    int hp;
    int max_hp;
    int attack;
    int defense;

public:
    // Constructeur
    Pokemon(std::string name, int level, int hp, int attack, int defense);

    // Méthodes de base
    void takeDamage(int amount);
    void heal(int amount);
    void displayStats() const;

    // Getters
    std::string getName() const { return name; }
    int getLevel() const { return level; }
    int getHp() const { return hp; }
    int getMaxHp() const { return max_hp; }
    int getAttack() const { return attack; }
    int getDefense() const { return defense; }
};

#endif // POKEMON_HPP