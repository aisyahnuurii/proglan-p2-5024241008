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
    
}
