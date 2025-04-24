#include "lab.h"
#define YES 1
#define NO 0
#define MAXLINE 1000
 
void process_line(char buffer[]);

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
    char line[MAXLINE]; // Объявляется массив line, в котором будет храниться вводимая строка длиной до 1000 символов
    while (getchar() != '\n' && getchar() != EOF); //чистим буфер
    fgets(line, MAXLINE, stdin); // Считывание строки из стандартного ввода (включая пробелы, до \n или конца строки, максимум MAXLINE)
    process_line(line); // Передаем строку в функцию process_line для обработки
    puts(line); //Выводим результат после обработки
}
 void process_line(char buffer[]) { // Функция принимает массив символов (строку), которую нужно обработать
    int i = 0;      // чтения
    int pos = 0;    // записи
    int word_start = -1; // начало слова 
    char nach_c, kon_c; // первый и последний символы слова.
    
    do {
        char c = buffer[i]; //Читаем текущий символ из строки
        
        // Проверяем разделители
        if (c == ' ' || c == '.' || c == ',' || c == '\n' || c == '\0') { //разделитель
            if (word_start != -1) {
                kon_c = buffer[i - 1]; // Если слово началось ранее, сохраняем его последний символ. 
                
                if (nach_c != kon_c) {  //Если первый и последний символы слова не совпадают, сохраняем его
                    for (int j = word_start; j < i; j++) {
                        buffer[pos++] = buffer[j]; // Переносим слово в начало строки (перезаписываем строку без ненужных слов)
                    }
                }
                word_start = -1; //Сбрасываем word_start, чтобы можно было начать следующее слово
            }
            buffer[pos++] = c; // Записываем разделитель в новую строку
        } else {
            if (word_start == -1) {
                word_start = i;
                nach_c = c; //Если это не разделитель и мы еще не начали новое слово, фиксируем начало слова и сохраняем его первый символ
            }
        }
        i++;
    } while (buffer[i - 1] != '\0'); //Продолжаем, пока не дойдем до конца строки (\0)
    
    buffer[pos] = '\0';  // Завершаем строку
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
