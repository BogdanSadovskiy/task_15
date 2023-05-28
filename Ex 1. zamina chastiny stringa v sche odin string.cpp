using namespace std;
#include <iostream>
bool check(string first, string word_part, short& a) {                            //функція для перевірки правильного вводу 
    int j = 0;
    for ( int i = 0 ; i < size(first); i++) {
        if (first[i] == word_part[j]) {
            for (int j=0; j < size(word_part); j++) {
                if (first[i] != word_part[j]) {
                    cout << "There is not underphrase " << word_part << endl;
                    cout << "Try again\n";
                    a = false;
                    return a;
                }
                else if (j == size(word_part) - 1) {
                    a = true;
                    return a;
                }
                i++;
            }
        }
        if (i == size(first) - 1 && first[size(first)-1] != word_part[j]) {
            cout << "There is not underphrase \"" << word_part << "\". Try again\n" << endl;
            a = false;
            return a;
        } 
    }
    return a;
}  

void exchange(string& word_f, string word_part, string word_newpart) {
    int j = 0;
    string newstring;
    int first_i = 0;
    int iteration = 0;
    for (int i = 0; i < size(word_f); i++) {                //визначаємо які символи видаляти
        if (word_f[i] == word_part[j]) {
            first_i = i;
            for (int j = 0; j < size(word_part); j++) {
                iteration++;
                i++;
            }
        }
    }
    word_f.replace(first_i, iteration, word_newpart);       // формуємо новий стрінг
}

int main()
{
    short question = 0;
    do {
        string word_f, word_part, word_newpart;
        cout << "Input your phrase\n";
        cin >> word_f;
        short a = 0;
        do { 
            cout << "Input the part of phrase you  want to exchange\n";
            cin >> word_part;
            check(word_f, word_part,a);
        } while ( a == false);

        cout << "Input the new underphrase instead of \"" << word_part << "\"\n";
        cin >> word_newpart;
        
        exchange(word_f, word_part, word_newpart);
        cout << word_f << endl;
        do {
            cout << "Want try again? (1 - yes, 0 - no)\n ";
            cin >> question;
            if (question < 0 || question > 1) {
                cout << "Input corectly\n";
            }
        } while (question < 0 || question > 1);
    } while (question != 0);
}

