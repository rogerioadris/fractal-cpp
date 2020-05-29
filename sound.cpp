/**
 * @Author: Rogério Adriano
 * @Email:  rogerioadris@gmail.com
 * @License: MIT
 */

#include <cstdlib>
#include "def.cpp"

/**
 * Função responsavel por retornar valores formatado em array[int]
 *
 * @return int
 */
unsigned int *soundValues()
{
    static unsigned int n[MAX_VALUE];

    for (auto i = 0; i <= MAX_VALUE; i++)
        n[i] = (rand() % 100);

    return n;
}