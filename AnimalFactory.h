#ifndef ANIMAL_FACTORY_H
#define ANIMAL_FACTORY_H

#include "Animal.h"

class AnimalFactory {
	public:
		virtual Animal* createAnimal() = 0;
		virtual ~AnimalFactory() = default;
		
};

class DogFactory : public AnimalFactory {
	public:
		Animal* createAnimal() override {
			return new Dog;
		}
};

class CatFactory : public AnimalFactory {
	public:
		Animal* createAnimal() override {
			return new Cat;
		}
};

class DuckFactory : public AnimalFactory {
	public:
		Animal* createAnimal() override {
			return new Duck;
		}
};

#endif
