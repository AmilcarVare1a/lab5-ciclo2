#include <iostream>
using namespace std;

int main()

{

  int opcion;
  float radio, lado, base, altura, area;

  cout << "Area de las figuras" << endl;
  cout << "1,Circulo" << endl;
  cout << "2, Cuadrado" << endl;
  cout << "3, Triangulo" << endl;
  
  cout << "Elige una opcion:";
  cin >> opcion;

  switch (opcion) {

    case 1:
       cout << "Ingrese el radio del circulo:";
       cin >> radio;

       area = 3.1416 * radio * radio;
       cout << "El area del circulo es" << area;
       break;


    case 2:
       cout << "Ingrese el lado del cuadrado:";
       cin >> lado;

       area = lado * lado;
       cout << "El area del cuadrado es: " << area;
       break;

    case 3:
       cout << "Ingrese la base del triangulo:";
       cin >> base;

       cout << "Ingrese la altura del triangulo:";
       cin >> altura;

       area = (base * altura) / 2;
       cout << "El area del triangulo es" << area;
       break;


    default:
       cout << "Opcion invalida";
       break;
  }



  return 0;
}