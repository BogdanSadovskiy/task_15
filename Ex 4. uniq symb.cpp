#include<iostream>
#include<string>
using namespace std;
void uniq(string word) {
	char u;
	cout << "Unique symbols is:\n";
	for (int i = 0; i < word.length(); i++) {
		int n = 0;
		for (int j = 0; j < word.length(); j++) {
			if (word[i] == word[j]) {
				n++;

			}
		}
		if (n == 1) {
			u = word[i];
			cout << u;
		}
	}
}

int main()
{
	string word;
	cout << "Input some string\n";
	getline(cin, word);
	uniq(word);

}