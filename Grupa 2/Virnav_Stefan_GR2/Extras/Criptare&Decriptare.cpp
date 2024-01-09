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
    std::string a="ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    for(int i=0;i<36;i++)
        matrice.push_back(a);
    }
};
int main()
{
        Matrix a;
}
