#include "../include/pokemon.hpp"

Pokemon::Pokemon(std::string n, int lvl, int h, int atk, int def)
    : name(n), level(lvl), hp(h), max_hp(h), attack(atk), defense(def) {}

void Pokemon::takeDamage(int amount) {
    hp -= amount;
    if (hp < 0) hp = 0;
    std::cout << name << " a subi " << amount << " points de dégâts.\n";
}

void Pokemon::heal(int amount) {
    hp += amount;
    if (hp > max_hp) hp = max_hp;
    std::cout << name << " a récupéré " << amount << " PV.\n";
}

void Pokemon::displayStats() const {
    std::cout << "--- " << name << " (Niv." << level << ") ---\n";
    std::cout << "PV : " << hp << "/" << max_hp << "\n";
    std::cout << "Attaque : " << attack << "\n";
    std::cout << "Défense : " << defense << "\n";
}