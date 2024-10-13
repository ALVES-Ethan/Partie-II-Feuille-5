#include <iostream>
#include "Exo1.h"

int GetLength(const char* string) {
	char current = ' ';
	int length = 0;
	while (current != '\0')
	{
		current = string[length];
		length++;
	}

	return length;
}

char* ConcatenateStrings(const char* string1, const char* string2) {
	int length1 = GetLength(string1);
	int length2 = GetLength(string2);

	char* concatenated = (char*)malloc(sizeof(char) * (length1 + length2));

	if (concatenated == nullptr) return NULL;

	for (int i = 0; i < length1 + length2; i++)
	{
		if (i < (length1 - 1)) concatenated[i] = string1[i];
		else concatenated[i] = string2[i - (length1 - 1)];
	}

	return concatenated;
}

void Exercice1() {
	const char* string1 = "Hello";
	const char* string2 = "World";

	char* string3 = ConcatenateStrings(string1, string2);

	std::cout << string3;
}