#include <iostream>
#include "Exo7.h"

int GetLengthFUCKINGAGAIN(const char* string) {
	char current = ' ';
	int length = 0;
	while (current != '\0')
	{
		current = string[length];
		length++;
	}

	return length;
}

bool IsSequence(const char* string, const char* patern) {
	int lengthOfString = GetLengthFUCKINGAGAIN(string)-1;
	int lengthOfPatern = GetLengthFUCKINGAGAIN(patern)-1;

	int index = 0;
	bool value = false;
	while (index < (lengthOfString - 2)) {
		int accuracy = 0;
		for (int i = 0; i < lengthOfPatern; i++) {
			if (string[index+i] == patern[i]) accuracy++;
		}
		if (accuracy == lengthOfPatern) {
			value = true;
			break;
		}
		index++;
	}

	return value;
}

void Exercice7() {
	const char* string = "aaaabaababb";
	const char* patern = "bab";

	bool contains = IsSequence(string, patern);

	std::cout << contains;
}