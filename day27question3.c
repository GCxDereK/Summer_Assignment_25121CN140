#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, total;
};

int main() {
    struct Employee e[5];
    int i;

    printf("Enter details of 5 employees:\n");

    for(i = 0; i < 5; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &e[i].id);

        printf("Enter Name: ");
        scanf("%s", e[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f", &e[i].basic);

        e[i].hra = e[i].basic * 0.20;
        e[i].da = e[i].basic * 0.10;
        e[i].total = e[i].basic + e[i].hra + e[i].da;
    }

    printf("\nSalary Details:\n");

    for(i = 0; i < 5; i++) {
        printf("\nID: %d\n", e[i].id);
        printf("Name: %s\n", e[i].name);
        printf("Basic Salary: %.2f\n", e[i].basic);
        printf("HRA: %.2f\n", e[i].hra);
        printf("DA: %.2f\n", e[i].da);
        printf("Total Salary: %.2f\n", e[i].total);
    }

    return 0;
}