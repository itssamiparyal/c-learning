// wap to convert
// 1. centigrade into fahrenheit
// 2. seconds into hour, minutes and seconds
// 3. days into years, months and days
// 4. inches into meter, feet and inches etc.

// program to convert centigrade into fahrenheith

#include <stdio.h>

int main() {
    float fahrenheit, centigrade;

    printf("Enter how many centigrade:\n");
    scanf("%f", &centigrade);

    fahrenheit = (9.0 / 5.0) * centigrade + 32;

    printf("%.2f centigrade = %.2f fahrenheit\n", centigrade, fahrenheit);
    return 0;
}



// program to convert seconds into hour, minutes and seconds.

// #include<stdio.h>
// int main(){
//     int seconds , minutes , hours, remseconds;
//     printf("Enter how many seconds:\n");
//     scanf("%d",&seconds);
//     hours = seconds / 3600; //no of hours
//     remseconds = seconds % 3600; // remainder seconds
//     minutes = remseconds / 60; // no of minutes
//     seconds = remseconds % 60; // reaming seconds
//     printf("Time = %d hrs:%d minutes:%d seconds",hours,minutes,seconds);
    
//     return 0;    
// }

