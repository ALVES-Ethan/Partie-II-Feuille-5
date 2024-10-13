#include <iostream>
#include "Exo4.h"

int CountCharacterFrequency(const char* string, char target) {
	int index = 0;
	int freq = 0;
	while (string[index] != '\0') {
		freq = string[index] == target ? freq+1: freq;
		index++;
	}

	return freq;
}

void Exercice4() {
	const char* string = "hello world";

	int count = CountCharacterFrequency(string, 'l');

	std::cout << count;
}