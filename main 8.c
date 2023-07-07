//����: ��������

//��������� ����� ��������� ������������ ��� ���� �����. ��������� � ����� SOLO ����� �������� 12 �������: SOLO, LOSO, OSLO, OLSO, OSOL, OLOS, SLOO, OOLS, OOSL, LOOS, SOOL. �������� ��������, ��� ���������� ������� ������� , �� ������ ����� � �����.

//����� ���: � ������ ����� ������ �����, ������� ���� ����� �� �������� 14.

//������ ���: ������� �������� �������.


#include <stdio.h>
#include <string.h>

// ���������� ������� ��� ��������� �������
void generateAnagrams(char* word, int start, int end, int* count) {
    if (start == end) {
        printf("%s\n", word); // ��������� ��������
        (*count)++; // ��������� ��������� �������
    } else {
        for (int i = start; i <= end; i++) {
            // ���� �������
            char temp = word[start];
            word[start] = word[i];
            word[i] = temp;

            // ����������� ������ ��� ���������� �������
            generateAnagrams(word, start + 1, end, count);

            // ³��������� ����������� ������� �������
            temp = word[start];
            word[start] = word[i];
            word[i] = temp;
        }
    }
}

int main() {
    char word[15];
    printf("������ �����: ");
    scanf("%s", word);

    int count = 0; // ˳������� �������

    int length = strlen(word);
    generateAnagrams(word, 0, length - 1, &count); // ��������� �������

    printf("ʳ������ �������: %d\n", count);

    return 0;
}
