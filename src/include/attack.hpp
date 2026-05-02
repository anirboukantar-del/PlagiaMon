#ifndef ATTACK_HPP
#define ATTACK_HPP

#include <string>

class Attack {
private:
    std::string name;
    int power;
    int accuracy;
    std::string type;

public:
    // Constructeur
    Attack(std::string name, int power, int accuracy, std::string type);

    // Getters
    std::string getName() const { return name; }
    int getPower() const { return power; }
    int getAccuracy() const { return accuracy; }
    std::string getType() const { return type; }
};

#endif // ATTACK_HPP