#include <stdio.h>
#include <string.h>

#define MAX_MOVIES 5
#define MAX_BOOKINGS 10

struct Movie {
    char name[100];
    int seats;
    int booked_seats;
};

struct Booking {
    char name[100];
    char movie_name[100];
    int seats_booked;
};

struct Movie movies[MAX_MOVIES];
struct Booking bookings[MAX_BOOKINGS];
int booking_count = 0;

void add_movie() {
    printf("Enter movie name: ");
    scanf("%s", movies[booking_count].name);
    printf("Enter number of seats: ");
    scanf("%d", &movies[booking_count].seats);
    movies[booking_count].booked_seats = 0;
    booking_count++;
}

void book_ticket() {
    char movie_name[100];
    int seats_booked;
    printf("Enter movie name: ");
    scanf("%s", movie_name);
    printf("Enter number of seats to book: ");
    scanf("%d", &seats_booked);
    for (int i = 0; i < booking_count; i++) {
        if (strcmp(movies[i].name, movie_name) == 0) {
            if (movies[i].seats >= seats_booked + movies[i].booked_seats) {
                bookings[booking_count].booked_seats = seats_booked;
                strcpy(bookings[booking_count].movie_name, movie_name);
                strcpy(bookings[booking_count].name, "Customer");
                movies[i].booked_seats += seats_booked;
                printf("Ticket booked successfully!\n");
                return;
            } else {
                printf("Not enough seats available!\n");
                return;
            }
        }
    }
    printf("Movie not found!\n");
}

void view_bookings() {
    for (int i = 0; i < booking_count; i++) {
        printf("Movie Name: %s\n", bookings[i].movie_name);
        printf("Customer Name: %s\n", bookings[i].name);
        printf("Seats Booked: %d\n\n", bookings[i].booked_seats);
    }
}

void view_movies() {
    for (int i = 0; i < booking_count; i++) {
        printf("Movie Name: %s\n", movies[i].name);
        printf("Total Seats: %d\n", movies[i].seats);
        printf("Booked Seats: %d\n\n", movies[i].booked_seats);
    }
}

int main() {
    int choice;
    while (1) {
        printf("1. Add Movie\n");
        printf("2. Book Ticket\n");
        printf("3. View Bookings\n");
        printf("4. View Movies\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add_movie();
                break;
            case 2:
                book_ticket();
                break;
            case 3:
                view_bookings();
                break;
            case 4:
                view_movies();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}
