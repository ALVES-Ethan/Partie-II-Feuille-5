#include <iostream>
#include "Exo6.h"

char* Substring(const char* string, int offset, int size) {
	char* storage = (char*)malloc(sizeof(char) * size);

	if (storage == nullptr) return NULL;

	for (int i = 0; i < size; i++) {
		storage[i] = string[offset + i];
	}

	return storage;
}

void Exercice6() {
	const char* string = "abcdef";

	char* string2 = Substring(string, 1, 3);

	for (int i = 0; i < 3; i++) {
		std::cout << string2[i];
	}
}