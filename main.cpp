    #include <iostream>

int main() {

    // tipos de variables (muy similar a java)
    // numericos

    int numero = 15;

    std::cout<<"Dime un numero: ";
    std::cin>>numero;
    printf("esto es un printf\n"); //Los printf necesitan un intro al final, como en java
    std::cout<<"Tu numero es: " << numero;

    //std::cout<<numero;
    //std::cout << "Hello, World!" << std::endl;
    return 0;
}
