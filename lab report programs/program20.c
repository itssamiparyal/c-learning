// 20. Admission to a professional course is subject to the following conditions:
//a)Marks in mathematics >= 60
//b)Marks in physics >= 50
//c)Marks in chemistry >= 40
//d)Total in all three subjects >= 200
//OR
//Total in mathematics and physics >=150

#include <stdio.h>

int main() {
    int math, physics, chemistry;
    int total, total_mp;

    printf("Enter marks in Mathematics, Physics, and Chemistry: ");
    scanf("%d %d %d", &math, &physics, &chemistry);

    total = math + physics + chemistry;
    total_mp = math + physics;

    if (math >= 60 && physics >= 50 && chemistry >= 40 && (total >= 200 || total_mp >= 150)) {
        printf("Candidate is eligible for admission.\n");
    } else {
        printf("Candidate is NOT eligible for admission.\n");
    }

    return 0;
}
