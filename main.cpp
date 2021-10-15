#include <iostream>
#include <math.h>
using namespace std;
int main(void){

    double radio, area;

    cout << "Ingrese el radio de la circunferencia" << endl;
    cin >> radio;

    area = M_PI * pow(radio,2);

    cout << "El Area de la circunferencia es: "<< area <<endl;

    return 0;
}
