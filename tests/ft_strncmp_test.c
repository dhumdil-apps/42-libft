#include "../libft/libft.h"

#define KRED  "\x1B[31m"
#define KBLU  "\x1B[34m"
#define N 60

int test(char *s1, char *s2)
{
	printf("\n");
	printf("%d\n", ft_strncmp(s1, s2, 5));
	printf("%d\n", strncmp(s1, s2, 5));

    if (ft_strncmp(s1, s2, 5) > 0 && strncmp(s1, s2, 5) > 0)
    {
        return (1);
    }
	if (ft_strncmp(s1, s2, 5) < 0 && strncmp(s1, s2, 5) < 0)
    {
        return (1);
    }
	if (ft_strncmp(s1, s2, 5) == 0 && strncmp(s1, s2, 5) == 0)
    {
        return (1);
    }
    return (0);
}

int main()
{
    char m[N][255] =
    {
		"     ", "     ",
		"    -  ", "    ss-  ",
		"aa   2  ", "aa   2  ",
		"", "",
		" ", " ",
		"+", "+",
		"11", "12",
		"1999999999", "1999999999 ",
		"-2000000000", "-2000000000",
		"-9999999999999", "9999999999999",
		"9999999999999", "9999999999999",
		"   -22", "   -22     ",
		"  11   ", "  11   ",
		"      +22", "      +22",
		"0", "+0",
		"-0", "-0",
		"   2ww2   ", "   2ww2   ",
		"  + 001", "  +001",
		"00000000042", "00000000042",
		"0", "0",
		"space (0x20, ' ')", "space (0x20, ' ')",
		"form feed (0x0c, '\f')", "form  feed (0x0c, '\f')",
		"line feed (0x0a, '\n')", "line feed (0x0a, '\n')",
		"carriage return (0x0d, '\r')", " carriage return (0x0d, '\r')",
		"horizontal tab (0x09, '\t')", " horizontal tab (0x09, '\t')",
		"vertical tab (0x0b, '\v')", "vertical tab (0x0b, '\v')",
		"", "",
		"", ".",
		"\0", "\0\0",
		"." "0"
    };

    int i = 0;
    int err = 0;

    while (N - i)
    {
        if (!test(m[i], m[i + 1]))
        {
            printf(KRED "Test %s%d: Error!\n", ((i + 1 < 10) ? (" ") : ("")), (i + 1) / 2);
            err = 1;
        }
        i += 2;
    }

    if (!err)
    {
        printf(KBLU "Ok - all tests passed successfully.\n");
    }

    return (0);
}
