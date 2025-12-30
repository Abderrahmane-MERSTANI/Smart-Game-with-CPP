#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits> // pour gérer les erreurs de saisie
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    char rejouer;

    do {
        int min = 1, max = 100;
        int nombreMystere = rand() % (max - min + 1) + min;
        int guess;
        int essais = 0;

        cout << "============================================\n";
        cout << "     🎯 Bienvenue dans 'Devine le nombre' !\n";
        cout << "============================================\n";
        cout << "J'ai choisi un nombre entre " << min << " et " << max << ".\n";
        cout << "Essaie de le deviner !\n\n";

        while (true) {
            cout << "👉 Votre proposition : ";
            cin >> guess;

            // Gestion des erreurs de saisie
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "⚠️  Entrée invalide. Veuillez entrer un nombre.\n";
                continue;
            }

            essais++;

            if (guess < nombreMystere) {
                cout << "🔺 C'est plus grand !\n";
            } else if (guess > nombreMystere) {
                cout << "🔻 C'est plus petit !\n";
            } else {
                cout << "🎉 Bravo ! Vous avez trouvé le nombre en " << essais << " essais.\n";
                break;
            }
        }

        cout << "\nVoulez-vous rejouer ? (o/n) : ";
        cin >> rejouer;
        cout << endl;

    } while (rejouer == 'o' || rejouer == 'O');

    cout << "Merci d'avoir joué ! À bientôt 👋\n";
    return 0;
}
