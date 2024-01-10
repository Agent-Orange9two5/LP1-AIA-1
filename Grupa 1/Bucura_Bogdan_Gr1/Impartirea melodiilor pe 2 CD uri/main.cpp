#include <iostream>
using namespace std;
int x[50], n, s, a[50], p[1000], z = 1;
int o, j, q, b = 1000, ok = 0, y = 0;



void suma(int l)
{
    s = 0;

        for (int i = 1; i <= l; i++)
            s = s + a[x[i]];
    p[z] = s;
    z++;

}


void repetitiv(int k) {
    for (int i = x[k - 1] + 1; i <= n; i++)
    {
        x[k] = i;
        suma(k);
        if (k < n)
            repetitiv(k + 1);

    }
}

void final(int l)
{
    cout << "cd1:"<<"melodiile   ";

    for (int i = 1; i <= l; i++)
        cout <<x[i] << "  ; ";
    cout << endl;
    cout << "cd2:melodiile   ";
         for (int i = 1; i <= n; i++) 
         {
             ok = 0;
             for (int j = 1; j <= l; j++)
             {
                 if (i == x[j]) {
                     ok = 1;
                 
                 }

             }
             if (ok == 0)
        cout << i << "  ;  "; 
       }
         exit(0);
}


void afis(int l)
{
    s = 0;

    for (int i = 1; i <= l; i++)
        s = s + a[x[i]];
    if (s == q)
        final(l);

}


void back(int k) {
    for (int i = x[k - 1] + 1; i <= n; i++)
    {
        x[k] = i;
        afis(k);
        if (k < n)
            back(k + 1);
    }
}
      
        
        void mijloc()
        {
            for (int i = 1; i <= z; i++)
                if (p[i] > o)
                    o = p[i];
            j = o / 2;
            for (int i = 1; i <= z; i++) {
                if (abs(j - p[i]) < b)
                    b = abs(j - p[i]);
            };
            for (int i = 1; i <= z; i++)
                if (abs(j - p[i]) == b)
                    q = p[i];
        }

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << "intrudu durata" << i << endl;
        cin >> a[i];
        cout << endl;
    }

    repetitiv(1);
    
    mijloc();

    back(1);


    return 0;
}