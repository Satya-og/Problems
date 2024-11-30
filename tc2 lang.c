#include <stdio.h>
#include <stdlib.h>

#define MAX_TICKETS 10  // Maximum number of tickets

// Structure to store ticket details
struct Ticket {
    int ticketNumber;
    char name[50];
    int isBooked;  // 0 if not booked, 1 if booked
};

// Function declarations
void viewAvailableTickets(struct Ticket tickets[], int n);
void bookTicket(struct Ticket tickets[], int n);
void viewBookedTickets(struct Ticket tickets[], int n);

int main() {
    struct Ticket tickets[MAX_TICKETS];  // Array of tickets
    int choice;
    
    // Initialize tickets (setting isBooked to 0 for available tickets)
    for (int i = 0; i < MAX_TICKETS; i++) {
        tickets[i].ticketNumber = i + 1;
        tickets[i].isBooked = 0;  // All tickets are available initially
    }

    do {
        // Display menu
        printf("\nTicket Booking System\n");
        printf("1. View Available Tickets\n");
        printf("2. Book a Ticket\n");
        printf("3. View Booked Tickets\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                viewAvailableTickets(tickets, MAX_TICKETS);
                break;
            case 2:
                bookTicket(tickets, MAX_TICKETS);
                break;
            case 3:
                viewBookedTickets(tickets, MAX_TICKETS);
                break;
            case 4:
                printf("Exiting system.\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

// Function to view available tickets
void viewAvailableTickets(struct Ticket tickets[], int n) {
    printf("\nAvailable Tickets:\n");
    int available = 0;
    for (int i = 0; i < n; i++) {
        if (tickets[i].isBooked == 0) {
            printf("Ticket Number: %d\n", tickets[i].ticketNumber);
            available = 1;
        }
    }
    if (!available) {
        printf("No tickets available.\n");
    }
}

// Function to book a ticket
void bookTicket(struct Ticket tickets[], int n) {
    int ticketNumber;
    char name[50];
    int found = 0;

    printf("\nEnter ticket number to book: ");
    scanf("%d", &ticketNumber);

    if (ticketNumber < 1 || ticketNumber > n) {
        printf("Invalid ticket number. Please try again.\n");
        return;
    }

    // Check if the ticket is already booked
    if (tickets[ticketNumber - 1].isBooked == 1) {
        printf("Sorry, this ticket is already booked.\n");
    } else {
        printf("Enter your name: ");
        // Using "scanf" with %[^\n] to allow spaces in the name
        scanf(" %[^\n]%*c", name);
        tickets[ticketNumber - 1].isBooked = 1;  // Mark as booked
        snprintf(tickets[ticketNumber - 1].name, sizeof(tickets[ticketNumber - 1].name), "%s", name);
        printf("Ticket %d has been booked successfully for %s.\n", ticketNumber, name);
    }
}

// Function to view booked tickets
void viewBookedTickets(struct Ticket tickets[], int n) {
    printf("\nBooked Tickets:\n");
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (tickets[i].isBooked == 1) {
            printf("Ticket Number: %d, Booked by: %s\n", tickets[i].ticketNumber, tickets[i].name);
            found = 1;
        }
    }

    if (!found) {
        printf("No tickets have been booked yet.\n");
    }
}

