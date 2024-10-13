#include <iostream>
#include "Exo3.h"

int CopyCopyGetLength(const char* string) {
	char current = ' ';
	int length = 0;
	while (current != '\0')
	{
		current = string[length];
		length++;
	}

	return length;
}

bool CompareStrings(const char* string1, const char* string2) {
	int length1 = CopyCopyGetLength(string1);
	int length2 = CopyCopyGetLength(string2);

	if (length1 != length2) return false;

	bool equals = true;
	for (int i = 0; i < length1; i++)
	{
		if (string1[i] != string2[i]) {
			equals = false; 
			break;
		}
	}

	return equals;
}

void Exercice3() {
	const char* string1 = "test";
	const char* string2 = "test";

	bool isEqual = CompareStrings(string1, string2);

	std::cout << isEqual;
}