#include <iostream>
#include "../include/pokemon.hpp"
#include "../include/attack.hpp"

int main() {
    std::cout << "==========================================\n";
    std::cout << "Bienvenue dans le clone Pokemon AI (C++20)\n";
    std::cout << "==========================================\n\n";

    // Création de deux Pokémon
    Pokemon pika("Pikachu", 5, 20, 15, 10);
    Pokemon bulb("Bulbizarre", 5, 25, 12, 12);

    // Initialisation des attaques
    Attack eclair("Éclair", 40, 100, "Électrik");
    Attack charge("Charge", 35, 95, "Normal");

    pika.learnAttack(eclair);
    pika.learnAttack(charge);
    std::cout << "\n";

    pika.displayStats();
    bulb.displayStats();
    std::cout << "\n";

    // Pikachu utilise une attaque sur Bulbizarre
    pika.executeAttack(0, bulb);
    std::cout << "\n";
    
    bulb.displayStats();

    return 0;
}