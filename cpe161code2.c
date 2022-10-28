#include<stdio.h>
#include<conio.h>
main()
{
	int = y=10,z=5,t=2,ten,five,two,one,money;
	printf("How much?");
	scanf("%d,&money");
	ten=money/y;
	five=money%y/z;
	two=money%y%z/t;
	one=money%y%z%t;
	printf("All change of %d",money);
	printf("number of ten bath is coin\n",ten);
	printf("number of five bath is coin\n",five);
	printf("number of two bath is coin\n",two);
	printf("number of one bath is coin\n",one);
	getch();
	return 0;
}
