#include "Buffer.h"
#include <iostream>

Buffer::Buffer() {
	velicina = 0;
}
Buffer::Buffer(int velicina) {
	this->velicina = velicina;
	niz = new int[velicina];
}
Buffer::~Buffer() {
	delete[] niz;
}
Buffer::Buffer(Buffer& b)
{
	velicina = b.velicina;
	niz = new int[velicina];
	trenutniBrElemenata = b.trenutniBrElemenata;

	for (int i = 0; i < trenutniBrElemenata; i++) {
		niz[i] = b.niz[i];
	}
}
void Buffer::push(int podatak)
{
	niz[trenutniBrElemenata] = podatak;
	trenutniBrElemenata++;
}
int Buffer :: pop() {
	
	return niz[trenutniBrElemenata--];

}
void Buffer::prikazuje() {

	for (int i = 0; i < trenutniBrElemenata; i++)
	{
		std::cout << niz[i] << ' ';
	}
	std::cout << std::endl;

}
void Buffer::dupliraj() {
	int novaVel = velicina * 2;
	int* noviNiz = new int[novaVel];
	for (int i = 0; i < velicina; i++)
	{
		noviNiz[i] = niz[i];
	}
	velicina = novaVel;
	delete[] niz;
	niz = noviNiz;

}
void Buffer::isprazniMesta() {

	int novaVel = trenutniBrElemenata;
	int* noviNiz = new int[novaVel];
	for (int i = 0; i < novaVel; i++)
	{
		noviNiz[i] = niz[i];
	}
	velicina = novaVel;
	delete[] niz;
	niz = noviNiz;

}