#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->name = "Trappy";
	this->healthp = 10;
	this->energyp = 10;
	this->attackd = 0;
}

ClapTrap::ClapTrap(std::string name) {
	this->name = name;
	this->healthp = 10;
	this->energyp = 10;
	this->attackd = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
	this->name = other.name;
	this->healthp = other.healthp;
	this->energyp = other.energyp;
	this->attackd = other.attackd;
}

ClapTrap &ClapTrap::operator=(const ClapTrap other) {
	this->name = other.name;
	this->healthp = other.healthp;
	this->energyp = other.energyp;
	this->attackd = other.attackd;
	return (*this);
}

ClapTrap::~ClapTrap() {};

void ClapTrap::attack(const std::string &target) {
	if (this->energyp > 0 && this->healthp > 0) {
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackd << " points of damage!" << std::endl;
		this->energyp--;
	}
	if (this->energyp == 0)
		std::cout << "no energy left for this move" << std::endl;
	if (this->healthp == 0)
		std::cout << "no health points left for this move" << std::endl;
}