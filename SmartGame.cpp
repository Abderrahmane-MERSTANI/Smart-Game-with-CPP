#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 
    int nombreMystere = rand() % 100 + 1; 
    int guess;
    int essais = 0;

    cout << "Bienvenue dans le jeu 'Devine le nombre'!" << endl;
    cout << "J'ai choisi un nombre entre 1 et 100. Essaie de le deviner." << endl;

    do {
        cout << "Votre proposition: ";
        cin >> guess;
        essais++;

        if (guess < nombreMystere) {
            cout << "C'est plus grand!" << endl;
        } else if (guess > nombreMystere) {
            cout << "C'est plus petit!" << endl;
        } else {
            cout << "Bravo! Vous avez trouvé le nombre en " << essais << " essais." << endl;
        }
    } while (guess != nombreMystere);

    return 0;
}
