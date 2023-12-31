//����: ������� �������

//��������� ������� ������� �� ���� ������������.

//������ ����: ������ ��� ����� �1, �1, �2, �2 - ������� �� ������� �� ���� ������� ��������

//������� ����: ���� ����� - ������� ������� � �������� �� ����� ����� ���� ����


#include <stdio.h>
#include <math.h>

double vectorLength(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1; // г����� �� ������������ x2 �� x1
    int dy = y2 - y1; // г����� �� ������������ y2 �� y1

    double length = sqrt(dx * dx + dy * dy); // ���������� ������� ������� �� �������� sqrt(dx^2 + dy^2)

    return length;
}

int main() {
    int x1, y1, x2, y2;
    printf("������ ���������� ������� ������� (x1, y1): ");
    scanf("%d %d", &x1, &y1);

    printf("������ ���������� ���� ������� (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    double result = vectorLength(x1, y1, x2, y2); // ���������� ������� �������

    printf("������� �������: %.6f\n", result); // ��������� ������� ������� � �������� �� ����� ����� ���� ����

    return 0;
}
