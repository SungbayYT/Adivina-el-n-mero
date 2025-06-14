// main.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // Inicializa la semilla aleatoria
    int numero_secreto = std::rand() % 100 + 1; // Número aleatorio entre 1 y 100
    int intento;
    int intentos = 0; // Contador de intentos

    std::cout << "Adivina el número (entre 1 y 100): " << std::endl;

    do {
        std::cout << "Ingresa tu intento: ";
        std::cin >> intento; // Lee el intento del usuario
        intentos++; // Suma 1 al contador de intentos

        if (intento < numero_secreto) {
            std::cout << "Muy bajo, intenta de nuevo." << std::endl;
        } else if (intento > numero_secreto) {
            std::cout << "Muy alto, intenta de nuevo." << std::endl;
        } else {
            std::cout << "¡Felicidades! Adivinaste el número en " << intentos << " intentos." << std::endl;
        }
    } while (intento != numero_secreto);

    return 0;
}