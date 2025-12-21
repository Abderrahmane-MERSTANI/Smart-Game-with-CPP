#include <iostream>
#include <string>
using namespace std;

int main() {
    string motSecret = "PROGRAMMATION";
    string motAffiche = "";
    char lettre;
    int erreurs = 0;
    const int MAX_ERREURS = 6;
    bool trouve;

    // Initialiser le mot affiché avec des *
    for (int i = 0; i < motSecret.length(); i++) {
        motAffiche += "*";
    }

    cout << "🎮 BIENVENUE DANS LE JEU DU PENDU 🎮\n";

    while (erreurs < MAX_ERREURS && motAffiche != motSecret) {
        cout << "\nMot : " << motAffiche << endl;
        cout << "Erreurs : " << erreurs << "/" << MAX_ERREURS << endl;
        cout << "Entrer une lettre : ";
        cin >> lettre;

        trouve = false;

        for (int i = 0; i < motSecret.length(); i++) {
            if (motSecret[i] == toupper(lettre)) {
                motAffiche[i] = motSecret[i];
                trouve = true;
            }
        }

        if (!trouve) {
            erreurs++;
            cout << "❌ Mauvaise lettre !" << endl;
        } else {
            cout << "✅ Bonne lettre !" << endl;
        }
    }

    if (motAffiche == motSecret) {
        cout << "\n🎉 FELICITATIONS ! Vous avez gagné 🎉\n";
    } else {
        cout << "\n💀 PERDU ! Le mot était : " << motSecret << endl;
    }

    return 0;
}
