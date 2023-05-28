using namespace std;

#include <iostream>
string uppercase(string word) {
	for (int i = 0; word[i] != NULL; i++) {
		if ((int)word[i] > 96 && (int)word[i] < 123) {
			word[i] = (int)word[i] - 32;
		}
	}
	return word;
}

int main()
{
	string word;
	
	do {
		cout << "Input some word (input 0 to exit)\n";
		cin >> word;
		word = uppercase(word);
		cout << word << endl;
		cout << "-------------------\n";
	} while (word!= "0");
	
}

