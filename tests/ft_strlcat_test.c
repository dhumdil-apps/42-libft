#include "../libft/libft.h"

#define KRED  "\x1B[31m"
#define KBLU  "\x1B[34m"
#define N 30

size_t	strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	src_size;
	unsigned int	dest_size;

	i = 0;
	src_size = 0;
	while (dst[i])
		i++;
	while (src[src_size])
		src_size++;
	dest_size = i;
	while (*src && i + 1 < size)
		dst[i++] = *(src++);
	dst[i] = 0;
	return (src_size + ((dest_size > size) ? size : dest_size));
}

int test(char *s)
{
	char dest1[5] = "...";
	char dest2[5] = "...";

	ft_strlcat(dest1, s, sizeof(dest1));
	strlcat(dest2, s, sizeof(dest2));

    if (strcmp(dest1, dest2) == 0)
    {
        return (1);
    }
    return (0);
}

int main()
{
    char m[N][255] =
    {
        "     ",
        "    -  ",
        "aa   2  ",
        "",
        " ",
        "+",
        "11",
        "1999999999",
        "-2000000000",
        "-9999999999999",
        "9999999999999",
        "   -22",
        "  11   ",
        "      +22",
        "0",
        "-0",
        "   2ww2   ",
        "  + 001",
        "00000000042",
        "0",
        "space (0x20, ' ')",
        "form feed (0x0c, '\f')",
        "line feed (0x0a, '\n')",
        "carriage return (0x0d, '\r')",
        "horizontal tab (0x09, '\t')",
        "vertical tab (0x0b, '\v')",
        "\n",
        "..",
        "...",
        "\0  "
    };

    int i = 0;
    int err = 0;

    while (N - i)
    {
		printf(KBLU "");
        if (!test(m[i]))
        {
            printf(KRED "Test %s%d: Error!\n", ((i + 1 < 10) ? (" ") : ("")), (i + 1));
            err = 1;
        }
        i++;
    }

    if (!err)
    {
        printf(KBLU "Ok - all tests passed successfully.\n");
    }

    return (0);
}
