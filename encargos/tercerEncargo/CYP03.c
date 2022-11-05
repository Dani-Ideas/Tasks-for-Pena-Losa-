#include <stdio.h>

int treeDesition(int *day, int *month,int *year)
{
    if (*month ==12||*month ==10||*month ==8||*month ==7||*month ==5||*month ==3||*month ==1)
        {
            if (*day == 31)
            {
                if (*month==12)
                {
                    return*day=1,*year++,*month=1;
                }
                else
                {
                    return*day=1,*month++;
                }
            }
            else if (*day==4&&*month==10&&*year==1582)
            {
                return*day=15;
            }
            else
            {
                return*day++;
            }
        }
        else if (*month==4||*month==9||*month==6||*month==11)
        {
            if (*day==30)
            {
                return*day=1,*month++;
            }
            else
            {
                return*day++;
            }
        }
        else
        {
            if (*day==28)
            {
                if (*year%400==0||*year%4==0)
                {
<<<<<<< HEAD
                    return*day++;
=======
                    if (year==100)
                    {
                        day=1,month++;
                        printf("%2d %2d %4d",day, month,year);
                    }
                    else
                    {
                        day++;
                        printf("%2d %2d %4d",day, month,year);
                    }
>>>>>>> develop2
                }
                else
                {
                    return*day=1,*month++;
                }
            }
            else
            {
<<<<<<< HEAD
                return*day++,*month++;
=======
                day++;
                printf("%2d %2d %4d",day, month,year);
>>>>>>> develop2
            }
        }   
}

int main()
{
    int day, month, year;
    scanf("%d %d %d",&day,&month,&year);
    if (month>=1&&month<13&&day>0&&year<=3000)
    {
        treeDesition(&day,&month,&year);
        printf("%2d %2d %4d",day, month,year);
    }
    else
    {
        printf("acaso eres bruto, esa fecha no existe");
    }
    return 0;
}