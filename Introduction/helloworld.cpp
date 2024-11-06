#include <iostream>

namespace operaciones{
    double operacion = 20;

    double sumaop = operacion + 12;
    double restaop = operacion -43;
    double divop =  operacion / 23;
    double multop = operacion * 32;
}

//typedef std::string text_t; //Es la otra forma de usar using

using text_t = std::string;

int main(){
    //std::cout<<"Hello World"<<std::endl;
    std::cout<<"Hello World"<<'\n';
    std::cout<<"It's my first c++ program"<<'\n';

    int x;//Declaración de variable
    x = 5;//Asignación de valor

    int y = 6;

    int suma = y + x;
    int resta = y - x;
    double div = (double)y/(double)x; //Here we convert x and y to double to use decimal
    int mult = y * x;

    std::cout<<"suma: "<<suma<<'\n';
    std::cout<<"resta: "<<resta<<'\n';
    std::cout<<"division: "<<div<<'\n';
    std::cout<<"multiplicacion: "<<mult<<'\n';

    const double PI = 3.14159; //It won't chang if we use const, to identify a constant we have to name it in capital letter
    double radio= 10;
    double circunferencia= 2 * PI * radio;

    std::cout<<"circunferencia: "<<circunferencia<<" cm \n";

    using namespace operaciones; //Llamar el namespace

    std::cout<<"suma op: "<<sumaop<<'\n';  
    std::cout<<"resta op: "<<restaop<<'\n';
    std::cout<<"multiplicacion op: "<<multop<<'\n';
    std::cout<<"division op: "<<divop<<'\n';
    
    using std::cout; //Llamar la funcion cout del namespace std

    //Operadores aritmeticos
    double x2 = 0;
    x2+=9.;
    cout<<"x2 suma: "<<x2<<'\n';
    x2-=1.;
    cout<<"x2 resta: "<<x2<<'\n';
    x2*=3.;
    cout<<"x2 multiplicacion: "<<x2<<'\n';
    x2/=9.;
    cout<<"x2 division: "<<x2<<'\n';

    text_t nombre = "My name is: Miriam Luna";
    cout<<nombre<<'\n';

    return 0;
}