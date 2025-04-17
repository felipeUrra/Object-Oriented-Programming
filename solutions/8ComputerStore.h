#pragma once
#include "8Computer.h";

typedef unsigned int uint;

enum class ComputerType {Gaming = 0, Travel = 1};

class ComputerStore
{
    private:
        char* name;
        Computer* computers;
        uint computersCount;

        void copyFrom(const ComputerStore&);
        void free();

    public:
        ComputerStore();
        ComputerStore(const ComputerStore&);
        ComputerStore& operator=(const ComputerStore&);
        ~ComputerStore();

        ComputerStore(const char*, const Computer*, uint);

        void setName(const char*);
        void setComputers(const Computer*, uint);
    
        const char* getName() const;
        const Computer* getComputeres() const;
        uint getComputersCount() const;

        void addComputer(const Computer*);
        void printComputers() const;
        void computerPurchase(const char*, double);
        void printAvailableComputers() const;
        void printAvailableComputers(ComputerType) const;
};
