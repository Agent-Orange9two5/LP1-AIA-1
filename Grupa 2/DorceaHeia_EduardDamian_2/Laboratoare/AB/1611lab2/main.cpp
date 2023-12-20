#include <iostream>
#include <cctype>

using namespace std;

int numeraAlfabetice(char str[]){
    int numar=0;
    for(int i=0; str[i]!='\0'; ++i){
        if(isalpha(str[i])){
            numar++;
        }
    }
return numar;
}
int main(){
    char input[]="Salut, 123!";

    int numeraAlfabetice = numeraAlfabetice(input);
    cout<<"Numarul de caractere alfabetice:"<<numeraAlfabetice<<endl;

    return 0;
}
