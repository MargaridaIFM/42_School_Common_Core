#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char c = '\0';
	char str[10] = "hello";

	printf("TESTING FT_ISALPHA \n\n");
	printf("my: %d\n", ft_isalpha(c));
	printf("original: %d\n\n", isalpha(c));

	printf("TESTING FT_ISDIGIT \n\n");
	printf("my: %d\n", ft_isdigit(c));
	printf("original: %d\n\n", isdigit(c));

	printf("TESTING FT_ISALNUM \n\n");
	printf("my: %d\n", ft_isalnum(c));
	printf("original: %d\n\n", isalnum(c));

	printf("TESTING FT_ISASCII \n\n");
	printf("my: %d\n", ft_isascii(c));
	printf("original: %d\n\n", isascii(c));

	printf("TESTING FT_ISPRINT \n\n");
	printf("my: %d\n", ft_isprint(c));
	printf("original: %d\n\n", isprint(c));

	printf("TESTING FT_STRLEN \n\n");
	printf("my: %lu\n", ft_strlen(str));
	printf("original: %lu\n\n", strlen(str));

	char teste[10];
	char teste2[10];
	size_t len = 10;
	ft_memset(teste, 'I', len);

	printf("TESTING FT_MEMSET \n\n");
	printf("my: %s\n", teste);
	ft_memset(teste2, 'I', len);
	printf("original: %s\n\n", teste2);

	char str2[10] = "Hello";
	printf("TESTING FT_BZERO \n\n");
	printf("Before zeroing: %s\n", str2);
	ft_bzero(str2, 3);
	printf("After zeroing: %s\n\n", str2);

	char *src = "hello";
	char dest[3];
	printf("TESTING FT_MEMCPY \n\n");
	printf("Before memcpy: %s\n", dest);
	ft_memcpy(dest, src, 3);
	printf("After memcpy: %s\n\n", dest);

	char dest_memmove[10] = "hello";
	char src_memmove[10] = "world";

	printf("TESTING FT_MEMMOVE \n\n");
	printf("before: str1 %s str2 %s\n", dest_memmove, src_memmove);
	ft_memmove(dest_memmove, src_memmove, 4);
	printf("after: str1 %s str2 %s\n\n", dest_memmove, src_memmove);

	char strlcpy_dest[5] = "hello";
	char strlcpy_src[5] = "world";

	printf("TESTING FT_STRLCPY \n\n");
	printf("antes: %s\n", strlcpy_dest);
	ft_strlcpy(strlcpy_dest, strlcpy_src, 3);
	printf("depois: %s %ld\n\n", strlcpy_dest, ft_strlcpy(strlcpy_dest,
			strlcpy_src, 3));

	char dst_strlcat[20] = "hello";
	char *src_strlcat = "world1";

	printf("TESTING FT_STRLCAT \n\n");
	printf("antes: %s\n", dst_strlcat);
	printf("numero: %ld\n", ft_strlcat(dst_strlcat, src_strlcat, 3));
	ft_strlcat(dst_strlcat, src_strlcat, 3);
	printf("depois: %s\n\n", dst_strlcat);

	char c_toupper = 'c';
	printf("TESTING FT_TOUPER \n\n");
	printf("%d\n", ft_toupper(c_toupper));
	printf("%d\n\n", toupper(c_toupper));

	printf("TESTING FT_TOLOWER \n\n");
	printf("%d\n", ft_tolower(c_toupper));
	printf("%d\n\n", tolower(c_toupper));

	const char s_strchr[] = "hello";
	printf("TESTING FT_STRCHR \n\n");
	printf("my: %s\n", ft_strchr(s_strchr, 'o'));
	printf("original: %s\n", strchr(s_strchr, 'o'));

	char str_dup[10] = "hello";
	char str_dup2[10] = "hello";
	char *str_dupp = ft_strdup(str_dup);
	char *str_dupp2 = strdup(str_dup2);
	printf("TESTING FT_STRDUP \n\n");
	printf("my: %s\n", str_dupp);
	printf("original: %s\n\n", str_dupp2);
	free(str_dupp);
	free(str_dupp2);

	printf("TESTING FT_STRRCHR \n\n");
	printf("my: %s\n", ft_strrchr(s_strchr, 'h'));
	printf("original: %s\n\n", strrchr(s_strchr, 'h'));

	char s1_strncmp[] = "test\200";
	char s2_strncmp[] = "test\0";
	printf("TESTING FT_STRNCMP\n\n");
	printf("my: %d\n", ft_strncmp(s1_strncmp, s2_strncmp, 0));
	printf("original: %d\n\n", strncmp(s1_strncmp, s2_strncmp, 0));

	const char s_memchr[] = "hello";
	printf("TESTING FT_MEMCHR\n\n");
	printf("my: %p\n", ft_memchr(s_memchr, 'e', 1));
	printf("original: %p\n\n", memchr(s_memchr, 'e', 0));

	char s1_memcmp[] = "hello";
	char s2_memcmp[] = "hello";
	printf("TESTING FT_MEMCMP\n\n");
	printf("my: %d\n", ft_memcmp(s1_memcmp, s2_memcmp, 5));
	printf("original: %d\n\n", memcmp(s1_memcmp, s2_memcmp, 5));

	const char big_strnstr[] = "heoloolpo";
	const char little_strnstr[] = "ool";
	printf("TESTING FT_STRNSTR \n\n");
	printf("mine: %s\n", ft_strnstr(big_strnstr, little_strnstr, 9));

	const char nptr_atoi[] = "-3339999";
	printf("TESTING FT_ATOI \n\n");
	printf("meu: %d\n", ft_atoi(nptr_atoi));
	printf("original: %d\n\n", atoi(nptr_atoi));

	// Test case 1: Allocating memory for an array of integers
	int *intArray;
	size_t numInts = 5;
	size_t intSize = sizeof(int);

	printf("TESTING FT_CALLOC\n\n");
	printf("Test Case 1: Allocating memory for an array of integers\n");
	intArray = (int *)ft_calloc(numInts, intSize);
	if (intArray != NULL)
	{
		printf("Memory allocation successful\n");
		// Check if the memory is properly initialized to 0
		for (size_t i = 0; i < numInts; i++)
		{
			printf("%d ", intArray[i]);
		}
		printf("String: %ls\n", intArray);
		printf("\n");
		free(intArray);
	}
	else
	{
		printf("Memory allocation failed\n");
	}

	// Test case 2: Allocating memory for an array of characters (string)
	char *str_calloc;
	size_t strLength = 10;
	size_t charSize = sizeof(char);

	printf("\nTest Case 2: Allocating memory for a string\n");
	str_calloc = (char *)ft_calloc(strLength, charSize);
	if (str_calloc != NULL)
	{
		printf("Memory allocation successful\n");
		// Check if the memory is properly initialized to '\0' (null characters)
		printf("String: %s\n\n", str_calloc);
		free(str_calloc);
	}
	else
	{
		printf("Memory allocation failed\n");
	}

	const char sub_substr[] = "hello world";
	char *result_substr = ft_substr(sub_substr, 3, 4);
	printf("TESTING FT_SUBSTR \n\n");
	printf("meu: %s\n\n", result_substr);
	printf("\n");

	const char s1_strjoin[] = "hello ";
	const char s2_strjoin[] = "world";
	char *result_strjoin = ft_strjoin(s1_strjoin, s2_strjoin);
	printf("TESTING FT_STRJOIN \n\n");
	printf("meu: %s\n\n", result_strjoin);
	free(result_strjoin);
	printf("\n");

	const char *s1_strtrim = "Eu/Gosto/de/Calor";
	const char *set_strtrim = "/";
	char *result_strtrim = ft_strtrim(s1_strtrim, set_strtrim);
	printf("TESTING FT_STRSTRIM \n\n");
	printf("%s \n", result_strtrim);
	free(result_strtrim);
	printf("\n");

	char const *s1_split;
	char sep_split;
	char **result_split;
	// int counter;

	s1_split = "\0aa\0bbb";
	sep_split = '\0';
	result_split = ft_split(s1_split, sep_split);
	// counter = ft_count_words(s1_split, sep_split);
	printf("TESTING FT_SPLIT\n\n");
	// printf(" Word counter: %d \n", counter);
	for (int i = 0; result_split[i]; i++)
		printf(" split: %s\n", result_split[i]);
	for (int j = 0; result_split[j]; j++)
	{
		free(result_split[j]);
	}
	free(result_split);
	printf("\n");

	int n_itoa = 1235;
	int n_itoa1 = -21455;
	int n_itoa2 = -2147483648;
	int n_itoa3 = 2147483647;
	char *result_itoa = ft_itoa(n_itoa);
	char *result_itoa1 = ft_itoa(n_itoa1);
	char *result_itoa2 = ft_itoa(n_itoa2);
	char *result_itoa3 = ft_itoa(n_itoa3);
	printf("TESTING FT_ITOA\n\n");
	// printf("%d \n", ft_get_size(n_itoa));
	// printf("%d \n", ft_get_size(n_itoa1));
	// printf("%d \n", ft_get_size(n_itoa2));
	// printf("%d \n", ft_get_size(n_itoa3));
	printf("%s \n", result_itoa);
	printf("%s \n", result_itoa1);
	printf("%s \n", result_itoa2);
	printf("%s \n", result_itoa3);
	free(result_itoa);
	free(result_itoa1);
	free(result_itoa2);
	free(result_itoa3);

	/*printf("TESTING FT_STRMAPI\n\n");
	char function_f(unsigned int idx, char c)
	{
		(void)idx;
		return (c + 1);
	}

	char *s_strmapi = "Abcd";
	char *result_strmapi = ft_strmapi(s_strmapi, &function_f);
	printf("Original: %s \n", s_strmapi);
	printf("New: %s \n", result_strmapi);
	free(result_strmapi);
	printf("\n");

	void function_f2(unsigned int idx, char *str)
	{
		(void)idx;
		if (str)
			*str = ft_toupper(*str);
	}
	char *s_striteri = "AbCdE";
	ft_striteri(s_striteri, &function_f2);
	printf("TESTING FT_STRITERI\n\n");
	printf("New: %s \n", s_striteri);
	free(s_striteri);
	printf("\n");
	*/

	printf("TESTING FT_PUTCHAR_FD\n\n");
	ft_putchar_fd('H', 1);
	ft_putchar_fd('e', 1);
	ft_putchar_fd('l', 1);
	ft_putchar_fd('l', 1);
	ft_putchar_fd('o', 1);
	ft_putchar_fd('\n', 1);
	printf("\n");

	printf("TESTING FT_PUTSTR_FD\n\n");
	ft_putstr_fd("H e l l o\n", 1);
	printf("\n");

	printf("TESTING FT_PUTENDL_FD\n\n");
	ft_putendl_fd("I hate ", 1);
	ft_putendl_fd("this", 1);
	printf("\n");

	printf("TESTING FT_PUTNBR_FD\n\n");
	ft_putnbr_fd(-56789, 1);
	printf("\n");
	ft_putnbr_fd(1234, 1);
	printf("\n");
	ft_putnbr_fd(0, 1);
	printf("\n");
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");
	ft_putnbr_fd(2147483647, 1);
	printf("\n");
}