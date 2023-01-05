#include<stdio.h>
#include<stdlib.h>
int menu()
{
int a= 30, b=20, c=10 , bill1,bill2,bill3 ,e;
printf("::::MENU::::\n");
printf("1. SAMOSA   30/-\n",a);
printf("2. DOSA     20/-\n",b);
printf("3. TEA      10/-\n",c);	
printf("0. EXIT\n");
}

int order()
{
	int samosa,dosa ,count1=0,count2=0,count3=0 ,tea,d,e,g,f=1,bill=0,bill1=0,bill2=0,bill3=0;
	while (f)
	{
		menu();
		printf("enter your choice : ");
		scanf("%d",&d);
		
		switch (d)
		{
			case 1 : 
			printf("How many plates : ");
			scanf("%d",&samosa);
			printf("\nOk nice choice....\nAnything you want....\n\n");
			bill1 = bill1+(30*samosa);
			count1 = samosa + count1;
			break;
						
			case 2 : 
			printf("How many plates : ");
			scanf("%d",&dosa);
			printf("\nOk nice choice....\nAnything you want....\n\n");
			bill2 = bill2+(20*dosa);
			count2 = dosa + count2;
		break;
			
			case 3 : 
			printf("How many cups : ");
			scanf("%d",&tea);
			printf("\nOk nice choice....\nAnything you want....\n\n");
			bill3 = bill3+(10*tea);
			count3 = tea + count3;
			break;
		
			case 0 :
				f=0;
				bill=bill1+bill2+bill3;
		if(bill1 != 0)
		{
		printf("SAMOSA              %d                  %d \n",count1,bill1);
		}
		if(bill2 != 0)
		{
		printf("DOSA                %d                  %d \n",count2,bill2);
		}
		if(bill3 != 0)
		{
		printf("TEA                 %d                  %d \n",count3,bill3);
		}
				break;
		}
		}
	return bill;
		
}

void BILL()
{
	int g,h,cash,Order;
	Order = order();
	printf("Your bill is %d\n",Order);
	printf("Received Cash : ");
	scanf("%d",&g);
	
    cash=g-Order;
	printf("\nreturn cash %d\n",cash);
	
	h=cash/2000;
	if(h!=0)
	{
	printf("\n%d NOTE(S) OF 2000\n",h);
	}
	
	cash=cash-(h*2000);
	h=cash/500;
	if(h!=0)
	{
	printf("%d NOTE(S) OF 500\n",h);
	}
	
	cash=cash-(h*500);
	h=cash/200;
	if(h!=0)
	{
	printf("%d NOTE(S) OF 200\n",h);
	}
	
	cash=cash-(h*200);
	h=cash/100;
	if(h!=0)
	{
	printf("%d NOTE(S) OF 100\n",h);
	}
	
	cash=cash-(h*100);
	h=cash/50;
	if(h!=0)
	{
	printf("%d NOTE(S) OF 50\n",h);
	}	
	cash=cash-(h*50);
	h=cash/20;
	if(h!=0)
	{
	printf("%d NOTE(S) OF 20\n",h);
	}
	
	cash=cash-(h*20);
	h=cash/10;
	if(h!=0)
	{
	printf("%d NOTE(S) OF 10\n",h);
	}
	
	cash=cash-(h*10);
	h=cash/5;
	if(h!=0)
	{
	printf("%d NOTE(S) OF 5\n",h);
	}
	
	cash=cash-(h*5);
	h=cash/2;
	if(h!=0)
	{
	printf("%d COIN(S) OF 2\n",h);
	}
	
	cash=cash-(h*2);
	h=cash/1;
	if(h!=0)
	{
	printf("%d COIN(S) OF 1\n",h);
	}
}

int main()
{
printf("\t\t::::::WELCOME TO HOTEL TAPARI ::::::\n");
BILL();
printf("::::::::::::::::::::::: THANK YOU SIR/ MAAM VISIT AGAIN :::::::::::::::::::::::");
 
}


