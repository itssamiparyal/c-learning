// wap to convert
// 1. centigrade into fahrenheit
// 2. seconds into hour, minutes and seconds
// 3. days into years, months and days
// 4. inches into meter, feet and inches etc.

// program to convert centigrade into fahrenheith

// #include <stdio.h>

// int main() {
//     float fahrenheit, centigrade;

//     printf("Enter how many centigrade:\n");
//     scanf("%f", &centigrade);

//     fahrenheit = (9.0 / 5.0) * centigrade + 32;

//     printf("%.2f centigrade = %.2f fahrenheit\n", centigrade, fahrenheit);
//     return 0;
// }



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

// program to convert days into year, month and days.

// #include<stdio.h>
// int main(){
//     int days , month , year, remdays;

//     printf("Enter how many days:\n");
//     scanf("%d",&days);

//     year = days/ 365; //no of days
//     remdays = days % 365; // remainder days
//     month = remdays / 30; // no of months
//     days = remdays % 30; // reaming days

//     printf("Days = %d Year:%d Month:%d Days",year,month,days);
    
//     return 0;    
// }

// program to convert inches into meter, feet and inches etc.

#include <stdio.h>

int main() {
    float inches, meter;
    int feet;
    float remInches;

    printf("Enter how many inches:\n");
    scanf("%f", &inches);

    meter = inches * 0.0254;

    feet = (int)(inches / 12);
    remInches = inches - (feet * 12);

    printf("Meters: %.3f m\n", meter);
    printf("Feet & Inches: %d ft %.2f in\n", feet, remInches);

    return 0;
}
