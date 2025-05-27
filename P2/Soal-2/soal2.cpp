#include <iostream>
#include <string>

class Vocaloid {
protected:
    std::string nama;
    int accuracy;
    int stamina;
public:
    Vocaloid(std::string nama, int accuracy, int stamina)
        : nama(nama), accuracy(accuracy), stamina(stamina) {}
    virtual void serang(Vocaloid& target) = 0;
    bool isAlive() const {
        return stamina > 0;
    }
    void printStatus() const {
        std::cout << nama << " has " << stamina << " stamina remaining." << std::endl;
    }
    std::string getNama() const {
        return nama;
    }
    int& getStamina() {
        return stamina;
    } 
};

class FirstVocaloid : public Vocaloid {
public:
    FirstVocaloid(std::string nama, int accuracy, int stamina)
        : Vocaloid(nama, accuracy, stamina) {}
    void serang(Vocaloid& target) override {
        target.getStamina() -= accuracy;
        if (target.getStamina() < 0) {
            target.getStamina() = 0;
        }
    }
};

class SecondVocaloid : public Vocaloid {
public:
    SecondVocaloid(std::string nama, int accuracy, int stamina)
        : Vocaloid(nama, accuracy, stamina) {}
    void serang(Vocaloid& target) override {
        target.getStamina() -= accuracy;
        if (target.getStamina() < 0) {
            target.getStamina() = 0;
        }
    }
};

int main() {
     std::string namafirst;
    int accuracyfirst; 
    int staminafirst;
    std::cout << "Nama: ";
    std::cin >> namafirst;
    std::cout << "Accuracy: ";
    std::cin >> accuracyfirst;
    std::cout << "Stamina: ";
    std::cin >> staminafirst;

    std::string namasecond;
    int accuracysecond;
    int staminasecond;
    std::cout << "Nama: ";
    std::cin >> namasecond;
    std::cout << "Accuracy: ";
    std::cin >> accuracysecond;
    std::cout << "Stamina: ";
    std::cin >> staminasecond;

    std::cout << "first/second: ";
    std::string giliranPertama;
    std::cin >> giliranPertama;


    FirstVocaloid firstVocaloid(namafirst, accuracyfirst, staminafirst);
    SecondVocaloid secondVocaloid(namasecond, accuracysecond, staminasecond);

    firstVocaloid.printStatus();
    secondVocaloid.printStatus();

    
    while (firstVocaloid.isAlive() && secondVocaloid.isAlive()) {
        if (giliranPertama == "first") {
            std::cout << firstVocaloid.getNama() << " attacks " << secondVocaloid.getNama() << "!" << std::endl;
            firstVocaloid.serang(secondVocaloid);
            secondVocaloid.printStatus();

            if (!secondVocaloid.isAlive()) break;

            std::cout << secondVocaloid.getNama() << " attacks " << firstVocaloid.getNama() << "!" << std::endl;
            secondVocaloid.serang(firstVocaloid);
            firstVocaloid.printStatus();
        } else {
            std::cout << secondVocaloid.getNama() << " attacks " << firstVocaloid.getNama() << "!" << std::endl;
            secondVocaloid.serang(firstVocaloid);
            firstVocaloid.printStatus();

            if (!firstVocaloid.isAlive()) break;

            std::cout << firstVocaloid.getNama() << " attacks " << secondVocaloid.getNama() << "!" << std::endl;
            firstVocaloid.serang(secondVocaloid);
            secondVocaloid.printStatus();
        }
    }

    
    if (firstVocaloid.isAlive()) {
        std::cout << firstVocaloid.getNama() << " wins the contest!" << std::endl;
    } else {
        std::cout << secondVocaloid.getNama() << " wins the contest!" << std::endl;
    }

    return 0;
}


