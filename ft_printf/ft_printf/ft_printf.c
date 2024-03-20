#include "./ft_printf.h"

int								ft_conversion(va_list args, const char format);

// Retorna o numero de caracteres impressos
// A função aceita uma string de formato e um numeor variavel de argumentos
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	size_t	idx;

	if (!format)
		return (-1);
	len = 0;
	idx = 0;
	va_start(args, format);
	while (format[idx])
	{
		if (format[idx] == '%')
		{
			len += ft_conversion(args, format[idx + 1]);
			idx++;
		}
		// depois mudar p else:
		else if (format[idx] != '%')
			len += ft_putchar(format[idx]);
		idx++;
	}
	va_end(args);
	return (len);
}
// converte e imprime na tela
// retorna um numero de caracteres printados
int	ft_conversion(va_list args, const char format)
{
	if (format == 'c')
        return (ft_putchar(va_arg(args, int)));
    else if (format == 's')
        return (ft_putstr(va_arg(args, char *)));
    /*else if (format == 'p')
        return (ft_putpointer( ));
    */else if (format == 'd' || format =='i')
        return (ft_putnbr(va_arg(args, int)));
    /*else if (format == 'u')
        return (ft_putunsigned(va_arg(args, unsigned int)));
   */else if (format == 'x' || format == 'X')
        return (ft_puthexadecimal(va_arg(args, unsigned int), format));
    else if (format == '%')
        return (ft_putchar('%'));

    return(0);
}

/*int	main(void)
{
	ft_printf("HELLO\n");
    ft_printf("CHARACTERS: %c %c\n", 'a', 'b');
    ft_printf("STRINGS: %s %s\n", "Good", "bye");
    ft_printf("DECIMAL: %d %i\n", 42, 123.45);
	ft_printf ("DECIMALS: %d %d\n", 1977, 650000L);
	ft_printf ("PRECEDING WITH BLANKS: %10d \n", 1977);
	ft_printf ("PRECEDING WITH ZEROS: %010d \n", 1977);
	ft_printf ("SOME DIFFERENTS RADICES: %d %x %o \n", 255, 255, 255);
	ft_printf ("SOME DIFFERENT RADICES: %#X %#o \n", 255, 255);
	ft_printf ("FLOATS: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
	ft_printf ("WITH TRICK: %*d \n", 5, 10);
    ft_printf("\n");
    
	printf("Hello\n");
	printf("Characters: %c %c\n", 'a', 'b');
	printf("Strings: %s %s\n", "Good", "bye");
	printf("Decimal: %d %f\n", 42, 123.45);
	printf ("Decimals: %d %ld\n", 1977, 650000L);
	printf ("Preceding with blanks: %10d \n", 1977);
	printf ("Preceding with zeros: %010d \n", 1977);
	printf ("Some different radices: %d %x %o \n", 255, 255, 255);
	printf ("Some different radices: %#X %#o \n", 255, 255);
	printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
	printf ("Width trick: %*d \n", 5, 10);  

	return (0);
}*/

/*Pseudocode:
formato do printf original:
printf("Caracter: %--", variavel)
%-- = format (const char *format )
			while correr a string caracter a carecter
					if % existe dentro da string passada no prinftf
							funcção de conversao
					else
						imprimir o que esta na stringh - putchar ?

retorna o numero de caracteres	impresso;

converter o que se recebe no buffer para uma das seguintes opçoes:
	if c
		conversor (putchar)
	else if s;
		conversor (putstr)
	else if p;
		conversor (nova putpointer)
	else if d  ou i (base 10);
		conversor (putnbr novo, chamando o itoa para que um int passe a string e depois imprimiir)
	else if  u (base 10);
		conversor (novo putunsigned)
	else if x ou  X (hexadecimal)
		conversor (novo puthexadecimal)
	else if % (Apenas imprime o %  caso apareça %%)
		conversor  (putchar)
*/
