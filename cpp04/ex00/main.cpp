#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal *a = new WrongCat();

	
	(void)a;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	  
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete  j;
	delete  i;
	delete meta;
	delete a;
	return 0;
}