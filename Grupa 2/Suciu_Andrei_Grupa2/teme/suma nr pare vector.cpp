//suma numerelor pare dintr-un vector//

#include <iostream>

using namespace std;

int main()
{
   int v[101],s=0,i,n;

   cout<<"Introduceti numarul de elemente din vector. ";
   cin>>n;

   for(i=0;i<n;i++)
   {
        cout<<"Introduceti elementul cu numarul "<<i+1<<": ";
        cin>>v[i];
        if(v[i]%2==0)
        {
            s = s + v[i];
        }
   }
   cout<<"Suma elementelor pare este: "<<s;
   return 0;
}
