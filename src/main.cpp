#include <iostream>
#include "../include/pokemon.hpp"

int main() {
    std::cout << "==========================================\n";
    std::cout << "Bienvenue dans le clone Pokemon AI (C++20)\n";
    std::cout << "==========================================\n\n";

    // Création d'un Pokémon de base
    Pokemon starter("Pikachu", 5, 20, 15, 10);
    
    starter.displayStats();
    std::cout << "\n";
    
    // Test des méthodes
    starter.takeDamage(5);
    starter.heal(2);
    starter.displayStats();

    return 0;
}