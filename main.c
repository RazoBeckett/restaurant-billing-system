#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int start_menu, order, quantity, total, price, cgst, sgst;
//Menu item array
char order_1[100], order_2[100], order_3[100], order_4[100], order_5[100];
void main()
{
    do
    {
        //starting menu
        printf("1. Display Menu Card\n");
        printf("2. Add Dish in menu\n");
        printf("3. delete item from menu\n");
        printf("4. Get Order\n");
        printf("5. Generate Reciept\n");
        printf("6. Exit");

        //accepting value from user for starting menu options
        printf("\n\nEnter Your Choice: ");
        scanf("%d", &start_menu);

        //starting menu
        switch (start_menu)
        {
        case 1:
            printf("-----------Menu-----------\n");
            printf("   Name              Price\n");
            printf("1. Panner Masla      40rs\n");
            printf("2. Shahi Panner      45rs\n");
            printf("3. Shevbahaji        50rs\n");
            printf("4. Chicken Biryani   70rs\n");
            printf("5. Chicken Kabab     80rs\n");
            printf("--------------------------\n");
            system("pause");
            break;
        case 2:
            printf("what would you like to add?\n");
            scanf("%d", &order);
            goto add;
            break;
        case 3:
            /* code */
            break;
        case 4:
            printf("What would like to order?\n");
            scanf("%d", &order);
            printf("You choosed to order : %d\n", order);
        add:
            if (order == 1)
            {
                price = 40;
                printf("How much Quantity you want? : ");
                scanf("%d", &quantity);
                strcpy(order_1, "Panner Masla                                   40");
                goto calculate;
            }
            else if (order == 2)
            {
                price = 45;
                printf("How much Quantity you want? : ");
                scanf("%d", &quantity);
                strcpy(order_2, "Shahi Panner                                   45");
            }
            else if (order == 3)
            {
                price = 50;
                printf("How much Quantity you want? : ");
                scanf("%d", &quantity);
                strcpy(order_3, "Shevbhaji                                      50");
            }
            else if (order == 4)
            {
                price = 70;
                printf("How much Quantity you want? : ");
                scanf("%d", &quantity);
                strcpy(order_4, "Chicken Biryani                                70");
            }
            else if (order == 5)
            {
                price = 80;
                printf("How much Quantity you want? : ");
                scanf("%d", &quantity);
                strcpy(order_5, "Chicken Kabab                                  80");
                goto calculate;
            }
            else
            {
                printf("Invalid Choice");
            }
        calculate:
            price = price * quantity;
            break;
        case 5:
            printf("              1 two ka four Restaurant\n");
            printf("        G.T ROAD, MURTHAL, SONIPAT, HARYANA\n");
            printf("         PHONE NO: 0130-2475585, 86071XXXXX\n");
            printf("             GSTIN: 06ABIFS38901K1Z3\n");
            printf("---------------------------------------------------\n");
            printf("Order Names                  Qty    Value    Price\n");
            printf("---------------------------------------------------\n");
            printf("%s\n", order_1, price);
            printf("%s\n", order_2, price);
            printf("%s\n", order_3, price);
            printf("%s\n", order_4, price);
            printf("%s\n", order_5, price);
            printf("---------------------------------------------------\n");
            printf("SUBTOTAL                                      %3d\n", price);
            sgst = price * 9 / 100; // adding sgst.
            printf("Add S GST(9.000%%) on XX.X                     %3d\n", sgst);
            cgst = price * 9 / 100; // adding cgst.
            printf("Add C GST(9.000%%) on XX.X                     %3d\n", cgst);
            total = sgst + cgst + price;                                          // addition of taxes to generate total amount.
            printf("Ammount Incl of All Taxes                     %3d\n", total); // final amount would be displayed.
            printf("\n");
            printf("\n");
            printf("\n");
            printf("Cahier: Jack                              E & O E\n");
            printf("\n");
            printf("              Thank You For Your Visit\n");
            printf("                 Have a nice day!\n\n");
            system("pause");
            break;
        case 6:
            exit(0);
        default:
            printf("\nInvalid Choice\n! TRY AGAIN !\n");
            system("pause");
            system("cls");
            break;
        }
    } while (start_menu != 6);
}