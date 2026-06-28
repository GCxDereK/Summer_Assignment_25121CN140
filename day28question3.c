#include <stdio.h>

struct Ticket {
    char name[50];
    int age;
    int seats;
};

int main() {
    struct Ticket t;
    int availableSeats = 50;

    printf("Enter Passenger Name: ");
    scanf("%s", t.name);

    printf("Enter Age: ");
    scanf("%d", &t.age);

    printf("Available Seats: %d\n", availableSeats);

    printf("Enter number of seats to book: ");
    scanf("%d", &t.seats);

    if(t.seats <= availableSeats) {
        availableSeats = availableSeats - t.seats;

        printf("\nTicket Booked Successfully\n");
        printf("Passenger Name: %s\n", t.name);
        printf("Age: %d\n", t.age);
        printf("Seats Booked: %d\n", t.seats);
        printf("Remaining Seats: %d\n", availableSeats);
    }
    else {
        printf("Sorry! Seats not available.\n");
    }

    return 0;
}