//95. program to read all numbers from the input file “values.dat” and sores the average of these
// numbers in an output file named as “average.res”.
#include <stdio.h>

int main()
{
    FILE *fin, *fout;
    float num, sum = 0.0, avg;
    int count = 0;

    // Open input file in read mode
    fin = fopen("values.dat", "r");
    if (fin == NULL)
    {
        printf("Error: Cannot open input file.\n");
        return 1;
    }

    // Read numbers from file until end
    while (fscanf(fin, "%f", &num) != EOF)
    {
        sum += num;
        count++;
    }

    fclose(fin);

    if (count == 0)
    {
        printf("No numbers found in file.\n");
        return 1;
    }

    avg = sum / count;

    // Open output file in write mode
    fout = fopen("average.res", "w");
    if (fout == NULL)
    {
        printf("Error: Cannot open output file.\n");
        return 1;
    }

    // Write average to output file
    fprintf(fout, "Average = %.2f\n", avg);

    fclose(fout);

    printf("Average successfully written to average.res\n");

    return 0;
}