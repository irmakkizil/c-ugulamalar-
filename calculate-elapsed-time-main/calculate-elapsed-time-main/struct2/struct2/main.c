//
//  main.c
//  struct2
//
//  Created by Irmak KIZIL on 25.03.2024.
//

#include <stdio.h>

struct myDate{
    int day;
    int month;
    int year;
};

int main() {
    
    struct myDate x;
    struct myDate y;
    
    printf(" enter date of birth :");
    scanf(" %d %d %d",&x.day,&x.month,&x.year);
    
    printf(" enter the date of question :");
    scanf(" %d %d %d",&y.day,&y.month,&y.year);
    
    if(x.day>y.day){
        y.day+=30;
        y.month-=1;
        
    }
    if(x.month>y.month){
        y.month+=12;
        y.year-=1;
    }
    
    
    printf("last time: %d day %d month %d year",y.day-x.day,y.month-x.month,y.year-x.year);
   
    return 0;
}
