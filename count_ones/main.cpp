#include <iostream>

using namespace std;

void decToBinary(int n)
{
    int binaryNum[32];

    int i = 0;
    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("\nBinary: ");
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binaryNum[j];
    }
}

void count_ones(unsigned char x)
{
    x = (int)(x);

    int i = 1;
    while (x > 0)
    {
        x = (char)(x);
        int sub = ((int)(x) - 1);
        unsigned char not_sub = ~((char)(sub));
        unsigned char x_and_ns = x & not_sub;
        unsigned char x_xor_y = x ^ x_and_ns;

        //printf("x: %d", x);
        //printf("\ny: %d", x_and_ns);
        //printf("\nx_xor_y: %d", x_xor_y);

        x = x_xor_y;
        x = (int)(x);
        //printf("\nnew x: %d", x);

        i++;
    }

    printf("\nones in binary: %d", i - 1);

}


int main()
{

    unsigned char x = 44;

    decToBinary(x);
    count_ones(x);
}
