#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	FragTrap b("Fragswag");

	b.attack("Olivia");

	b.highFivesGuys();

	for (int i = 0; i < 99; i++) {
		b.beRepaired(1);
	}

	b.attack("Gerald");
}