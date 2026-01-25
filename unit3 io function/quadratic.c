// #include <stdio.h>
// #include <math.h>

// int main() {
//     float a, b, c, discriminant, root1, root2, realPart, imagPart;

//     printf("Enter coefficients a, b and c:\n");
//     scanf("%f %f %f", &a, &b, &c);

//     discriminant = b * b - 4 * a * c;

//     if (discriminant > 0) {
//         root1 = (-b + sqrt(discriminant)) / (2 * a);
//         root2 = (-b - sqrt(discriminant)) / (2 * a);
//         printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
//     } 
//     else if (discriminant == 0) {
//         root1 = root2 = -b / (2 * a);
//         printf("Roots are real and equal: %.2f and %.2f\n", root1, root2);
//     } 
//     else {
//         realPart = -b / (2 * a);
//         imagPart = sqrt(-discriminant) / (2 * a);
//         printf("Roots are complex: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
//     }
    

//     return 0;
// }

#include <stdio.h>

#include <math.h>

int main(){
    float a, b, c, d, root1, root2, real, img;
    printf("\nEnter values a, b and c of the quadratic equation:");
    scanf("%f %f %f", &a, &b, &c);

    d = b*b-4*a*c;
    if(d<0){
        printf("\nImaginary Roots.");
        d = sqrt(fabs(d)); //compute absolute value of discriminant
        real = -b/(2*a);
        img = d/(2*a);
        printf("\nRoot1 = %.2f +i %.2f", real, img);
        printf("\nRoot2 = %.2f -i %.2f", real, img);
    }

    else {
        printf("\nRoots are real.");
        d = sqrt(d);
        root1 = (-b+d)/(2*a);
        root2 = (-b-d)/(2*a);
        printf("\nRoot1 = %.2f \t Root2 = %.2f", root1, root2);
    }

}