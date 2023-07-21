#include "main.h"
#include <unistd.h>

/**
 *
 * Function to printe a single char to the std output
 *
 */

int _putchar(char c) 
{
    return write(1, &c, 1);
}
