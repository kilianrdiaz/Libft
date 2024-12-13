#include "libft.h"

long int ft_atol(const char *str)
{
    int i = 0;
    long int result = 0;
    int sign = 1;

    // Saltar espacios en blanco (opcional, según la necesidad)
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    
    // Comprobar signo
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    // Convertir cada carácter a número
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        
        // Comprobar desbordamiento (antes de seguir calculando)
        if ((result * sign) > INT_MAX)
            return ((long int)INT_MAX + 1); // Esto nos permite saber que es mayor que INT_MAX
        if ((result * sign) < INT_MIN)
            return ((long int)INT_MIN - 1); // Esto nos permite saber que es menor que INT_MIN
        
        i++;
    }
    return (result * sign);
}
