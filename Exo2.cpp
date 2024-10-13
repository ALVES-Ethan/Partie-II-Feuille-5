#include <iostream>
#include "Exo2.h"

int CopyGetLength(const char* string) {
	char current = ' ';
	int length = 0;
	while (current != '\0')
	{
		current = string[length];
		length++;
	}

	return length;
}

int FindCharacter(const char* string, char target) {
	int length = CopyGetLength(string);
	
	int index = 0;
	for (int i = 0; i < length; i++) {
		if (string[i] == target) {
			index = i;
			break;
		}
	}
	return index;
}

void Exercice2() {
	const char* string = "abcdef";

	int index = FindCharacter(string, 'c');

	std::cout << index;
}