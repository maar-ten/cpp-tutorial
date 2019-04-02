#include <string>
#include <iostream>
#include <ctime>

class Warrior {
    std::string name;
    double health;
    double damage;
    double block;

public:
    Warrior(std::string name, double health, double damage, double block) {
        this->name = name;
        this->health = health;
        this->damage = damage;
        this->block = block;
    }

    double getHealth() {
        return health;
    }

    std::string getName() {
        return name;
    }

    double getDamage() {
        return damage;
    }

    double getBlock() {
        return block;
    }

    void absorbAttack(double damage) {
        this->health = this->health - (damage - this->block);
    }
};

class Battle {

public:
    static void StartFight(Warrior *warrior1, Warrior *warrior2) {
        while (true) {
            int offenderIndex = std::rand() % 2; // either 0 or 1

            Warrior *offender = offenderIndex == 0 ? warrior1 : warrior2;
            Warrior *defender = offenderIndex == 0 ? warrior2 : warrior1;

            double strikeDamage = offender->getDamage() - defender->getBlock();

            std::cout << offender->getName() << " attacks " << defender->getName() <<
                      " and deals " << strikeDamage << " damage\n";

            defender->absorbAttack(offender->getDamage());
            std::cout << defender->getName() << " is down to " << defender->getHealth() << " health\n";

            if (defender->getHealth() <= 0) {
                std::cout << defender->getName() << " has died and " << offender->getName() << " is victorious\n";
                break;
            }
        }
    }
};

int main() {
    srand(time(nullptr));

    Warrior thor("Thor", 100, 30, 15);
    Warrior hulk("Hulk", 135, 25, 10);

    Battle::StartFight(&thor, &hulk);

    return 0;
}