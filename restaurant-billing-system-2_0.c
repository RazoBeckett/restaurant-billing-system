/*
Restaurant Billing System
FYCM-I      Batch: C
group members: Sanket Patil(53), Swaraj Pawar(55), Mayur Raut(56), Jay Shimpi(59), Chaitanya Sonawane(62)
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct orders
{
    char name[25];
    float price;
    int quantity;
} order[6];

void main()
{
    int main_switch, order_input, r;
    printf("\tWelcome To Golden Era Hotel\n");
    do
    {
        printf("\n1.Read our menu\n");
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
            printf("--------------------------\n");
            getch();
            break;
        case 2:
            printf("\nWhat would you like to have?\n--> ");
            scanf("%d", &order_input);
            switch (order_input)
            {
            case 1:
                strcpy(order[1].name, "Panner Masla");
                order[1].price = 40;
                printf("\nYou have selected Panner Masla.");
                printf("\nPlease Enter your Quantity\n--> ");
                scanf("%d", &order[1].quantity);
                break;
            case 2:
                strcpy(order[2].name, "Shahi Panner");
                order[2].price = 45;
                printf("\nYou have selected Shahi Panner.");
                printf("\nPlease Enter your Quantity\n--> ");
                scanf("%d", &order[2].quantity);
                break;
            case 3:
                strcpy(order[3].name, "Shevbhahaji");
                order[3].price = 50;
                printf("\nYou have selected Shevbahaji.");
                printf("\nPlease Enter your Quantity\n--> ");
                scanf("%d", &order[3].quantity);
                break;
            case 4:
                strcpy(order[4].name, "Chicken Biryani");
                order[4].price = 70;
                printf("\nYou have selected Chicken Biryani.");
                printf("\nPlease Enter your Quantity\n--> ");
                scanf("%d", &order[4].quantity);
                break;
            case 5:
                strcpy(order[5].name, "Chicken Kabab");
                order[5].price = 80;
                printf("\nYou have selected Chicken Kabab.");
                printf("\nPlease Enter your Quantity\n--> ");
                scanf("%d", &order[5].quantity);
                break;
            default:
                printf("Invalid Choice, Try Again!\n");
                system("Pause");
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

            /*Place for order names, value, price*/
            if (strlen(order[1].name) == 12)
            {
                printf("\t%-29s%2d     %3.2f    %3.2f\n", order[1].name, order[1].quantity, order[1].price, (order[1].price * order[1].quantity));
            }
            if (strlen(order[2].name) == 12)
            {
                printf("\t%-29s%2d     %3.2f    %3.2f\n", order[2].name, order[2].quantity, order[2].price, (order[2].price * order[2].quantity));
            }
            if (strlen(order[3].name) == 11)
            {
                printf("\t%-29s%2d     %3.2f    %3.2f\n", order[3].name, order[3].quantity, order[3].price, (order[3].price * order[3].quantity));
            }
            if (strlen(order[4].name) == 15)
            {
                printf("\t%-29s%2d     %3.2f    %3.2f\n", order[4].name, order[4].quantity, order[4].price, (order[4].price * order[4].quantity));
            }
            if (strlen(order[5].name) == 13)
            {
                printf("\t%-29s%2d     %3.2f    %3.2f\n", order[5].name, order[5].quantity, order[5].price, (order[5].price * order[5].quantity));
            }
            printf("\t----------------------------------------------------\n");

            cal_price = (order[1].price * order[1].quantity) + (order[2].price * order[2].quantity) + (order[3].price * order[3].quantity) + (order[4].price * order[4].quantity) + (order[5].price * order[5].quantity);

            printf("\tSUBTOTAL                                     %3.2f\n", cal_price);

            sgst = cal_price * 9 / 100; // adding sgst.
            printf("\tAdd S GST(9.000%%) on %3.2f                    %3.2f\n", cal_price, sgst);

            cgst = cal_price * 9 / 100; // adding cgst.
            printf("\tAdd C GST(9.000%%) on %3.2f                    %3.2f\n", cal_price, cgst);

            total = sgst + cgst + cal_price;
            printf("\tAmmount Incl of All Taxes                    %3.2f\n", total);
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\tCahier: Jack                              E & O E\n");
            printf("\n");
            printf("\t              Thank You For Your Visit\n");
            printf("\t                 Have A Nice Day!\n\n");
            getch();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Choice, Try Again?\n");
            getch();

            break;
        }
    } while (main_switch != 4);
}