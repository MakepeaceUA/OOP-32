#include <iostream>
#include <ctime>
using namespace std;


class Animal 
{
public:
	virtual void Speak() 
	{
		cout << "Speak";
	};
};

class Frog: public Animal
{
public:
	void Speak() 
	{
		cout << "Kwa-kwa\n";
	}
};

class Dog : public Animal
{
public:
	void Speak()
	{
		cout << "Woof-woof\n";
	}
};

class Cat : public Animal
{
public:
	void Speak()
	{
		cout << "Meow-Meow\n";
	}
	void Scratch(bool val) 
	{
		if(val) 
		{
			cout << "Cat calm.\n";
		}
		else 
		{
			cout << "Cat scratches\n";
		}
	}
	void Purr() 
	{
		cout << "Cat purrs.\n";
	}
};

int main()
{
	bool homework = false;
	Frog frog;
	Dog dog;
	Cat cat;
	Animal* obj[3] = {&frog,&dog,&cat};

	for (int i = 0; i < 3; i++) 
	{
		obj[i]->Speak();
		if (Cat* catPtr = dynamic_cast<Cat*>(obj[i]))
		{
			catPtr->Scratch(homework);
			catPtr->Purr();
		}

	}
}