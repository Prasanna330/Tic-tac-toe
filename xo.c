#include<stdio.h>
int main()
{   int i;char a[9];
	int posp1;
	int posp2;
	printf("\n*****WELCOME TO X-O GAME*****\n");
	printf("\n--RULES--\n");
	printf("1.Player 1 chooses either x or o \n2.If there are 3 Xs or Os sequentially in any direction,player who chose the particular letter wins \n");
	
	
	     printf("\nPlayer 1: X\n");
	 printf("Player 2: O\n");

    
    for(i=0;i<9;i++)
      {a[i]='_';}
    int n=9;
    while(n>0)
    {
		//for x
		printf("Player 1,enter your position:");
		scanf("%d",&posp1);
		if(a[posp1-1]=='_')
		{
			a[posp1-1]='x';
			if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[3]=='x'&&a[4]=='x'&&a[5]=='x')||(a[6]=='x'&&a[7]=='x'&&a[8]=='x')||(a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[1]=='x'&&a[4]=='x'&&a[7]=='x')||(a[2]=='x'&&a[5]=='x'&&a[8]=='x')||(a[0]=='x'&&a[4]=='x'&&a[8]=='x')||(a[2]=='x'&&a[4]=='x'&&a[6]=='x'))
			{
				printf("Player 1 wins!!!!\n");
				break;
			}
		for(i=0;i<3;i++)
		 {
			 printf("%c\t",a[i]);}
		  printf("\n");
		  for(i=3;i<6;i++)
		 {printf("%c\t",a[i]);}
		  printf("\n");
		  for(i=6;i<9;i++)
		 {printf("%c\t",a[i]);}
		  printf("\n");
		 }
		 //for x
		 //for x
		printf("Player 2,enter your position:");
		scanf("%d",&posp2);
		if(a[posp2-1]=='_')
		{
			a[posp2-1]='o';
			if((a[0]=='o'&&a[1]=='o'&&a[2]=='o')||(a[3]=='o'&&a[4]=='o'&&a[5]=='o')||(a[6]=='o'&&a[7]=='o'&&a[8]=='o')||(a[0]=='o'&&a[3]=='o'&&a[6]=='o')||(a[1]=='o'&&a[4]=='o'&&a[7]=='o')||(a[2]=='o'&&a[5]=='o'&&a[8]=='o')||(a[0]=='o'&&a[4]=='o'&&a[8]=='o')||(a[2]=='o'&&a[4]=='o'&&a[6]=='o'))
			{
				printf("Player 2 wins!!!!\n");
				break;
			}
		for(i=0;i<3;i++)
		 {printf("%c\t",a[i]);}
		  printf("\n");
		  for(i=3;i<6;i++)
		 {printf("%c\t",a[i]);}
		  printf("\n");
		  for(i=6;i<9;i++)
		 {printf("%c\t",a[i]);}
		  printf("\n");
	  }
	  
	   n--; 
	}
	for(i=0;i<3;i++)
		 {printf("%c\t",a[i]);}
		  printf("\n");
		  for(i=3;i<6;i++)
		 {printf("%c\t",a[i]);}
		  printf("\n");
		  for(i=6;i<9;i++)
		 {printf("%c\t",a[i]);}
		  printf("\n");
		 
	return 0;
}	    
		    	
