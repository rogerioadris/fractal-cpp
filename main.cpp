/**
 * @Author: Rogério Adriano
 * @Email:  rogerioadris@gmail.com
 * @License: MIT
 */

#include <iostream>
#include <limits>
#include <unistd.h>
#include "sound.cpp"
#include "drawing.cpp"

/**
 * Selecionar o tipo de exibição.
 *
 * @return int
 */
unsigned short int setDrawing()
{
    unsigned short int type = 0;
    std::cout << "Selecione um formato de exibição entre 1 e 2: ";

    std::cin >> type;
    while (std::cin.fail())
    {
        std::cout << "Número inválido: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> type;
    }

    return type;
}

/**
 * Enviar valores para função de exibição
 *
 * @param type   Tipo de exibição
 * @param values Valores
 */
void sendDrawing(unsigned short int type, unsigned int values[])
{
    switch (type)
    {
    case 1:
        drawConsole(values);
        break;
    case 2:
        drawChart(values);
        break;
    }
}

int main()
{
    unsigned short int drawing = setDrawing();

    while (1)
    {
        sendDrawing(drawing, soundValues());
        sleep(1);
    }

    return EXIT_SUCCESS;
}