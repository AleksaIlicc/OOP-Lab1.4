#include "Buffer.h"
#include <iostream>

int main() {
	int n;
	std::cin >> n;
	Buffer obj1(n);
	for (int i = 0; i < n; i++)
	{
		int temp;
		std::cin >> temp;
		obj1.push(temp);
	}

	Buffer* obj2 = new Buffer(obj1);

	int m;
	std::cin >> m;
	for (int i = 0; i < m; i++)
	{
		obj2->pop();
	}

	int tbe1 = obj1.vracaTrenutniBrojElemenata();
	int tbe2 = obj2->vracaTrenutniBrojElemenata();

	obj1.prikazuje();
	obj2->prikazuje();
	std::cout << "Trenutni broj elemenata od prvog : " << tbe1 << "\n" << "Trenutni broj elemenata od drugog : " << tbe2 << std::endl;
	delete obj2;
}