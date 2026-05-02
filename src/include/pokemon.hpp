#ifndef POKEMON_HPP
#define POKEMON_HPP

#include <string>
#include <iostream>
#include <vector>
#include "attack.hpp"

class Pokemon {
private:
    std::string name;
    int level;
    int hp;
    int max_hp;
    int attack;
    int defense;
    std::vector<Attack> attacks;

public:
    // Constructeur
    Pokemon(std::string name, int level, int hp, int attack, int defense);

    // Méthodes de base
    void takeDamage(int amount);
    void heal(int amount);
    void displayStats() const;
    
    // Nouvelles méthodes de combat
    void learnAttack(const Attack& attack);
    void executeAttack(int index, Pokemon& target);

    // Getters
    std::string getName() const { return name; }
    int getLevel() const { return level; }
    int getHp() const { return hp; }
    int getMaxHp() const { return max_hp; }
    int getAttack() const { return attack; }
    int getDefense() const { return defense; }
    const std::vector<Attack>& getAttacks() const { return attacks; }
};

#endif // POKEMON_HPP