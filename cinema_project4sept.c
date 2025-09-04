/*ANANYA PANT - 590021797
AVISHI SINGHAL - 590022192
RANGULA KANISHKA GOUD - 590021968
SANA*/


#include <stdio.h>

int main() {
    int premium = 0, standard = 0, economy = 0;
    int ticket, c1, c2, c3, total, total_ticket, discount = 0, bill;
    int t1, t2, t3;
    char choice;

    printf("Welcome to cinema\n");
    printf("Do you want to book ticket? Enter y for yes and n for no: ");
    scanf(" %c", &choice); 

    if (choice == 'n' || choice == 'N') {
        printf("Bye bye\n");
        return 0;
    }

    printf("\nPremium Seats: Rs.200\nStandard Seats: Rs.150\nEconomy Seats: Rs.100\n");
    printf("Enter 1 for Premium Seats\nEnter 2 for Standard Seats\nEnter 3 for Economy Seats\n");

    printf("Enter seat type you prefer (1/2/3): ");
    scanf("%d", &ticket);

    switch(ticket) {
        case 1:
            premium = premium + 1;
            printf("You selected Premium seats\n");
            break;
        case 2:
            standard = standard + 1;
            printf("You selected Standard seats\n");
            break;
        case 3:
            economy = economy + 1;
            printf("You selected Economy seats\n");
            break;
        default:
            printf("No such Choice\n");
            return 0;
    }

    printf("Enter number of Premium tickets you want: ");
    scanf("%d", &t1);
    printf("Enter number of Standard tickets you want: ");
    scanf("%d", &t2);
    printf("Enter number of Economy tickets you want: ");
    scanf("%d", &t3);

    c1 = t1 * 200;
    c2 = t2 * 150;
    c3 = t3 * 100;
    total = c1 + c2 + c3;
    total_ticket = t1 + t2 + t3;

    if (total_ticket >= 5) {
        discount = (total * 5) / 100;
        printf("You got 5percent discount\n");
        total = total - discount;
    } else {
        printf("No discount\n");
    }

    printf("Your bill is: %d\n", total);

    printf("Do you want to book more tickets (y/n): ");
    scanf(" %c", &choice); 

    return 0;
}
