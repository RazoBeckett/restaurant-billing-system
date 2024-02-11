#include <stdio.h>

#define MENU_SIZE 5
#define MAX_NAME_LENGTH 25

struct MenuItem {
    char name[MAX_NAME_LENGTH];
    float price;
    int quantity;
};

void displayMenu() {
    printf("\n-----------Menu-----------\n");
    printf("   Name              Price\n");
    printf("1. Paneer Masala     40rs\n");
    printf("2. Shahi Paneer      45rs\n");
    printf("3. Shev Bhaji         50rs\n");
    printf("4. Chicken Biryani   70rs\n");
    printf("5. Chicken Kabab     80rs\n");
    printf("--------------------------\n");
}

void placeOrder(struct MenuItem menu[], int choice) {
    printf("\nPlease Enter the Quantity for %s\n--> ", menu[choice - 1].name);
    scanf("%d", &menu[choice - 1].quantity);
}

void displayBill(struct MenuItem menu[]) {
    printf("\n\n\t                 Golden Era Hotel\n");
    printf("\t        G.T ROAD, MURTHAL, SONIPAT, HARYANA\n");
    printf("\t         PHONE NO: 0130-2475585, 86071XXXXX\n");
    printf("\t             GSTIN: 06ABIFS38901K1Z3\n");
    printf("\t----------------------------------------------------\n");
    printf("\tOrder Names                  Qty    Price    Value\n");
    printf("\t----------------------------------------------------\n");

    float subtotal = 0;

    for (int i = 0; i < MENU_SIZE; i++) {
        if (menu[i].quantity > 0) {
            printf("\t%-29s%2d     %3.2f    %3.2f\n", menu[i].name, menu[i].quantity, menu[i].price, (menu[i].price * menu[i].quantity));
            subtotal += menu[i].price * menu[i].quantity;
        }
    }

    printf("\t----------------------------------------------------\n");
    printf("\tSUBTOTAL                                     %3.2f\n", subtotal);

    float sgst = subtotal * 9 / 100;
    printf("\tAdd S GST(9.000%%) on %3.2f                  %3.2f\n", subtotal, sgst);

    float cgst = subtotal * 9 / 100;
    printf("\tAdd C GST(9.000%%) on %3.2f                  %3.2f\n", subtotal, cgst);

    float total = sgst + cgst + subtotal;
    printf("\tAmount Incl of All Taxes                    %3.2f\n", total);

    printf("\n\n\n\tCashier: Jack                             E & O E\n");
    printf("\n\t              Thank You For Your Visit\n");
    printf("\t                 Have A Nice Day!\n\n");
}

int main() {
    struct MenuItem menu[MENU_SIZE] = {
        {"Paneer Masala", 40, 0},
        {"Shahi Paneer", 45, 0},
        {"Shev Bhaji", 50, 0},
        {"Chicken Biryani", 70, 0},
        {"Chicken Kabab", 80, 0}
    };

    int choice;
    do {
        printf("\n1. Read our menu\n");
        printf("2. Place Order\n");
        printf("3. Generate a bill\n");
        printf("4. Exit\n\n");
        printf("Select Option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayMenu();
                break;
            case 2:
                displayMenu();
                printf("\nWhat would you like to order?\n--> ");
                scanf("%d", &choice);
                if (choice < 1 || choice > MENU_SIZE) {
                    printf("Invalid Choice, Try Again!\n");
                } else {
                    placeOrder(menu, choice);
                }
                break;
            case 3:
                displayBill(menu);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid Choice, Try Again?\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
