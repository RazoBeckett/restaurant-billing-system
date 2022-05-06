#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

char printMenu();
void calculate();
void canceled();
// Global Variables
int price, quantity, retry;

// Global Structure.
struct orders
{
    char name[25];
    int price;
    int quant;
} order;

void main()
{
    system("cls");
    printf("\nWelcome To Golden Era Hotel\n");
    printMenu();
}

char printMenu()
{
    int order_input, x, r, land;

    if (retry == 1)
    {
        system("cls");
    }

    printf("\n-----------Menu-----------\n");
    printf("   Name              Price\n");
    printf("1. Panner Masla      40rs\n");
    printf("2. Shahi Panner      45rs\n");
    printf("3. Shevbahaji        50rs\n");
    printf("4. Chicken Biryani   70rs\n");
    printf("5. Chicken Kabab     80rs\n");
    printf("6. EXIT\n");
    printf("--------------------------\n");

    printf("\nWhat would you like to have?\n--> ");
    scanf("%d", &order_input);

    switch (order_input)
    {
    case 1:
        printf("\nYou have selected Panner Masla.");
        printf("\nPlease Enter your Quantity\n--> ");
        scanf("%d", &quantity);
        order.quant = quantity;
        order.price = 40;
        printf("\nDo you want to add-on?(1-Yes, 2-No, 3-Cancel)\n--> ");
        scanf("%d", &r);

        if (r == 1)
        {
            system("cls"); // clear screen.
            {
                printMenu();
            }
        }
        else if (r == 2)
        {
            strcpy(order.name, "Panner Masla");
            calculate();
        }

        else if (r == 3)
        {
            canceled();
        }
        else
        {
            goto retry;
        }
        break;
    case 2:
        printf("\nYou have selected Shahi Panner.");
        printf("\nPlease Enter your Quantity\n--> ");
        scanf("%d", &quantity);

        order.price = 45;
        land = quantity * 8.00;

        printf("\nDo you want to add-on?(1-Yes, 2-No, 3-Cancel)\n--> ");
        scanf("%d", &r);

        if (r == 1)
        {
            system("cls"); // clear screen.
            {
                printMenu();
            }
        }
        else if (r == 2)
        {
            calculate();
        }

        else if (r == 3)
        {
            canceled();
        }
        else
        {
            goto retry;
        }
        break;
    case 3:
        printf("\nYou have selected Shevbahaji.");
        printf("\nPlease Enter your Quantity\n--> ");
        scanf("%d", &quantity);

        order.price = 50;
        land = quantity * 8.00;

        printf("\nDo you want to add-on?(1-Yes, 2-No, 3-Cancel)\n--> ");
        scanf("%d", &r);

        if (r == 1)
        {
            system("cls"); // clear screen.
            {
                printMenu();
            }
        }
        else if (r == 2)
        {
            calculate();
        }

        else if (r == 3)
        {
            canceled();
        }
        else
        {
            goto retry;
        }
        break;
    case 4:
        printf("\nYou have selected Chicken Biryani.");
        printf("\nPlease Enter your Quantity\n--> ");
        scanf("%d", &quantity);

        order.price = 70;
        land = quantity * 8.00;

        printf("\nDo you want to add-on?(1-Yes, 2-No, 3-Cancel)\n--> ");
        scanf("%d", &r);

        if (r == 1)
        {
            system("cls"); // clear screen.
            {
                printMenu();
            }
        }
        else if (r == 2)
        {
            calculate();
        }

        else if (r == 3)
        {
            canceled();
        }
        else
        {
            goto retry;
        }
        break;
    case 5:
        printf("\nYou have selected Chicken Kabab.");
        printf("\nPlease Enter your Quantity\n--> ");
        scanf("%d", &quantity);

        order.price = 80;
        land = quantity * 8.00;

        printf("\nDo you want to add-on?(1-Yes, 2-No, 3-Cancel)\n--> ");
        scanf("%d", &r);

        if (r == 1)
        {
            system("cls"); // clear screen.
            {
                printMenu();
            }
        }
        else if (r == 2)
        {
            calculate();
        }

        else if (r == 3)
        {
            canceled();
        }
        else
        {
            goto retry;
        }
        break;
    case 6:
        exit(0);

    default:
    retry:
        system("cls");
        printf("Invalid Choice, Try Again?\n");
        system("Pause");
        printMenu();
        break;
    }
}

void canceled()
{
canceled:
    printf("\nYou Canceled Your Order (1-Retry, 2-Exit)\n--> ");
    scanf("%d", &retry);
    if (retry == 1)
    {
        printMenu();
    }
    else if (retry == 2)
    {
        exit(0);
    }
    else
    {
        printf("Invalid Choice!");
        goto canceled;
    }
}

void calculate()
{
    int cgst, sgst, total;

    printf("              1 two ka four Restaurant\n");
    printf("        G.T ROAD, MURTHAL, SONIPAT, HARYANA\n");
    printf("         PHONE NO: 0130-2475585, 86071XXXXX\n");
    printf("             GSTIN: 06ABIFS38901K1Z3\n");
    printf("---------------------------------------------------\n");
    printf("Order Names                  Qty    Value    Price\n");
    printf("---------------------------------------------------\n");
    // Place for order names
    printf("%s                %d        0         %d\n", order.name, order.quant, order.price);
    printf("---------------------------------------------------\n");

    order.price = order.price * quantity; // adding quantity 
    printf("SUBTOTAL                                      %3d\n", order.price);

    sgst = order.price * 9 / 100; // adding sgst.
    printf("Add S GST(9.000%%) on XX.X                     %3d\n", sgst);
    
    cgst = order.price * 9 / 100; // adding cgst.
    printf("Add C GST(9.000%%) on XX.X                     %3d\n", cgst);

    total = sgst + cgst + order.price; // addition of taxes to generate total amount.
    printf("Ammount Incl of All Taxes                     %3d\n", total); // final amount would be displayed.

    printf("\n");
    printf("\n");
    printf("\n");
    printf("Cahier: Jack                              E & O E\n");
    printf("\n");
    printf("              Thank You For Your Visit\n");
    printf("                 Have a nice day!\n\n");
    system("pause");
}