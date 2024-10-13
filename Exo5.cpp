#include <iostream>
#include "Exo5.h"

int GetLengthAgain(const char* string) {
	char current = ' ';
	int length = 0;
	while (current != '\0')
	{
		current = string[length];
		length++;
	}

	return length;
}

bool CompareStringsAgain(const char* string1, const char* string2) {
	int length1 = GetLengthAgain(string1);
	int length2 = GetLengthAgain(string2);

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

bool IsPalindrome(const char* string) {
	int length = GetLengthAgain(string);

	char* storage = (char*)malloc(sizeof(char) * length);

	if (storage == nullptr) return NULL;

	for (int i = 0; i < length; i++) {
		storage[i] = string[(length-2) - i];
	}

	return CompareStringsAgain(string, storage);
}

void Exercice5(){
	const char* string = "radar";

	bool isPalindrome = IsPalindrome(string);

	std::cout << isPalindrome;
}