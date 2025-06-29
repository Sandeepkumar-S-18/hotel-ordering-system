#include <stdio.h>

char *productNames[] = {"Veg Biryani", "Paneer Butter Masala", "Masala Dosa", "Idli Vada Combo", "Gobi Manchurian", "Tandoori Roti (2 pcs)", "Dal Fry", "Filter Coffee"};

int productPrices[] = {150, 180, 60, 50, 120, 30, 100, 25};
int orderQuantities[8] = {0};

void requestMenu()
{
    printf("\n\n ======================================= \n");
    printf("|\t\tVEG MEAL MENU\t\t|\n");
    printf(" ======================================= \n");
    printf("Welcome! Here's our delicious menu for today:\n\n");
    printf(" ------------------------------------------------\n");
    printf("| S.No |      Product Name       |  Price (Rs.) |\n");
    printf(" ------------------------------------------------\n");
    printf("|  1   | Veg Biryani             |     150       |\n");
    printf("|  2   | Paneer Butter Masala    |     180       |\n");
    printf("|  3   | Masala Dosa             |      60       |\n");
    printf("|  4   | Idli Vada Combo         |      50       |\n");
    printf("|  5   | Gobi Manchurian         |     120       |\n");
    printf("|  6   | Tandoori Roti (2 pcs)   |      30       |\n");
    printf("|  7   | Dal Fry                 |     100       |\n");
    printf("|  8   | Filter Coffee           |      25       |\n");
    printf(" ------------------------------------------------\n");
}

void orderFood()
{
    int serialNumber, quantity;
    char choice;
    int orderPlaced = 0;

    do 
    {
        requestMenu();

        printf("\nEnter the serial number of the item you want to order: ");
        scanf("%d", &serialNumber);

        if(serialNumber < 1 || serialNumber > 8) 
        {
            printf("Invalid product serial number. Returning to main menu...\n");
            return;
        }

        printf("Enter quantity for %s: ", productNames[serialNumber - 1]);
        scanf("%d", &quantity);

        if(quantity <= 0) 
        {
            printf("Invalid quantity. Returning to main menu...\n");
            return;
        }

        orderQuantities[serialNumber - 1] += quantity;
        orderPlaced = 1;

        printf("Would you like to order another item? (y/n): ");
        scanf(" %c", &choice);

    } 
	while(choice == 'y' || choice == 'Y');

    if(!orderPlaced)
        return;

    printf("\n\n============== ORDER SUMMARY ==============\n");
    printf("| Product Name            | Qty |  Total   |\n");
    printf("-------------------------------------------\n");

    int grandTotal = 0;
    for(int i = 0; i < 8; i++) 
    {
        if(orderQuantities[i] > 0) 
        {
            int itemTotal = orderQuantities[i] * productPrices[i];
            grandTotal += itemTotal;
            printf("| %-23s | %3d | Rs. %-5d |\n", productNames[i], orderQuantities[i], itemTotal);
        }
    }

    printf("-------------------------------------------\n");
    printf("Total Amount to Pay: Rs. %d\n", grandTotal);
    printf("Thank you for your order!\n");
}

void payment()
{
    printf("\nPAYMENT STATUS:\n");
    printf("Please proceed to the counter or scan the QR code to pay.\n");
}

void main()
{
    int choice;
    char continueApp;

    do 
    {
        printf("\n =============================================== \n");
        printf("|\t\tWELCOME TO HOTEL\t\t|\n");
        printf(" =============================================== \n");

        printf("\n1. MENU\t2. ORDER FOOD\t3. PAYMENT\t4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                requestMenu();
                printf("\nWould you like to place an order now? (y/n): ");
                scanf(" %c", &continueApp);
                if(continueApp == 'y' || continueApp == 'Y') 
				{
                    orderFood();
                }
                break;
            case 2:
                orderFood();
                break;
            case 3:
                payment();
                break;
            case 4:
                printf("Thank you for visiting our Hotel! Have a healthy day.\n");
                break;
            default:
                printf("INVALID CHOICE. Please try again.\n");
				break;
        }

        printf("\nDo you want to return to the main menu? (y/n): ");
        scanf(" %c", &continueApp);

    }
	while(continueApp == 'y' || continueApp == 'Y');

    printf("Thank you for visiting! See you again.\n");
}
