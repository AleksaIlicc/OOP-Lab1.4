#pragma once
class Buffer {
private:
	int* niz;
	int velicina;
	int trenutniBrElemenata=0;
public:
	Buffer();
	Buffer(int);
	Buffer(Buffer& b);
	~Buffer();
	inline int vracaTrenutniBrojElemenata() {
		return trenutniBrElemenata;
	}
	void push(int podatak);
	int pop();
	void prikazuje();
	void dupliraj();
	void isprazniMesta();
	
};