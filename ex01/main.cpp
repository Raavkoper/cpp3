#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ScavTrap a("Scavvy");

	std::cout << a.get_name() << std::endl;

	a.attack("John");

	a.takeDamage(99);

	a.beRepaired(10);

	std::cout << std::endl;

	a.takeDamage(99);

	a.attack("Another John");

	a.gaurdGate();
}