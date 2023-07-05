//Тема: задача з розрядами

//Скільки можна сформувати чисел із р розрядів, використовуючи цифри 5 та 9, в яких три однакові цифри не стоять поруч?

//Вхідні дані: ціле число р (р ≤ 30)

//Вихідні дані: кількість чисел із р розрядів

#include <stdio.h>

long long countNumbers(int r) {
    // Пункт 1.Кількость чисел для першого та другого розрядів
    long long prevCount = 2, currCount = 2;

    // Пункт 2.Обчислення кількості чисел для кожного наступного розряду
    for (int i = 3; i <= r; i++) {
        long long temp = currCount;
        currCount = prevCount + currCount; // Пункт 3 .кількість чисел без 5 та 9
        prevCount = temp;
    }

    return currCount;
}

int main() {
    int r;

    // Пункт 4. Зчитування кількості розрядів
    scanf("%d", &r);

    // Пункт 5 . Обчислення та виведення кількості чисел
    long long result = countNumbers(r);
    printf("%lld\n", result);

    return 0;
}

