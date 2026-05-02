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

void Pokemon::learnAttack(const Attack& atk) {
    if (attacks.size() < 4) {
        attacks.push_back(atk);
        std::cout << name << " a appris l'attaque " << atk.getName() << " !\n";
    } else {
        std::cout << name << " a déjà 4 capacités. Oubliez-en une avant d'en apprendre une nouvelle.\n";
    }
}

void Pokemon::executeAttack(int index, Pokemon& target) {
    if (index >= 0 && index < (int)attacks.size()) {
        const Attack& atk = attacks[index];
        std::cout << name << " utilise " << atk.getName() << " !\n";
        
        int damage = (attack * atk.getPower() / 100) - (target.getDefense() / 2);
        if (damage < 1) damage = 1;

        target.takeDamage(damage);
    } else {
        std::cout << name << " ne connaît pas cette attaque.\n";
    }
}