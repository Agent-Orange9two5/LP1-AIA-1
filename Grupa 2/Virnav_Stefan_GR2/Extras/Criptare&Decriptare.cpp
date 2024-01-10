#include <iostream>
#include <vector>
#include <string>


/*Programul utilizeaza o varianta modificata a algoritmului lui  Vigenère pentru a cripta si decripta
texte formate din litere mari si cifre*/
class Matrix
{
public:
    std::vector<std::string> matrice;
    //Constructor
    Matrix()
    {
        std::string b;
        std::string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
        for (int i = 0; i < a.length(); i++)
        {
            matrice.push_back(a);
            b = matrice[i].begin();
            matrice[i].push_back(b[b.begin()]);
            matrice[i].erase(matrice[i].begin());

        }
            
    }
};
int main()
{
    Matrix a;
}
