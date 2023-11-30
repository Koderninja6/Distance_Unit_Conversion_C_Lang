#include<stdio.h>
#include<conio.h>
void main()
{int d,mm,cm,m,km,i=1;
repeat:
printf("Enter the no. in integer you want conversion for:\n");
printf("1=Millimetre\n2=Centimetre\n3=Metre\n4=Kilometre");
scanf("%d",&d);
switch(d)
{
case 1:
	printf("Enter distance in mm:");
	scanf("%d",&mm);
	printf("The conversion of %d mm is\n",mm);
	printf("Centimetre=%d\n",mm/10);
	printf("Metre=%d\n",mm/1000);
	printf("Kilometre=%d\n",mm/1000000);
	
	break;
	case 2:
		printf("Enter distance in cm:");
		scanf("%d",&cm);
		printf("The conversion of %d Centimetre is\n",cm);
	printf("Millimetre=%d\n",cm*10);
	printf("Metre=%d\n",cm/100);
	printf("Kilometre=%d\n",cm/100000);
		break;
		case 3:
			printf("Enter distance in Metre:");
		scanf("%d",&m);
		printf("The conversion of %d Metre is\n",m);
		printf("The conversion of %d Metre is\n",m);
	printf("Millimetre=%d\n",m*1000);
	printf("CentiMetre=%d\n",m*100);
	printf("Kilometre=%d\n",m/1000);
		break;
		case 4:
			printf("Enter distance in Kilometre:");
		scanf("%d",&km);
		printf("The conversion of %d Kilometre is\n",km);
	printf("Millimetre=%d\n",km*1000000);
	printf("CentiMetre=%d\n",km*100000);
	printf("Metre=%d\n",km*1000);
		break;
		default:
			printf("Entered wrong number!");
			
			
			
}
i=i++;
			if(i<=5)
			goto repeat;
}
