#include <stdio.h> //lab_5
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");
    int N;

    printf("������� ����� N (N < 1000): ");
    scanf("%d", &N);

    if (N >= 1000) {
        printf("������: ����� ������ ���� ������ 1000\n");
        return 1;
    }

    int digit1 = N % 10;
    int digit2 = (N / 10) % 10;
    int digit3 = N / 100;       

    if (digit1 == 5 || digit2 == 5 || digit3 == 5) {
        printf("����� 5 ������ � ����� %d\n", N);
    }
    else {
        printf("����� 5 �� ������ � ����� %d\n", N);
    }

    system("pause");
    return 0;
}