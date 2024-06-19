#include<stdio.h>

main()
{
    int choice,quantity,totalamount=0;
    char moreorders;
     
    do
    {
        printf("*****Menu*****");
        printf("\n1.Pizza");
        printf("\nPrice: 180rs/pcs");
        printf("\n2.Burger");
        printf("\nPrice: 100rs/pcs");
        printf("\n3.Dosa");
        printf("\nPrice: 120rs/pcs");
        printf("\n4.Idli");
        printf("\nPrice: 50rs/pcs");

        printf("\nPlease Enter your choose... : ");
        scanf("%d",&choice);
		
		if (choice == 1) 
		{
            printf("You have selected Pizza.\n");
            printf("Enter the quantity : ");
            scanf("%d", &quantity);
            totalamount += 180 * quantity;
            printf("Amount: %d\n", 180 * quantity);
        } 
		else if (choice == 2) 
		{
            printf("You have selected Burger.\n");
            printf("Enter the quantity : ");
            scanf("%d", &quantity);
            totalamount += 100 * quantity;
            printf("Amount: %d\n", 100 * quantity);
        } 
		else if (choice == 3) 
		{
            printf("You have selected Dosa.\n");
            printf("Enter the quantity : ");
            scanf("%d", &quantity);
            totalamount += 120 * quantity;
            printf("Amount: %d\n", 120 * quantity);
        } 
		else if (choice == 4) 
		{
            printf("You have selected Idli.\n");
            printf("Enter the quantity : ");
            scanf("%d", &quantity);
            totalamount += 50 * quantity;
            printf("Amount: %d\n", 50 * quantity);
        } 
		else 
		{
            printf("Invalid choice. Please select again.\n");
        }
        
        printf("Total Amount is = %d", totalamount);

        printf("\nDo you want to place more orders? (yes/no): ");
        scanf(" %c", &moreorders);
        
    } 
	while (moreorders == 'y' || moreorders == 'Y');

    printf("\nTotal Amount is : %d", totalamount);
	
}

