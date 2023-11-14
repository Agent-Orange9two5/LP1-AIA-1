/*
Analiza problemei:
- "push X" - operatia care adauga valoarea intraga X in stiva
- "pop" - operatia care elimina elementul din varful stivei
- "top" - operatia care afiseaza elementul din varful stivei
*/

#include <iostream>
using namespace std;

int v[1001];
int n,k=0,val,i;
char cer[20];

int main(){
cin>>n;
for(i=1;i<=n;i++){
    cin.get();
    cin.get(cer, 20);
    if(cer[0]=='t') cout<<v[k]<<endl;
    else if (cer[0]=='p' && cer[1]=='o'){
        if(k>0) k--;
    }
    else{
        val=0;
        int poz=5;
        bool neg=false;
        if(cer[poz]=='-'){
            neg=true;
            poz++;
        }
        while(cer[poz]>='0' && cer[poz]<='9'){
            val=val*10+(cer[poz]-'0');
            poz++;
        }
        if(neg) val=-val;
        v[++k]=val;
    }
}
return 0;
}
