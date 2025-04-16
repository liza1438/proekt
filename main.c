#include "lab.h"

int main()
{
    int c;
    int x;

    do
    {
        printf("  Введите номер лабы ");
        scanf ("%d",&x);
        switch(x)
        {
        case 1:
            printf("Основное задание?(Y/N)");
            scanf("%d",&c);
            if(c=getchar()=='Y')
            {
                lab1();
            }
            else
            {
                lab1add();
            }
            break;

        case 2:
            printf("Основное задание?(Y/N)");
            scanf("%d",&c);
            if(c=getchar()=='Y')
            {
                lab2();
            }
            else
            {
                lab2add();
            }
            break;

        case 3:
            printf("Основное задание?(Y/N)");
            scanf("%d",&c);
            if(c=getchar()=='Y')
            {
                lab3();
            }
            else
            {
                printf("Отсутствует");;
            }
            break;

        case 4:
            printf("Основное задание?(Y/N)");
            scanf("%d",&c);
            if(c=getchar()=='Y')
            {
                lab4();
            }
            else
            {
                lab4add();
            }
            break;

        case 5:
            printf("Основное задание?(Y/N)");
            scanf("%d",&c);
            if(c=getchar()=='Y')
            {
                lab5();
            }
            else
            {
                lab5add();
            }
            break;

        case 6:
            printf("Основное задание?(Y/N)");
            scanf("%d",&c);
            if(c=getchar()=='Y')
            {
                lab6();
            }
            else
            {
                lab6add();
            }
            break;

        default:
            printf("Такой лабы нет");
        }
    } while(x>=1 && x<=6);
    return 0;
}
