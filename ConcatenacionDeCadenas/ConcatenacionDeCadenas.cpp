#include <iostream>
#include <cstring>
using namespace std;
int main() {
char str1[100], str2[100], result[200];
cout << "Ingrese la primera cadena: ";
cin.getline(str1, 100);
cout << "Ingrese la segunda cadena: ";
cin.getline(str2, 100);
strcpy(result, str1); // Copia la primera cadena en result
strcat(result, str2); // Concatenar la segunda cadena a result
cout << "La cadena concatenada es: " << result << endl;
return 0;
}
