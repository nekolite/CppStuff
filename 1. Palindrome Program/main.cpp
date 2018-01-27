#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string things, temp;
    char answer;

    do {

        cout << "Enter a word : ";
        cin >> things;

        temp = things;

        transform(things.begin(), things.end(), things.begin(), ::tolower);
        transform(temp.begin(), temp.end(), temp.begin(), ::tolower);

        reverse(temp.begin(), temp.end());

        if(things == temp) {

            cout << "\n" << things << " is a polindrome!" << endl;

            cout << "\nCheck again? (y/N) : ";
            cin >> answer;

            cout << endl;

        } else {

            cout << "\n" << things << " isn't a polindrome!" << endl;

            cout << "\nCheck again? (y/N) : ";
            cin >> answer;

            cout << endl;
        }

    } while(answer == 'y' || answer == 'Y');

    return 0;
}
