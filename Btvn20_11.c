#include<stdio.h>
#include<math.h>
typedef enum {Thu2=2,Thu3,Thu4, Thu5, Thu6,Thu7,Chunhat} DayOfWeek;
typedef struct 
{
int day;
int month;
int year;
DayOfWeek dayOfWeek;
}date;
date InputDate();
int checkInputDate();
void DisplayDayOfWeek(date dateInput, date DayOrigin);
int CaculateDay(date Dateinput);
const date DayCompare = {6,1,1930,Thu2};
int CaculateDay(date Dateinput)
{
    int i,temp1 = 0,temp2;
    if(Dateinput.month<=2)     
    {
        for(i = 0; i<Dateinput.year; i++)
        {
            if((i % 100 == 0 && i%400 == 0) || (i %100 !=0 && i %4==0)) temp1++;
        }
        // printf("so nam nhuan %d", temp1);
        if(Dateinput.month==2) temp2 = Dateinput.year*365 + 31 + Dateinput.day + temp1;
        else temp2 = Dateinput.year*365 + Dateinput.day + temp1;
    }
    else
    {
        for(i = 0; i<=Dateinput.year; i++)
        {
            if((i % 100 == 0 && i%400 == 0) || (i %100 !=0 && i %4==0))
            {
                temp1++;
            } 
        }
        // printf("so nam nhuan %d", temp1);
        switch (Dateinput.month)
        {
            case 3:
                temp2 = 31 + 28;
                break;
            case 4:
                temp2 = 31 + 28 +31;
                break;
            case 5:
                temp2 = 31 + 28 +31+30;
                break;
            case 6:
                temp2 = 31 + 28 +31+30+31;
                break;
            case 7:
                temp2 = 31 + 28 +31+30+31+30;
                break;
            case 8:
                temp2 = 31 + 28 +31+30+31+30+31;
                break;
            case 9:
                temp2 = 31 + 28 +31+30+31+30+31+31;
                break;
            case 10:
                temp2 = 31 + 28 +31+30+31+30+31+31+30;
                break;
            case 11:
                temp2 = 31 + 28 +31+30+31+30+31+31+30+31;
                break;
            case 12:
                temp2 = 31 + 28 +31+30+31+30+31+31+30+31+30;
                break;
            default:
                break;
        } 
        temp2 += Dateinput.year*365  + Dateinput.day + temp1;
    }       
    return temp2;
}
int checkInputDate(date Date)
{
    if(Date.year < DayCompare.year) return 0;
    else if(Date.year == DayCompare.year && Date.month <= DayCompare.month && Date.day < DayCompare.day) return 0;
    else
    {
        switch (Date.month)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                if(Date.day <0 || Date.day>31) return 0;
                return 1;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                if(Date.day <0 || Date.day>30) return 0;
                return 1;
                break;
            case 2:
                if((Date.year % 100 == 0 && Date.year%400 == 0) || (Date.year %100 !=0 && Date.year %4==0));
                {
                    if(Date.day <0 || Date.day>29) return 0;
                }
                return 1;
                break;     
            default:
                return 0;
                break;
        }
    }
}
date InputDate()
{
    date Date;
    do
    {
        printf("Nhap ngay thang nam: \n");
        printf("\nNgay: ");
        scanf("%d",&Date.day);
        printf("\nThang: ");
        scanf("%d",&Date.month);
        printf("\nNam: ");
        scanf("%d",&Date.year);
        printf("\nNgay da nhap:%d-%d-%d \n", Date.day, Date.month, Date.year);   
    } while (checkInputDate(Date)==0);
    return Date;
}
void  DisplayDayOfWeek(date Dateinput, date DateOrigin)
{
    int temp1,temp2,temp3,temp4;
    temp1 = CaculateDay(Dateinput)-CaculateDay(DateOrigin);
    temp2= (temp1 %7) + DayCompare.dayOfWeek;
    if(temp2 == 8) printf("\nNgay %d-%d-%d la Chu nhat", Dateinput.day, Dateinput.month, Dateinput.year); 
    else printf("\nNgay %d-%d-%d la Thu %d", Dateinput.day, Dateinput.month, Dateinput.year,temp2);   
}
int main()
{
    date inputDate = InputDate();
    DisplayDayOfWeek(inputDate,DayCompare);
    // printf("%d",Thu2);
    return 0;
}