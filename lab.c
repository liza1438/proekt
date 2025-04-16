#include "lab.h"

void lab1()
{
    printf("Бассейн объёмом V литров полностью заполнен водой. По одной трубе вода из бассейна вытекает со скоростью v1 литров в минуту, по другой трубе вода поступает со скоростью v2 литров в минуту. Через какое время бассейн станет пустым, если вода вытекает быстрее, чем поступает?\n");
    float V, v1, v2, t;
    printf("V=");
    scanf("%f",&V);
    printf("v1=");
    scanf("%f",&v1);
    printf("v2=");
    scanf("%f",&v2);
    t=V/(v1-v2);
    printf("t=%f\n",t);
}
void lab1add()
{
    printf("Такой нет\n");
}
void lab2()
{
    printf("Вычислить сумму первых N элементов ряда.\n");
    float s,a,b,c;
    int i, N;

    printf("N=");
    scanf("%d",&N);

    s=0;
    i=0;
    c=1;
    b=1;
    a=c/b;

    while(N>i)
    {
        s=s+a;
        c=c*(c+2);
        b=b*(b+3);
        a=c/b;
        i=i+1;
    }
    printf("n=%d, s=%f/n", i,s);
}
void lab2add()
{
    printf("Вычислить сумму первых N элементов ряда.\n");
    printf("Завершить цикл командой break.\n");
    float s,a,b,c;
    int i, N;

    printf("N=");
    scanf("%d",&N);

    s=0;
    i=0;
    c=1;
    b=1;
    a=c/b;

    while(N>i)
    {

        s=s+a;
        c=c*(c+2);
        b=b*(b+3);
        a=c/b;
        i=i+1;
        printf("n=%d, a=%f\n", i,a);
        if (s>0.00005) break;

    }
    printf("\nn=%d, s=%f\n", i,s);
}
void lab3()
{
    printf("В потоке символов сосчитать число слов, содержащих букву ‘а’\n");
#define YES 1
#define NO 0
    int c;         // текущий символ
    int flag = NO;     //нахождение внутри слова
    int bukva = NO;    
    int nobukva = NO;   // наличие цифры в слове
    int sum = 0;       // счетчик слов

    while ((c = getchar()) != '*') {
        if (c == ' '  || c == '.'  || c == '\n' || c == ',') {
            // Конец слова
            if (flag == YES) {
                // Если слово содержит 'a' и не содержит цифр
                if (bukva == YES && nobukva == NO) {
                    sum=sum+1;
                }
                // Сбрасываем флаги для следующего слова
                flag = NO;
                bukva = NO;
                nobukva = NO;
            }
        } else {
            // Мы внутри слова
            flag = YES;

            // Проверяем текущий символ
            if (c == 'a' || c == 'A') {
                bukva = YES;
            } else if (c >= '0' && c <= '9') {
                nobukva = YES;
            }
        }
    }

    // Проверяем последнее слово, если ввод не закончился разделителем
    if (flag == YES && bukva == YES && nobukva == NO) {
        sum = sum + 1;
    }

    printf("Количество слов: %d\n", sum);
}
void lab4()
{
    printf("В символьной строке удалить все слова, начинающиеся и заканчивающиеся на одну и ту же букву.");
}
void lab4add()
{
    printf(" Тема лабы");
    printf(" Задание");
}
void lab5()
{
    printf("Тема лабы");
}
void lab5add()
{
    printf(" Тема лабы");
    printf(" Задание");
}
void lab6()
{
    printf("Тема лабы");
}
void lab6add()
{
    printf(" Тема лабы");
    printf(" Задание");
}
