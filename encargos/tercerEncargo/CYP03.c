#include <stdio.h>

int day, month, year;

int main()
{
    scanf("%d %d %d",&day,&month,&year);
    if (month>=1&&month<13)
    {
        if (month ==12||month ==10||month ==8||month ==7||month ==5||month ==3||month ==1)
        {
            if (day == 31)
            {
                day=1,month++;
                if (month==12)
                {
                    year++;
                    printf("es un nuevo mes con el dia %d y un nuevo año %d",day,year);
                }
                else
                {
                    printf("es un nuevo mes con el dia %d",day);      
                }
            }
            else if (day==4&&month==10&&1582)
            {
                day=15;
                printf("Bien esta es una fecha especial el dia de hoy es %d",day);
            }
            else
            {
                day++;
            }
        }
        else if (month==4||month==9||month==6||month==11)
        {
            if (day==30)
            {
                day=1,month++;
                printf("es un nuevo mes con el dia %d",day);
            }
            else
            {
                day++;
            }
        }
        else
        {
            if (day==28)
            {
                if (year%400==0||year%4==0)
                {
                    day++;
                }
            }
            else
            {
                day=1,month++;
            }
        }   
    }
    else
    {
        printf("acaso eres bruto no hay un numero de mes así");
    }
    return 0;
}
