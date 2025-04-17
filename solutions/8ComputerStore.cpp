#include "8ComputerStore.h"
#include "8ConsultantUtils.h"
#include <iostream>
#include <cstring>

// Setters
void ComputerStore::setName(const char* name) {
    if(!name || this->name == name) return;

    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

void ComputerStore::setComputers(const Computer* computers, uint computersCount) {
    if (!Computers || this->Computers == name) return;
    
    this->computers = new Computer[computersCount];
    this->computersCount = computersCount;
    
    for (int i = 0; i < computersCount; i++)
    {
        this->computers[i] = computers[i];
    }
}

// Getters




ComputerStore::copyFrom(const ComputerStore& other) {
    setName(other.name);
    setComputers(other.computers);
}

ComputerStore::free() {
    delete[] name;
    delete[] computers;
    computersCount = 0;
}

ComputerStore::ComputerStore(const char* name, const Computer* computers, uint computersCount) {
    setName(name);
    setComputers(computers, computersCount);
}

// Big four
ComputerStore::ComputerStore() : name(nullptr), computers(nullptr), computersCount(0) {};

ComputerStore::ComputerStore(const ComputerStore& other) {
    copyFrom(other);
}

ComputerStore& ComputerStore::operator=(const ComputerStore& other) {
    if (this != &other) {
        free();
        copyFrom(other);
    }
    return *this;
}

ComputerStore::~ComputerStore() {
    free();
}

// Store funcionalities

void ComputerStore::addComputer(const Computer* computer) {
    for (int i = 0; i < computersCount; i++) {
        if (strcmp(computers[i].getBrand(), computer[i].getBrand())) {
            computers[i].setQuantity(computers[i].getQuantity() + 1);
            return;
        }
    }

    Computer* aux = new Computer[computersCount + 1];
    for (int i = 0; i < computersCount; i++) {
        aux[i] = computers[i];
    }
    aux[computersCount] = computer;
    
    setComputers(aux, computersCount + 1);
    delete[] aux;
}

void ComputerStore::printComputers() const{
    std::cout << "Available computers: \n";
    for (int i = 0; i < computersCount; i++) {
        std::cout << "Brand: " << computers[i].getBrand() << " Quantity: " << computers[i].getQuantity() << std::endl;
    }
}

void ComputerStore::computerPurchase(const char* brand, double money) {
    for (int i = 0; i < computersCount; i++) {
        if (strcmp(computers[i].getBrand(), brand)) {
            if (computers[i].getQuantity() >= 0)
            {
                if (computers[i].getPrice() <= money) {
                    computers[i].setQuantity(computers[i].getQuantity() - 1);
                    std::cout << "Purchase done.";
                    return;
                }
            }
            
            std::cout << "You don't have enough money.";
        }

        std::cout << "There are not computers of this brand available";
    }
    
    std::cout << "There are not computers of this brand.";
}

void ComputerStore::printAvailableComputers() const{
    std::cout << "Available computers: \n";
    
    for (int i = 0; i < computersCount; i++) {
        if (computers[i].getQuantity() > 0) {
            std::cout << "Brand: " << computers[i].getBrand() << " Quantity: " << computers[i].getQuantity() << std::endl;
        }
    }
}

void ComputerStore::printAvailableComputers(ComputerType cType) const{
    std::cout << "Available computers: \n";
    
    for (int i = 0; i < computersCount; i++) {
        if (computers[i].getQuantity() > 0 && ((cType == 0)? ConsultantUtils::isGoodForGaming(computers[i]) : ConsultantUtils::isGoodForTravel(computers[i]))) {
            std::cout << "Brand: " << computers[i].getBrand() << " Quantity: " << computers[i].getQuantity() << std::endl;
        }
    }
}
