#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

char printMenu();
void calculate();
void canceled();
// Global Variables
int retry, i, j = 0;

// Global Structure.
struct orders
{
    char name[25];
    int price;
    int quantity;
} order[5];

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
        strcpy(order[1].name, "Panner Masla");
        printf("\nYou have selected Panner Masla.");
        printf("\nPlease Enter your Quantity\n--> ");
        scanf("%d", &order[1].quantity);
        order[1].price = 40;
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
            j = j + 2;
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
        strcpy(order[2].name, "Shahi Panner");
        printf("\nYou have selected Shahi Panner.");
        printf("\nPlease Enter your Quantity\n--> ");
        scanf("%d", &order[2].quantity);

        order[2].price = 45;

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
            j = j + 3;
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
        strcpy(order[3].name, "Shevbhahaji");
        printf("\nYou have selected Shevbahaji.");
        printf("\nPlease Enter your Quantity\n--> ");
        scanf("%d", &order[3].quantity);
        order[3].price = 50;

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
            j = j + 4;
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
        strcpy(order[4].name, "Chicken Biryani");
        printf("\nYou have selected Chicken Biryani.");
        printf("\nPlease Enter your Quantity\n--> ");
        scanf("%d", &order[4].quantity);
        order[4].price = 70;

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
            j = j + 5;
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
        strcpy(order[5].name, "Chicken Kabab");
        printf("\nYou have selected Chicken Kabab.");
        printf("\nPlease Enter your Quantity\n--> ");
        scanf("%d", &order[5].quantity);
        order[5].price = 80;

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
            j = j + 6;
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
    int cgst, sgst, total, cal_order, cal_price, cal_quantity;

    printf("              1 two ka four Restaurant\n");
    printf("        G.T ROAD, MURTHAL, SONIPAT, HARYANA\n");
    printf("         PHONE NO: 0130-2475585, 86071XXXXX\n");
    printf("             GSTIN: 06ABIFS38901K1Z3\n");
    printf("---------------------------------------------------\n");
    printf("Order Names                  Qty    Value    Price\n");
    printf("---------------------------------------------------\n");

    // Place for order names
    for (int i = 1; i < j; ++i)
    {
        printf("%s                  %d       0        %2d\n", order[i].name, order[i].quantity, order[i].price);
    }

    // printf("%s %d %d\n", order[2].name, order[2].quantity, order[2].price);
    // printf("%s %d %d\n", order[3].name, order[3].quantity, order[3].price);
    // printf("%s %d %d\n", order[4].name, order[4].quantity, order[4].price);
    // printf("%s %d %d\n", order[5].name, order[5].quantity, order[5].price);
    // printf("%s                %d        0         %d\n", order[1].name, order[1].quantity, order[1].price);
    // printf("%s                %d        0         %d\n", order[2].name, order[2].quantity, order[2].price);
    // printf("%s                %d        0         %d\n", order[3].name, order[3].quantity, order[3].price);
    // printf("%s                %d        0         %d\n", order[4].name, order[4].quantity, order[4].price);
    // printf("%s                %d        0         %d\n", order[5].name, order[5].quantity, order[5].price);

    printf("---------------------------------------------------\n");

    // adding all order price together.
    cal_price = order[1].price + order[2].price + order[3].price + order[4].price + order[5].price;
    // adding all order quantity together.
    cal_quantity = order[1].quantity + order[2].quantity + order[3].quantity + order[4].quantity + order[5].quantity;

    cal_price = cal_price * cal_quantity; // adding quantity
    printf("SUBTOTAL                                      %3d\n", cal_price);

    sgst = cal_price * 9 / 100; // adding sgst.
    printf("Add S GST(9.000%%) on XX.X                     %3d\n", sgst);

    cgst = cal_price * 9 / 100; // adding cgst.
    printf("Add C GST(9.000%%) on XX.X                     %3d\n", cgst);

    total = sgst + cgst + cal_price;                                      // addition of taxes to generate total amount.
    printf("Ammount Incl of All Taxes                     %3d\n", total); // final amount would be displayed.

    printf("\n");
    printf("\n");
    printf("\n");
    printf("Cahier: Jack                              E & O E\n");
    printf("\n");
    printf("              Thank You For Your Visit\n");
    printf("                 Have a nice day!\n\n");
    // system("pause");
}