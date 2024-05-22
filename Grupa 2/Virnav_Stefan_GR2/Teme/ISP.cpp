#include <iostream>
#include <sstream>
#include <cstring>
#include <windows.h>
#include <fstream>
#include <string>
using namespace std;

struct user {
    string username;
    string password;
    int cash=0;
};
user current_user;

void regist(fstream& f) {
    string holder;
    f.clear();
        // adaugare user
        cout << "\t|Introduceti username-ul|" << endl << "\t   Raspuns:";
        cin.ignore();
        cin>>holder;
        f << holder << " ";
        cout << "\t|Introduceti parola dorita|" << endl << "\t   Raspuns:";
        cin>>holder;
        f <<holder<< " ";
        f << "0" << " ";
        f << endl;
        cout << "\t|User has been added successfully|";
        Sleep(1500);
        system("cls");
}

void list(fstream& f) {
    f.clear();
    f.seekg(0, ios::beg); // Move the file pointer to the beginning of the file
    string line;
    if (f.is_open()) {
        while (getline(f, line)) {
            cout << line << "\n";
        }
        Sleep(1500);
        system("cls");
    }
}

int login(fstream& f) {
    f.clear();
    f.seekg(0, ios::beg); // Move the file pointer to the beginning of the file
    int checked = 0;
    cout << "\t|Introduceti username-ul|" << endl << "\t   Raspuns:";
    string temp_user;
    cin >> temp_user;
    cout << "\t|Introduceti parola |" << endl << "\t   Raspuns:";
    string temp_parola;
    cin >> temp_parola;
    string line;
    string check_user;
    string check_parola;
    string holder;
    if (f.is_open()) {
        while (getline(f, line)) {
            stringstream ss(line);
            getline(ss, holder, ' ');
            check_user = holder;
            getline(ss, holder, ' ');
            check_parola = holder;
            if (temp_user == check_user && temp_parola == check_parola) {
                checked = 1;
                getline(ss, holder);
                current_user.username = check_user;
                current_user.password = check_parola;
                current_user.cash = stoi(holder);
                return checked;
            }
        }
        Sleep(1500);
        system("cls");
    }
    return checked;
}

int main() {
    fstream f("users.txt", ios::in | ios::out | ios::app);
    if (!f.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    int condition = 1;
    int response;
    int unlogged= 1;
    while (unlogged)
    {
        cout << "    __  __________________       __     ______           _           "<<endl;
        cout << "   / / / /_  __/ ____/ __ )___  / /_   / ____/___ ______(_)___  ____ "<<endl;
        cout << "  / / / / / / / /   / __  / _ '/ __/  / /   / __ `/ ___/ / __ '/ __ '"<<endl;
        cout << " / /_/ / / / / /___/ /_/ /  __/ /_   / /___/ /_/ (__  ) / / / / /_/ /" << endl;
        cout <<"'_____/ /_/ /_____/_____/'___/'__/   '____/'__,_'____/_/_/ /_/'____/ "<< endl;
        cout << endl;
        cout << "\t\t=================================\n";
        cout << "\t\t|" << "Selectati ce doriti sa faceti:\t|" << endl << "\t\t|-------------------------------|" << endl
            << "\t\t|\t[1]Register user\t|" << endl << "\t\t|\t[2]Login \t\t|"
            << endl << "\t\t|\t[3]Iesire\t\t|" << endl
            << "\t\t|\t\t\t\t|" << endl << "\t\t=================================\n" << endl << "\t\t\t   Raspuns:";
        cin >> response;
        switch (response)
        {
        case 1: {
            Sleep(250);
            system("cls");
            regist(f);
            break;
        }
        case 2: {
            Sleep(250);
            system("cls");
            if (login(f) == 1)
            {
                cout << "\t|Logare reusita|";
                unlogged = 0;
            }
            else
                cout << "\t|Logare esuata|";
            Sleep(1000);
            system("cls");
            break;
        }
        case 3:
        {
            system("cls");
            cout << "\t|PROGRAMUL SE INCHIDE. MULTUMIM PENTRU UTILIZARE|" << endl;
            Sleep(2000);
            system("cls");
            f.close();
            return 0;
        }
        }
    }
    while (condition) {
        cout << "    __  __________________       __     ______           _           " << endl;
        cout << "   / / / /_  __/ ____/ __ )___  / /_   / ____/___ ______(_)___  ____ " << endl;
        cout << "  / / / / / / / /   / __  / _ '/ __/  / /   / __ `/ ___/ / __ '/ __ '" << endl;
        cout << " / /_/ / / / / /___/ /_/ /  __/ /_   / /___/ /_/ (__  ) / / / / /_/ /" << endl;
        cout << "'_____/ /_/ /_____/_____/'___/'__/   '____/'__,_'____/_/_/ /_/'____/ " << endl;
        cout << endl;
        cout << "\t\t=================================\n";
        cout << "\t\t|" << "Selectati ce doriti sa faceti:\t|" << endl << "\t\t|-------------------------------|" << endl
            << "\t\t|\t[1]Register user\t|" << endl << "\t\t|\t[2]Stats\t\t|" <<endl<< "\t\t|\t[3]Iesire\t\t|" << endl
            << "\t\t|\t\t\t\t|" << endl << "\t\t=================================\n" << endl << "\t\t\t   Raspuns:";
        cin >> response;
        switch (response)
        {
            case 1: 
            {
                Sleep(250);
                system("cls");
                regist(f);
                break;
            }
            case 2:
            {
                Sleep(250);
                system("cls");
                cout << "    __  __________________       __     ______           _           " << endl;
                cout << "   / / / /_  __/ ____/ __ )___  / /_   / ____/___ ______(_)___  ____ " << endl;
                cout << "  / / / / / / / /   / __  / _ '/ __/  / /   / __ `/ ___/ / __ '/ __ '" << endl;
                cout << " / /_/ / / / / /___/ /_/ /  __/ /_   / /___/ /_/ (__  ) / / / / /_/ /" << endl;
                cout << "'_____/ /_/ /_____/_____/'___/'__/   '____/'__,_'____/_/_/ /_/'____/ " << endl;
                cout << endl;
                cout << endl;
                cout << "\t\t\tSTATS"<<endl;
                cout << "\t\tUsername      " << current_user.username << endl;
                cout << "\t\tPassword      " << current_user.password << endl;
                cout << "\t\tCash          " << current_user.cash << endl;
                Sleep(5000);
                system("cls");
                break;

            }
            case 3:
            {
                system("cls");
                cout << "\t|PROGRAMUL SE INCHIDE. MULTUMIM PENTRU UTILIZARE|" << endl;
                Sleep(2000);
                system("cls");
                condition = 0; // exit the loop
            }
            case 69420:
            {
                Sleep(250);
                system("cls");
                list(f);
                break;
            }
            
        }
    }
    f.close();
    return 0;
}
