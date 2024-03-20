#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

int ft_printf(const char *format, ...);
int ft_putchar(char c);
int ft_putstr(char *s);

int	ft_putnbr(int nbr);
int ft_putunsigned (unsigned int nrb);
int ft_puthexadecimal (unsigned int nrb, const char format );

#endif