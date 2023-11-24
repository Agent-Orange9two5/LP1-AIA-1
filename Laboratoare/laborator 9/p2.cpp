#include <iostream>
using namespace std;
// Variabilă globală pentru a urmări progresul recursivității
int i = 0;
// Declarare funcții recursive
void foo1(int);
void foo2(int);
// Definiție funcției foo1
void foo1(int n)
{
  // Verifică condiția pentru a continua recursivitatea
  if (i <= n)
  {
    // Afișează valoarea curentă a i
    cout << i << " ";
    // Incrementarea valorii lui i
    i++;
    // Apelarea funcției foo2, realizând astfel o recursivitate indirectă
    foo2(n);
  }
  else
    return; // Încheie funcția dacă condiția nu este îndeplinită
}
// Definiție funcției foo2
void foo2(int n)
{
  // Verifică condiția pentru a continua recursivitatea
  if (i <= n)
  {
    // Afișează valoarea curentă a i
    cout << i << " ";
    i++;
    // Apelarea funcției foo1, realizând astfel o recursivitate indirectă
    foo1(n);
  }
  else
    return;
}
int main(void)
{
  int n;
  cin >> n;
  foo1(n);
  return 0;
}
