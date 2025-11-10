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
	for (int i = 0; i < N; i++)
		delete arr[i];
	delete []arr;
	return 0;
}