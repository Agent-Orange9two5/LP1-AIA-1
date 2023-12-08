#include<iostream>
using namespace std;
int main(){
    //declaram variabilele
    int v[15], min = 2e9, max = -2e9, s = 0;
    //parcurgem vectorul(declaram i-ul in for ca sa ocupam mai putina memorie :)
    for(int i = 0; i < 15; i++)
    {
        //citim vectorul 
        cin >> v[i]; 
        //cautam maximul
        if(v[i] > max)
            max = v[i];
        //cautam minimul
        if(v[i] < min)
            min = v[i];
        //calculam suma
         s = s + v[i];
        //afisam numerele din vector divizibile cu 5 & 11
        if(v[i] % 5 == 0 && v[i] % 11 == 0)
        cout << "Elementele divizibile cu 5 si 11 sunt : " << v[i] << " ";
    }
    //afisam valorile care au mai ramas de afisat
    cout << endl;
    cout <<"Minimul este: " << min << endl;
    cout << "Maximul este: " << max << endl;
    cout << "Suma tuturor elementelor vectorului este: " << s;
}
