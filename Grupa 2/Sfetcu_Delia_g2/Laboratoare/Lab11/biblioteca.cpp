
//!Nu e terminata!


/* Biblioteca Digitala

 Functionalitati:
  - O structura de tip Carte, care sa contina urmatoarele info: titlu, autor, anul publicarii si un identificator unic
    // Pentru aceasta functionalitate vom crea un struct care sa contina toate tipurile de date necesare ✔
 
  - Adaugarea de carti: Utilizatorul poate introduce informatiile despre o carte noua si aceasta va fi adaugata in biblioteca
  // Pentru aceaste functionalitate vom cere utilizatorului sa introduca, in ordine, toate datele necesare ( titlu, autor, anul publicarii )
  
  - Cautarea cartilor: Utilizatorul poate cauta carti in biblioteca dupa titlu, autor sau anul publicarii.
  // Prima idee - Cautare folosind strchr
  
  - Stergerea cartilor: Utilizatorul poate sterge o carte din biblioteca, introducand identificatorul unic al cartii.
  // Aceasta functionalitate va functiona asemanator cu cea de adaugare, avand la final o verificare - in cazul in care toate datele sunt 100% corecte, cartea va fi stersa.
  
  - Salvarea si stergerea bibliotecii in / din fisier: Programul ar trebui sa permita salvarea bibliotecii intr-un fisier text si stergerea acesteia din fisier.
  
  User Flow: Se ruleaza programul. 
 */
 


 #include <iostream>
 #include <cstdlib>
 #include <fstream>
 using namespace std;

 struct Carte{
    char titlu;
    char autor;
    int anul_publicarii;
    int long cod;
    fstream file;
    public:
    void AdaugaCarte();
    void ArataToateCartile();
    void AlegeOcarte();
 }obj;


int main(){
    Carte carte;
    char alegere;
    cout << "-----------------------------" << endl;
    cout << "1.Vezi toate cartile." << endl;
    cout << "2.Alege o carte." << endl;
    cout << "3.Adauga o carte." << endl;
    cout << "4.Iesi din librarie." << endl;
    cout << "-----------------------------" << endl;
    cout << "Introdu varianta aleasa: ";
    cin >> alegere;


    switch (alegere)
    {
    case '1':
            cin.ignore();
            obj.ArataToateCartile();
        break;
        case '2':
            cin.ignore();
            obj.AlegeOcarte();
        break;
        case '3':
            cin.ignore();
            obj.AdaugaCarte();
        break;
        case '4':
            return 0;
        break;
        default:
            cout<<"Operatiune invalida!";
    }
    return 0;
}

void Carte :: AdaugaCarte(){
    cout << "\nAdauga codul cartii: ";
    cin >> cod;
    cout << "\nAdauga titlul cartii: ";
    cin >> titlu;
    cout << "\nAdauga numele autorului cartii: ";
    cin >> autor;
    file.open("bookData.txt",ios :: out | ios :: app);
    file<<cod<<"*"<<titlu<<"*"<<autor<<endl;
    file.close();
}
void Carte :: ArataToateCartile(){
    file.open("bookData.txt",ios :: in);
     
}
