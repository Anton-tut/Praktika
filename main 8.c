//Тема: анаграма

//Анаграмою слова називають перестановку всіх букв слова. Наприклад зі слова SOLO можна отримати 12 анаграм: SOLO, LOSO, OSLO, OLSO, OSOL, OLOS, SLOO, OOLS, OOSL, LOOS, SOOL. напишіть програму, яка виводитиме кількість анаграм , які можуть вийти зі слова.

//Вхідні дані: в одному рядку задане слово, кількість букв якого не перевищує 14.

//Вихідні дані: кількість можливих анаграм.


#include <stdio.h>
#include <string.h>

// Рекурсивна функція для генерації анаграм
void generateAnagrams(char* word, int start, int end, int* count) {
    if (start == end) {
        printf("%s\n", word); // Виведення анаграми
        (*count)++; // Збільшення лічильника анаграм
    } else {
        for (int i = start; i <= end; i++) {
            // Обмін символів
            char temp = word[start];
            word[start] = word[i];
            word[i] = temp;

            // Рекурсивний виклик для наступного символу
            generateAnagrams(word, start + 1, end, count);

            // Відновлення початкового порядку символів
            temp = word[start];
            word[start] = word[i];
            word[i] = temp;
        }
    }
}

int main() {
    char word[15];
    printf("Введіть слово: ");
    scanf("%s", word);

    int count = 0; // Лічильник анаграм

    int length = strlen(word);
    generateAnagrams(word, 0, length - 1, &count); // Генерація анаграм

    printf("Кількість анаграм: %d\n", count);

    return 0;
}
