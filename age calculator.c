//YOU HAVE TO PUT TODAYS DATE AS WELL TO CALCULATE ACCURATE AGE

#include <stdio.h>

int main()
{
    int Bday, Bmonth, Byear, Tday, Tmonth, Tyear, Cday, Cmonth, Cyear;
    
    printf("what is your birthday date\n");
    scanf("%d", &Bday);
    printf("what is your birthday month\n");
    scanf("%d", &Bmonth);
    printf("what is your birthday year\n");
    scanf("%d", &Byear);
    
    printf("what is todays date\n");
    scanf("%d", &Tday);
    printf("what is todays month\n");
    scanf("%d", &Tmonth);
    printf("what is todays year\n");
    scanf("%d", &Tyear);

    Cyear = Tyear - Byear;
    Cmonth = Tmonth - Bmonth;

    if (Cmonth < 0)
    {
        Cmonth  += 12;
        Cyear--;
    }
    
    if (Tday<Bday)
    {
        Cmonth--;
        if (Cmonth < 0)
        {
            Cmonth +=12;
            Cyear--;
        }
        
    }
    

    printf("your age is %d years old and %d months\n", Cyear, Cmonth);

    return 0;
}