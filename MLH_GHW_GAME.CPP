#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string winner(string user, string pc) {
    if (user == pc) {
        return "It's a tie!";
    } else if ((user == "rock" && pc == "scissors") ||
               (user == "scissors" && pc == "paper") ||
               (user == "paper" && pc == "rock")) {
        return "You win!";
    } else {
        return "You lose!";
    }
}

int main() {
    srand(time(0)); 
    string choices[] = {"rock", "paper", "scissors"};
    string user, again;

    cout << "Welcome to Rock-Paper-Scissors!" << endl;

    do {
        cout << "Do you want to play? (yes/no): ";
        cin >> again;

        if (again == "no") {
            cout << "Thank you for playing!" << endl;
            break;
        } else if (again == "yes") {
            cout << "Enter your choice (rock, paper, scissors): ";
            cin >> user;

            if (user != "rock" && user != "paper" && user != "scissors") {
                cout << "Invalid input. Please enter rock, paper, or scissors." << endl;
                continue;
            }

            string pc = choices[rand() % 3];

            cout << "Computer chose: " << pc << endl;
            cout << winner(user, pc) << endl;
        } else {
            cout << "Invalid input. Please enter yes or no." << endl;
        }

    } while (true);

    return 0;
}
