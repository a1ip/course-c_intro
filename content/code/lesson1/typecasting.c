#include <stdio.h>

int main(int argc, char* argv[])
{
    // int ������ ���������� � unsigned int
    int x = -100;
    unsigned int y = 10U;
    long long int z = -100 + 10U;
    printf("z = %lld\n", z);

    // char ���� ���������� � ���� int
    char c = '�';
    int d = (int)c * 10;
    printf("d = %d\n", d);

    return 0;
}
