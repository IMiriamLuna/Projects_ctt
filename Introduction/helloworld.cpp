#include <iostream>

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

    return 0;
}