#include<stdio.h>

main()
{
	int choice,quantity;
	int totalamount=0;
	int moreorders=1;
	
	while(moreorders==1)
	{
		printf("*****Menu*****\n");
		printf("1.Pizza");
		printf("\nPrice = 180rs/pcs");
		printf("\n2.Burger");
		printf("\nPrice = 100rs/pcs");
		printf("\n3.Dosa");
		printf("\nPrice = 120rs/pcs");
		printf("\n4.Idli");
		printf("\nPrice = 50rs/pcs");
		 
		printf("\nEnter Your Choice : ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("\nYou have selected Pizza");
				printf("\nEnter Quantity: ");
				scanf("%d",&quantity);
				totalamount += 180*quantity;
				printf("\nTotal Amount: %d",180*quantity);
				break;
				
		    case 2:
		    	printf("\nYou have selected Burger");
				printf("\nEnter Quantity: ");
				scanf("%d",&quantity);
				totalamount += 100*quantity;
				printf("\nTotal Amount: %d",100*quantity);
				break;
				
			case 3:
				printf("\nYou have selected Dosa");
				printf("\nEnter Quantity: ");
				scanf("%d",&quantity);
				totalamount += 120*quantity;
				printf("\nTotal Amount: %d",120*quantity);
				break;
				
			case 4:
				printf("\nYou have selected Idli");
				printf("\nEnter Quantity: ");
				scanf("%d",&quantity);
				totalamount += 50*quantity;
				printf("\nTotal Amount: %d",50*quantity);
				break;
				
			default:
			    printf("Invalid Choice");
					
			    		
		}
		printf("\nTotal Amount is = %d\n",totalamount);
        printf("\nDo you want to place more orders? (1 for yes / 0 for no): ");
        scanf("%d", &moreorders);
	}
	printf("\nFinal Total Amount is = %d\n", totalamount);
}
