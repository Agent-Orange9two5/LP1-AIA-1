#include <iostream>
#include <cctype>

using namespace std;

void conversieLaMajuscule(char str[]){
    for (int i=0;str[i]!='\0'; ++i){
        str[i]=toupper(str[i]);
        }
    }

void conversieLaMinuscule(char str[]){
    for(int i=0; str[i]!='\0'; ++i){
        str[i] = tolower(str[i]);
        }
    }

int main(){
    char input[]="Salut, lume!";

    conversieLaMajuscule(input);
    cout<<"Majuscule:"<<input<<endl;

    conversieLaMinuscule(input);
    cout<<"Minuscule:"<<input<<endl;

    return 0;
}

