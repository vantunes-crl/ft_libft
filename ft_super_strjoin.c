#include <stdarg.h>
#include "ft_libft/libft.h"

char *ft_super_strjoin(int num, ...)
{
    va_list args;

    char *str;
    char *temp;
    va_start(args, num);

    int i = 0;
    str = ft_strdup(va_arg(args, char *));
    while (i < num - 1)
    {
        temp = str;
        str = ft_strjoin(str, va_arg(args, char *));
        free(temp);
        i++;
    }
    va_end(args);
    return (str);
}