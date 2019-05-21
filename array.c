#include<stdio.h>
main()
/*{
	
        int a[5], n, i, largest,smallest;
 
        printf("\n Enter the index of the array: ");
		scanf("%d", &n);
 
        printf("\n Enter %d elements of  the array: ", n);
 
        for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
 
        largest = a[0];
        smallest= a[0];
 
        for (i = 1; i < n; i++) 
        {
		if (largest < a[i])
			largest = a[i];
			else 
			smallest=a[i];
	}
 		printf("\n the smallest in the array is %d ",smallest);
        printf("\n largest number in the array is : %d", largest);
}*/
//fibonacci series
{
	int n,i,a=0,b=1,c;
	printf("Enter the limit of number ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",a);
	}
	}
	//palindrome number
	/*{
		int r,n,temp,sum=0;
		printf("Enter the number: ");
		scanf("%d",&n);
		temp=n;
		while(n>0)
		{
			r=n%10;
			sum=sum*10+r;
			n=n/10;
		}
		n=temp;
		if(n==sum)
		{
			printf("the given number is palindrome number ");
		}
		else
		printf("Nooooo");
}*/
/*{
	int count=0,n;
	printf("Enter number ");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("the digits are %d ",count);
	}
	*/		
		
