#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Functie pentru a genera un numar intreg aleatoriu intre 0 si 1 (0 pentru rosu, 1 pentru negru)
int generateRandomCard()
{
    return rand() % 2;
}

int main()
{
    srand(time(0)); // Inițializare generator de numere aleatoare

    bool continuaJocul = true;
    int castiguriConsecutive = 0;
    int multiplicatorCastig = 1;

    while (continuaJocul)
    {
        cout << "ROSU sau NEGRU?" << endl;

        int alegereJucator;
        cout << "Alege 0 pentru cartea rosie sau 1 pentru cartea neagra: ";
        cin >> alegereJucator;

        int carteCorecta = generateRandomCard();

        // Verificare daca alegerea jucatorului este corecta
        if (alegereJucator == carteCorecta)
        {
            cout << "Corect! Cartea este ";
            if (carteCorecta == 0)
            {
                cout << "rosie." << endl;
                cout << "__________"<<endl;
                cout << "|       A|"<<endl;
                cout << "|        |"<<endl;
                cout << "|  R     |"<<endl;
                cout << "|    E   |"<<endl;
                cout << "|      D |"<<endl;
                cout << "|        |"<<endl;
                cout << "|A       |"<<endl;
                cout << "**********"<<endl;
            }
            else
            {
                cout << "neagra." << endl;
                cout << "__________"<<endl;
                cout << "|       A|"<<endl;
                cout << "| B      |"<<endl;
                cout << "|  L     |"<<endl;
                cout << "|   A    |"<<endl;
                cout << "|    C   |"<<endl;
                cout << "|     K  |"<<endl;
                cout << "|A       |"<<endl;
                cout << "**********"<<endl;
            }
            castiguriConsecutive++;
            multiplicatorCastig *= 2;
            cout << "Castiguri consecutive: " << castiguriConsecutive << endl;
            cout << "Multiplicare castig: " << multiplicatorCastig << endl;
        }
        else
        {
            cout << "Gresit! Cartea corecta era ";
            if (carteCorecta == 0)
            {
                cout << "rosie." << endl;
                cout << "__________"<<endl;
                cout << "|       A|"<<endl;
                cout << "|        |"<<endl;
                cout << "|  R     |"<<endl;
                cout << "|    E   |"<<endl;
                cout << "|      D |"<<endl;
                cout << "|        |"<<endl;
                cout << "|A       |"<<endl;
                cout << "**********"<<endl;
            }
            else
            {
                cout << "neagra." << endl;
                cout << "__________"<<endl;
                cout << "|       A|"<<endl;
                cout << "| B      |"<<endl;
                cout << "|  L     |"<<endl;
                cout << "|   A    |"<<endl;
                cout << "|    C   |"<<endl;
                cout << "|     K  |"<<endl;
                cout << "|A       |"<<endl;
                cout << "**********"<<endl;
            }
            continuaJocul = false;
        }

        // Verificare daca jucatorul doreste sa continue
        if (continuaJocul)
        {
            char continua;
            cout << "Alta incercare? (D/N): ";
            cin >> continua;
            if (continua != 'D' && continua != 'd')
            {
                continuaJocul = false;
            }
        }

    }

    return 0;
}
