#include "ClapTrap.hpp"

int main(void) {
	ClapTrap a;
	ClapTrap b("Flapdrol");

	a.attack(b.get_name());

	a.takeDamage(1);

	a.beRepaired(1);

	std::cout << std::endl;

	a.takeDamage(10);

	a.attack(b.get_name());

	a.takeDamage(1);
}