#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Constructer called" << std::endl;
	this->name = "Trappy";
	this->healthp = 10;
	this->energyp = 10;
	this->attackd = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Constructer called" << std::endl;
	this->name = name;
	this->healthp = 10;
	this->energyp = 10;
	this->attackd = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	std::cout << "Copy Constructer called" << std::endl;
	this->name = other.name;
	this->healthp = other.healthp;
	this->energyp = other.energyp;
	this->attackd = other.attackd;
}

ClapTrap &ClapTrap::operator=(const ClapTrap other) {
	std::cout << "Assignment Operator called" << std::endl;
	this->name = other.name;
	this->healthp = other.healthp;
	this->energyp = other.energyp;
	this->attackd = other.attackd;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
};

void ClapTrap::attack(const std::string &target) {
	if (this->energyp > 0 && this->healthp > 0) {
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackd << " points of damage!" << std::endl;
		this->energyp--;
	}
	if (this->energyp == 0)
		std::cout << "no energy left for this move" << std::endl;
	if (this->healthp <= 0)
		std::cout << "no health points left for this move" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->energyp > 0 && this->healthp > 0) {
		std::cout << "ClapTrap " << this->name << " has gained " << amount << " hp!" << std::endl;
		this->energyp--;
		this->healthp += amount;
	}
	if (this->energyp == 0)
		std::cout << "no energy left for this move" << std::endl;
	if (this->healthp <= 0)
		std::cout << "no health points left for this move" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->healthp > 0) {
		std::cout << "ClapTrap " << this->name << " has taken " << amount << " damage:(" << std::endl;
		this->healthp -= amount;
	}
	else if (this->healthp <= 0)
		std::cout << "Mans already dead chill.." << std::endl;
}