#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap constructer called" << std::endl;
	this->healthp = 100;
	this->energyp = 50;
	this->attackd = 20;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap constructer called" << std::endl;
	this->name = name;
	this->healthp = 100;
	this->energyp = 50;
	this->attackd = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) {
	std::cout << "ScavTrap Copy Constructer called" << std::endl;
	this->name = other.name;
	this->healthp = other.healthp;
	this->energyp = other.energyp;
	this->attackd = other.attackd;
}

ScavTrap &ScavTrap::operator=(const ScavTrap other) {
	std::cout << "ScavTrap Assignment Operator called" << std::endl;
	this->name = other.name;
	this->healthp = other.healthp;
	this->energyp = other.energyp;
	this->attackd = other.attackd;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called" << std::endl;
};

void ScavTrap::attack(const std::string &target) {
	if (this->energyp > 0 && this->healthp > 0) {
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackd << " points of damage!" << std::endl;
		this->energyp--;
		return ;
	}
	if (this->energyp == 0)
		std::cout << "no energy left for this move" << std::endl;
	if (this->healthp <= 0)
		std::cout << "no health points left for this move" << std::endl;
}

void ScavTrap::gaurdGate() {
	std::cout << this->name << " is now in Gate keeper mode" << std::endl; 
}