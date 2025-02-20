//fun project making burung batu air games 
//beginner level with explaination
//programmer : Aliah Izzati

#include <iostream>
#include <cstdlib> //untuk random number
#include <ctime> //untuk kira masa

using namespace std;

string getComputerChoice() {
    int randomChoice = rand() % 3;

    switch(randomChoice) {   //guna switch case, case boleh je start dari caase 1

        case 0 : return "Batu";
        case 1 : return "Burung";
        case 2 : return "Air";
    }

    return "";
    
  }

  string getResult(string player, string computer) {

    if (player == computer) 
        return "Seri!";
    
    else if( ((player == "Burung")&& (computer == "Air") ) || ((player == "Batu")&& ( computer == "Burung")) || (( player == "Air")&& ( computer == "Batu")))

        return "Anda menang!";
    else
        return "Anda kalah ~~";

        
  }

int main () {
    srand(time(0));
    string playerChoice;
    char playAgain; // ni untuk buat loop, guna do while pun boleh

    do {
        cout << "Jom main Burung, Batu, Air!" << endl;
        cout << "Siapa kalah belanja ayam gunting!" << endl;
        cin >> playerChoice;

        playerChoice[0] = toupper(playerChoice[0]);
        for (size_t i=1; i< playerChoice.length(); i++) {   
            playerChoice[i] = tolower(playerChoice[i]);

        }

        string computerChoice = getComputerChoice();
        cout << "Computer chose :" << computerChoice << endl;
        cout << getResult(playerChoice, computerChoice) << endl;

        cout << "Nak main lagi? Tekan y atay Y" << endl ; //prompt user
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Terima kasih kerana sudi bermain!" << endl;

    return 0;
}

