#include "Header.hpp"

int main()
{
	const int N = 5;
	Animal **arr = new Animal*[N];

	for (int i = 0; i < N; i++)
	{
		if (i < N/2)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}
	std::cout << "============================================" << std::endl;
	arr[1]->makeSound();
	arr[4]-> makeSound();
	std::cout << "============================================" << std::endl;

	for (int i = 0; i < N; i++)
		delete arr[i];
	delete []arr;
	return 0;
}