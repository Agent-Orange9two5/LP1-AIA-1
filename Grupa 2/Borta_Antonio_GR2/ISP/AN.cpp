#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

// Functie pentru a genera un numar intreg aleatoriu intre min si max
int generateRandomNumber(int min, int max)
{
    return rand() % (max - min + 1) + min;
}

// Functie pentru a calcula valoarea unei carti
int cardValue(int card)
{
    if (card > 10)
    {
        return 10; // Figurile (Regina, Rege, Valetul) au valoarea 10
    }
    else
    {
        return card; // Valorile normale ale cartilor sunt egale cu numarul lor
    }
}

int main()
{
    srand(time(0)); // Inițializare generator de numere aleatoare

    // Inițializare variabile pentru joc
    const int numarCarti = 52;
    vector<int> pachet(numarCarti);
    for (int i = 0; i < numarCarti; ++i)
    {
        pachet[i] = i % 13 + 1; // Generare pachet de carti (1 - 13)
    }

    // Amestecare pachetului de carti
    for (int i = 0; i < numarCarti; ++i)
    {
        int randomIndex = generateRandomNumber(0, numarCarti - 1);
        swap(pachet[i], pachet[randomIndex]);
    }

    int scorJucator = 0;
    int scorDealer = 0;

    // Oferta initiala a cartilor
    scorJucator += cardValue(pachet.back());
    pachet.pop_back();
    scorJucator += cardValue(pachet.back());
    pachet.pop_back();

    scorDealer += cardValue(pachet.back());
    pachet.pop_back();
    scorDealer += cardValue(pachet.back());
    pachet.pop_back();

    cout << "Scorul jucatorului: " << scorJucator << endl;
    cout << "Scorul dealerului: " << scorDealer << endl;

    // Verificare daca jucatorul sau dealerul au blackjack
    if (scorJucator == 21)
    {
        cout << "Blackjack! Jucatorul castiga!" << endl;
        return 0;
    } else if (scorDealer == 21)
    {
        cout << "Blackjack! Dealerul castiga!" << endl;
        return 0;
    }

    // Jocul efectiv
while (scorJucator <= 21)
{
    char alegere;
    cout << "Doriti sa luati alta carte? (D/N): ";
    cin >> alegere;
    if (alegere == 'D' || alegere == 'd')
    {
        scorJucator += cardValue(pachet.back());
        pachet.pop_back();
        cout << "Scorul jucatorului: " << scorJucator << endl;
    }
    else if (alegere == 'N' || alegere == 'n')
    {
        break;
    }
    else
    {
        cout << "Va rugam sa introduceti o optiune valida (D/N)!" << endl;
    }
}

// Verificare scor jucator
if (scorJucator > 21)
{
    cout << "Ai depasit 21! Dealerul castiga!" << endl;
    return 0; // Jocul se încheie dacă jucătorul depășește 21
}

// Dealerul trage cărți până când scorul său este mai mare sau egal cu 17
while (scorDealer < 17)
{
    scorDealer += cardValue(pachet.back());
    pachet.pop_back();
    cout << "Scorul dealerului: " << scorDealer << endl;
}

// Verificare scor dealer
if (scorDealer > 21 || scorJucator > scorDealer)
{
    cout << "Jucatorul castiga!" << endl;
}
else if (scorDealer > scorJucator)
{
    cout << "Dealerul castia!" << endl;
}
else
{
    cout << "Remiza!" << endl;
}
}
