#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap constructer called" << std::endl;
	this->healthp = 100;
	this->energyp = 100;
	this->attackd = 30;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap constructer called" << std::endl;
	this->name = name;
	this->healthp = 100;
	this->energyp = 100;
	this->attackd = 30;
}

FragTrap::FragTrap(const FragTrap &other) {
	std::cout << "FragTrap Copy Constructer called" << std::endl;
	this->name = other.name;
	this->healthp = other.healthp;
	this->energyp = other.energyp;
	this->attackd = other.attackd;
}

FragTrap &FragTrap::operator=(const FragTrap other) {
	std::cout << "FragTrap Assignment Operator called" << std::endl;
	this->name = other.name;
	this->healthp = other.healthp;
	this->energyp = other.energyp;
	this->attackd = other.attackd;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called" << std::endl;
};

void FragTrap::highFivesGuys() {
	std::cout << this->name << " is giving everybody high fives!!!! :)))" << std::endl;
}