#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <limits>

using namespace std;

vector<string> simboluri = {"Cireasa", "Lamaie", "Portocala", "Pruna", "Clopot", "Coroana", "Tiara"};

// Functie pentru a genera o rotire aleatorie a rolelor
vector<int> spinReels()
{
    vector<int> role(3);
    for (int &rola : role)
    {
        rola = rand() % simboluri.size(); // Simularea unei role cu mai multe simboluri
    }
    return role;
}

// Functie pentru afisarea rolele
void displayReels(const vector<int>& role)
{
    for (int rola : role)
    {
        cout << simboluri[rola] << " ";
    }
    cout << endl;
}

// Functie pentru a verifica daca jucatorul a castigat
bool checkWin(const vector<int>& role)
{
    return (role[0] == role[1] && role[1] == role[2]);
}

// Functie pentru a citi un pariu valid de la utilizator
int readBet(int balanta)
{
    int pariu;
    while (true)
    {
        cout << "Introduceti pariul: ";
        cin >> pariu;
        if (cin.fail() || pariu <= 0 || pariu > balanta)
        {
            cin.clear(); // Curata flag-ul de eroare al cin
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora orice input gresit
            cout << "Pariu invalid. Va rugam introduceti o valoare intreaga pozitiva care sa nu depaseasca balanta curenta." << endl;
        }
        else
        {
            break;
        }
    }
    return pariu;
}

// Functie pentru a citi raspunsul de continuare a jocului
char readContinueResponse()
{
    char alegere;
    while (true)
    {
        cout << "Vrei sa mai incerci? (d/n): ";
        cin >> alegere;
        if (alegere == 'd' || alegere == 'D' || alegere == 'n' || alegere == 'N')
        {
            break;
        }
        else
        {
            cout << "Optiune invalida. Introduceti 'd' pentru Da sau 'n' pentru Nu." << endl;
        }
    }
    return alegere;
}

int main()
{
    srand(time(0)); // Initializare generator de numere aleatoare

    bool continuaJocul = true;
    int balanta = 100; // Balanta initiala

    while (continuaJocul && balanta > 0)
    {
        cout << "Balanta curenta: $" << balanta << endl;
        int pariu = readBet(balanta);

        cout << "Se invart rolele..." << endl;
        cout << "_____________________________"<< endl;
        cout << "|  ___   ||  ___   ||  ___  |   ()"<< endl;
        cout << "|     |  ||     |  ||     | |  /"<< endl;
        cout << "|   __|  ||   __|  ||   __| | /"<< endl;
        cout << "|   |    ||   |    ||   |   |/"<< endl;
        cout << "|   .    ||   .    ||   .   |"<< endl;
        cout << "******************************"<< endl;
        cout << "******************************"<< endl;

        vector<int> role = spinReels();
        displayReels(role);

        if (checkWin(role))
        {
            cout << "______________________________"<< endl;
            cout << "|  ____  ||  ____  ||  ____  |"<< endl;
            cout << "|     /  ||     /  ||     /  |"<< endl;
            cout << "|    /   ||    /   ||    /   |"<< endl;
            cout << "|   /    ||   /    ||   /    |-------()"<< endl;
            cout << "|        ||        ||        |"<< endl;
            cout << "******************************"<< endl;
            cout << "******************************"<< endl;
            cout << "Ai castigat $" << pariu * 7 << "!" << endl;
            balanta += pariu * 7;
        }
        else
        {
            cout << "______________________________"<< endl;
            cout << "| x    x || x    x || x    x |"<< endl;
            cout << "|  x  x  ||  x  x  ||  x  x  |"<< endl;
            cout << "|   xx   ||   xx   ||   xx   |"<< endl;
            cout << "|   xx   ||   xx   ||   xx   |-------()"<< endl;
            cout << "|  x  x  ||  x  x  ||  x  x  |"<< endl;
            cout << "| x    x || x    x || x    x |"<< endl;
            cout << "******************************"<< endl;
            cout << "******************************"<< endl;
            cout << "Ai pierdut. Mai incearca!" << endl;
            balanta -= pariu;
        }

        if (balanta <= 0)
        {
            cout << "Ai ramas fara bani. Joc terminat!" << endl;
            break;
        }

        char alegere = readContinueResponse();
        if (alegere == 'n' || alegere == 'N')
        {
            continuaJocul = false;
        }
    }

    cout << "Balanta ta finala este $" << balanta << endl;
    return 0;
}
