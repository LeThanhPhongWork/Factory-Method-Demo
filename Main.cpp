#include "AnimalFactory.h"

int main() {
	AnimalFactory* factory = nullptr;
	Animal* animal = nullptr;
	
	//Dog
	factory = new DogFactory();
	animal = factory->createAnimal();
	animal->describe();
	delete animal;
	delete factory;
	
	//Cat
	factory = new CatFactory();
	animal = factory->createAnimal();
	animal->describe();
	delete animal;
	delete factory;
	
	//Duck
	factory = new DuckFactory();
	animal = factory->createAnimal();
	animal->describe();
	delete animal;
	delete factory;
	
	return 0;
}
