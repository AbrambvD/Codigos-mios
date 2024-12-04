#include <iostream>
#include <cstdlib> 


int main() {

    std::cout << "Pregunta";
    
    // Empieza aqui el codigo
    std::cin.get(); 
    
    #if defined(_WIN32) || defined(_WIN64)
        system("cls"); 
    #else
        system("clear"); 
    #endif

    // Esto debes ponerlo en la parte del ciclo de los puntos donde despliegue el mensaje de respuesta correcta o incorrecta
    
    std::cout <<"skibidi skibidi";
    std::cin.get();

    #if defined(_WIN32) || defined(_WIN64)
        system("cls"); 
    #else
        system("clear"); 
    #endif
    
    std::cout << "Consola limpia";
    std::cin.get();
    return 0;
}
