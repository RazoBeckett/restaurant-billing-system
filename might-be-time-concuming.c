#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Global Variables
int retry, i, j;
int no1, no2, no3, no4, no5;
void canceled();

void main()
{
    struct orders
    {
        char name[25];
        float price;
        int quantity;
    } order[6];
    int main_switch;

    if (main_switch == 0)
    {
        printf("\tWelcome To Golden Era Hotel\n\n");
    }

main_menu:
    printf("1.Read our menu\n");
    printf("2.Place Order\n");
    printf("3.Generate a bill\n");
    printf("4.Exit");
    printf("\n\nSelect Option: ");
    scanf("%d", &main_switch);
    switch (main_switch)
    {
    case 1:
        printf("\n-----------Menu-----------\n");
        printf("   Name              Price\n");
        printf("1. Panner Masla      40rs\n");
        printf("2. Shahi Panner      45rs\n");
        printf("3. Shevbahaji        50rs\n");
        printf("4. Chicken Biryani   70rs\n");
        printf("5. Chicken Kabab     80rs\n");
        printf("6. BACK\n");
        printf("--------------------------\n");
        goto main_menu;
        break;
    case 2:
    placeOrder:
        int order_input, r;
        printf("\nWhat would you like to have?\n--> ");
        scanf("%d", &order_input);

        switch (order_input)
        {
        case 1:
            strcpy(order[1].name, "Panner Masla");
            order[1].price = 40;
            printf("\nYou have selected Panner Masla.");
        _1:
            printf("\nPlease Enter your Quantity\n--> ");
            scanf("%d", &order[1].quantity);
            if (order[1].quantity == 0)
            {
                printf("Quantity Can't Be 0!");
                goto _1;
            }

            printf("\nDo you want to add-on?(1-Yes, 2-No, 3-Cancel)\n--> ");
            scanf("%d", &r);

            if (r == 1)
            {
                printf("----------------------------------------------------\n");
                goto placeOrder;
            }
            else if (r == 2)
            {
                no1 = 1;
                printf("----------------------------------------------------\n");
                main();
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
            order[2].price = 45;
            printf("\nYou have selected Shahi Panner.");
        _2:
            printf("\nPlease Enter your Quantity\n--> ");
            scanf("%d", &order[2].quantity);
            if (order[2].quantity == 0)
            {
                printf("Quantity Can't Be 0!");
                goto _2;
            }
            printf("\nDo you want to add-on?(1-Yes, 2-No, 3-Cancel)\n--> ");
            scanf("%d", &r);

            if (r == 1)
            {
                printf("----------------------------------------------------\n");
                goto placeOrder;
            }
            else if (r == 2)
            {
                no2 = 1;
                printf("----------------------------------------------------\n");
                main();
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
            order[3].price = 50;
            printf("\nYou have selected Shevbahaji.");
        _3:
            printf("\nPlease Enter your Quantity\n--> ");
            scanf("%d", &order[3].quantity);
            if (order[3].quantity == 0)
            {
                printf("Quantity Can't Be 0!");
                goto _3;
            }
            printf("\nDo you want to add-on?(1-Yes, 2-No, 3-Cancel)\n--> ");
            scanf("%d", &r);

            if (r == 1)
            {
                printf("----------------------------------------------------\n");
                goto placeOrder;
            }
            else if (r == 2)
            {
                no3 = 1;
                printf("----------------------------------------------------\n");
                main();
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
            order[4].price = 70;
            printf("\nYou have selected Chicken Biryani.");
        _4:
            printf("\nPlease Enter your Quantity\n--> ");
            scanf("%d", &order[4].quantity);
            if (order[4].quantity == 0)
            {
                printf("Quantity Can't Be 0!");
                goto _4;
            }
            printf("\nDo you want to add-on?(1-Yes, 2-No, 3-Cancel)\n--> ");
            scanf("%d", &r);

            if (r == 1)
            {
                printf("----------------------------------------------------\n");
                goto placeOrder;
            }
            else if (r == 2)
            {
                no4 = 1;
                printf("----------------------------------------------------\n");
                main();
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
            order[5].price = 80;
            printf("\nYou have selected Chicken Kabab.");
        _5:
            printf("\nPlease Enter your Quantity\n--> ");
            scanf("%d", &order[5].quantity);
            if (order[5].quantity == 0)
            {
                printf("Quantity Can't Be 0!");
                goto _5;
            }
            printf("\nDo you want to add-on?(1-Yes, 2-No, 3-Cancel)\n--> ");
            scanf("%d", &r);

            if (r == 1)
            {
                printf("----------------------------------------------------\n");
                goto placeOrder;
            }
            else if (r == 2)
            {
                no5 = 1;
                printf("----------------------------------------------------\n");
                main();
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
            main();

        default:
        retry:

            printf("Invalid Choice, Try Again!\n");
            system("Pause");
            goto placeOrder;
            break;
        }
        break;
    case 3:
        float cgst, sgst, total, cal_order, cal_price, cal_quantity;

        printf("\n\n\t                 Golden Era Hotel\n");
        printf("\t        G.T ROAD, MURTHAL, SONIPAT, HARYANA\n");
        printf("\t         PHONE NO: 0130-2475585, 86071XXXXX\n");
        printf("\t             GSTIN: 06ABIFS38901K1Z3\n");
        printf("\t----------------------------------------------------\n");
        printf("\tOrder Names                  Qty    Price    Value\n");
        printf("\t----------------------------------------------------\n");

        // Place for order names
        if (no1 == 1)
        {
            printf("\t%-29s%2d     %3.2f    %3.2f\n", order[1].name, order[1].quantity, order[1].price, (order[1].price * order[1].quantity));
        }
        if (no2 == 1)
        {
            printf("\t%-29s%2d     %3.2f    %3.2f\n", order[i].name, order[i].quantity, order[i].price, (order[i].price * order[i].quantity));
        }
        if (no3 == 1)
        {
            printf("\t%-29s%2d     %3.2f    %3.2f\n", order[i].name, order[i].quantity, order[i].price, (order[i].price * order[i].quantity));
        }
        if (no4 == 1)
        {
            printf("\t%-29s%2d     %3.2f    %3.2f\n", order[i].name, order[i].quantity, order[i].price, (order[i].price * order[i].quantity));
        }
        if (no5 == 1)
        {
            printf("\t%-29s%2d     %3.2f    %3.2f\n", order[i].name, order[i].quantity, order[i].price, (order[i].price * order[i].quantity));
        }
        printf("\t----------------------------------------------------\n");

        cal_price = (order[1].price * order[1].quantity) + (order[2].price * order[2].quantity) + (order[3].price * order[3].quantity) + (order[4].price * order[4].quantity) + (order[5].price * order[5].quantity);

        printf("\tSUBTOTAL                                     %3.2f\n", cal_price);

        sgst = cal_price * 9 / 100; // adding sgst.
        printf("\tAdd S GST(9.000%%) on %3.2f                    %3.2f\n", cal_price, sgst);

        cgst = cal_price * 9 / 100; // adding cgst.
        printf("\tAdd C GST(9.000%%) on %3.2f                    %3.2f\n", cal_price, cgst);

        total = sgst + cgst + cal_price;                                         // addition of taxes to generate total amount.
        printf("\tAmmount Incl of All Taxes                    %3.2f\n", total); // final amount would be displayed.
        printf("\n");
        printf("\n");
        printf("\n");
        printf("\tCahier: Jack                              E & O E\n");
        printf("\n");
        printf("\t              Thank You For Your Visit\n");
        printf("\t                 Have A Nice Day!\n\n");
        break;
    case 4:
        exit(0);
    default:
        printf("Invalid Choice, Try Again?\n");
        system("Pause");
        goto main_menu;
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
        main();
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