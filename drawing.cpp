/**
 * @Author: Rogério Adriano
 * @Email:  rogerioadris@gmail.com
 * @License: MIT
 */

#include <iostream>
#include "def.cpp"

/**
 * Exibir valores no console.
 *
 * @param values
 */
void drawConsole(unsigned int values[])
{
    std::cout << std::endl;

    for (auto i = 0; i <= MAX_VALUE; i++)
        std::cout << values[i] << "\t";
}

/**
 * Exibir pipe "|" correspondente ao valor no console.
 *
 * @param values
 */
void drawChart(unsigned int values[])
{
    std::cout << "\e[H\e[2J" << KRED;
    for (auto x = 0; x <= MAX_VALUE; x++)
    {
        for (auto y = 0; y <= values[x]; y++)
            std::cout << "|";
        std::cout << std::endl;
    }

    std::cout << KNRM;
}