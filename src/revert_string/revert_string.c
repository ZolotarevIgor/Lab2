#include "revert_string.h"
#include <string.h>

void RevertString(char *str)
{
    //если подан null
	if (str == 0)
    {
        return;
    }
    
    //если строка пуста
    if (*str == 0)
    {
        return;
    }

    //указатель на начало строки
    char *start = str;
    //указатель на конец строки
    char *end = start + strlen(str) - 1;
    char temp;

    while (end > start)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        ++start;
        --end;
    }
}

