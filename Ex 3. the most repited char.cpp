
using namespace std;
#include <iostream>
#include<string>
void repited(string word) {
	int maxnum = 0;
	char max;
	for (int i = 0; i<word.length(); i++) {
		int n = 0;
		for (int j = 0; j < word.length(); j++) {
			if (word[i] == word[j]) {
				n++;

			}
		}
		if (n > maxnum) {
			max = n;
			max = word[i];
		}
	}
	cout << "The most repited symbol is " << max << endl;
	cout << "------------------------------------\n";
}

int main()
{
	string word;
	cout << "Input some string\n";
	getline(cin, word);
	repited(word);

}

