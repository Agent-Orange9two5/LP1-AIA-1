#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;
long long generator_id(char s[],char p[],int a){
    if(a==0)a++;
    int x=0;
    long long t=1;
    for(int k=0;k<strlen(s);++k){
        x+=s[k];
        if(k%3==0){
            t=t*1000+x;
            x=0;
        }
    }
    while(t>10000000){
        t=t/a+1000*t%a;
    }
    for(int k=0;k<strlen(p);++k){
        x+=p[k];
        if(k%3==0){
            t=t*1000+x;
            x=0;
        }
    }
    while(t>10000000){
        t=t/a+1000*t%a;
    }
    t+=a;
    return t;
}
struct carte{
    char *titlu,*autor;
    int an;
    long long id;
};
struct biblioteca{
    carte c;
}*v;
int i=1;
int exista(long long x){
    for(int j=0;j<i-1;++j){
        if(x==v[j].c.id){
            return 1;
        }
    }
    return 0;
}
char s[]="PRESS+ENTER";
void adauga(){
    v=(biblioteca*)realloc(v,i*sizeof(biblioteca));
    cin.get();
    cout<<"Cartea "<<i<<": "<<endl;
    cout<<"     Titlu: ";
    v[i-1].c.titlu=(char*)calloc(50,sizeof(char));
    cin.get(v[i-1].c.titlu,50);
    cin.get();
    cout<<"     Autor: ";
    v[i-1].c.autor=(char*)calloc(50,sizeof(char));
    cin.get(v[i-1].c.autor,50);
    cin.get();
    cout<<"     An Aparitie: ";
    cin>>v[i-1].c.an;
    cout<<"     ID: "<<generator_id(v[i-1].c.titlu,v[i-1].c.autor,v[i-1].c.an)<<endl<<"------"<<endl;
    v[i-1].c.id=generator_id(v[i-1].c.titlu,v[i-1].c.autor,v[i-1].c.an);
    if(i>1){
        while(exista(v[i-1].c.id)){
            cin.get();
            cout<<"Cartea "<<i<<" exista deja. Adauga alta carte."<<endl<<"------"<<endl;
            cout<<"Cartea "<<i<<": "<<endl;
            cout<<"     Titlu: ";
            cin.get(v[i-1].c.titlu,50);
            cin.get();
            cout<<"     Autor: ";
            cin.get(v[i-1].c.autor,50);
            cin.get();
            cout<<"     An Aparitie: ";
            cin>>v[i-1].c.an;
            cout<<"     ID: "<<generator_id(v[i-1].c.titlu,v[i-1].c.autor,v[i-1].c.an)<<endl<<"------"<<endl;
            v[i-1].c.id=generator_id(v[i-1].c.titlu,v[i-1].c.autor,v[i-1].c.an);
        }
    }
    ++i;
}
void afisare(int x){
    cout<<endl<<" -> Titlu: "<<v[x].c.titlu<<endl;
    cout<<" -> Autor: "<<v[x].c.autor<<endl;
    cout<<" -> An: "<<v[x].c.an<<endl;
    cout<<" -> ID: "<<v[x].c.id<<endl;
    return;
}
char t[50];
void dupa_titlu(){
    cout<<"Introduceti titlul dorit: ";
    cin.get(t,50);
    cin.get();
    int ok=0;
    for(int j=0;j<i-1;++j){
        if(strcmp(v[j].c.titlu,t)==0){
            ok++;
            cout<<"Cartea cautata este pe pozitia "<<j+1;
            afisare(j);
        }
    }
    if(ok==0){
        cout<<"Titlul dorit nu se afla in biblioteca."<<endl;
    }
    return;
}
void dupa_autor(){
    cout<<"Introduceti autorul dorit: ";
    cin.get(t,50);
    cin.get();
    int ok=0;
    for(int j=0;j<i-1;++j){
        if(strcmp(v[j].c.autor,t)==0){
            ok++;
            cout<<"Cartea cautata este pe pozitia "<<j+1;
            afisare(j);
        }
    }
    if(ok==0){
        cout<<"Autorul dorit nu se afla in biblioteca."<<endl;
    }
    return;
}
void dupa_an(){
    int t;
    cout<<"Introduceti anul aparitiei dorit: ";
    cin>>t;
    int ok=0;
    for(int j=0;j<i-1;++j){
        if(v[j].c.an==t){
            ok++;
            cout<<"Cartea cautata este pe pozitia "<<j+1;
            afisare(j);
        }
    }
    if(ok==0){
        cout<<"Anul aparitiei dorit nu se afla in biblioteca."<<endl;
    }
    return;
}
void cauta(){
    if(!v[0].c.id){
        cout<<"Nu este nici o carte introdusa. "<<endl<<endl;
        return ;
    }
    int x=1;
    printf("\nCauta dupa: \n --> %s Titlu = 1 \n --> %s Autor = 2 \n --> %s An aparitie = 3 \n------\nPentru a iesi din loop %s 0\n-------\n",s,s,s,s);
    while(x){
        cout<<"Citeste comanda : ";
        cin>>x;
        cin.get();
        switch (x){
            case 1:
                dupa_titlu();
                break;
            case 2:
                dupa_autor();
                break;
            case 3:
                dupa_an();
                break;
            default:
                break;
        }
        if(!x)printf("------\nAti iesit din loop-ul de cautare.\n\n");
    }
}
int poz(long long x){
    for(int j=0;j<i-1;++j){
        if(x==v[j].c.id){
            return j;
        }
    }
    return 0;
}
void sterge(){
    if(!v[0].c.id){
        cout<<"Nu este nici o carte introdusa. "<<endl<<endl;
        return ;
    }
    long long x=1;
    printf("\nStergeti? \n ->Pentru a opri stergerea : %s 0\n",s);
    while(x){
        cout<<"Introduceti ID-ul pentru stergerea cartii dorite: ";
        cin>>x;
        if(!exista(x)){
            cout<<"-> ID invalid / Oprire stergere."<<endl<<"------"<<endl;
        }else{
            if(poz(x)==i-1){
                i--;
                    v=(biblioteca*)realloc(v,i*sizeof(biblioteca));
                    cout<<"Stergere completa."<<endl<<endl;
            }else{
                if(poz(x)>=0){
                    for(int k=poz(x);k<i-2;++k){
                        v[k]=v[k+1];
                    }
                    i--;
                    v=(biblioteca*)realloc(v,i*sizeof(biblioteca));
                    cout<<"Stergere completa."<<endl<<endl;
                }
            }
        }
    }
}
FILE *f;
int okkk=0;
void salvareinfisier(){
    if(!v[0].c.id){
        cout<<"Nu este nici o carte introdusa. "<<endl<<endl;
        return ;
    }
    f=fopen("biblioteca.txt","w");
    if(f==NULL){
        cout<<"EROARE."<<endl;
        return;
    }
    for(int k=0;k<i-1;++k){
        fprintf(f,"Cartea %d:\n->Titlu: %s\n->Autor: %s\n->An aparitie: %d\n->ID: %d\n\n",k+1,v[k].c.titlu,v[k].c.autor,v[k].c.an,v[k].c.id);
    }
    okkk++;
    cout<<"Salvare completa."<<endl<<endl;
    fclose(f);
}
void stergedinfisier(){
    f=fopen("biblioteca.txt","w");
    if(!okkk)cout<<"Fisier nu contine nici o carte."<<endl<<endl;
    else cout<<"Stergerea fisierului este completa. "<<endl<<endl;
}
int main(){
    v=(biblioteca*)calloc(0,sizeof(biblioteca));
    if(v==NULL){
        cout<<"EROARE LA ALOARE.";
        return 0;
    }
    int x=1;
    printf("\n (P) = LOOP Principal\n-------\n %s 1 = Adauga carte\n %s 2 = Cautare carte\n %s 3 = Sterge carte\n %s 4 = Salvare in Fisier\n %s 5 = Stergere din fisier\n-------\n Pentru a iesi din loop %s 0\n-------\n",s,s,s,s,s,s);
    while(x){
        cout<<"(P) Citeste comanda : ";
        cin>>x;
        switch (x){
            case 1:
                adauga();
                break;
            case 2:
                cauta();
                break;
            case 3:
                sterge();
                break;
            case 4:
                salvareinfisier();
                break;
            case 5:
                stergedinfisier();
                break;
            default:
                break;
        }
        if(!x)printf("------\nAti iesit din loop.\n");
    }
    return 0;
}
