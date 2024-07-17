#include <unistd.h>

void print_bits(unsigned char octet)
{
    int tab[8];
    int i = 0;

    while (i < 8)
    {
        tab[i] = octet % 2;
        octet /= 2;
        i++;
    }
    while (i > 0)
    {
        i--;
        char c = tab[i] + '0';
        write(1, &c, 1);
    }
}

int main()
{
    print_bits(2);
    return 0;
}
