#include<stdio.h>
#include<string.h>
#include<math.h>
void htoi(char []);
int main()
{
	char hex[100];
	clrscr();
	printf("Enter a Hexadecimal Number :");
	scanf("%s",hex);
	htoi(hex);
	getch();
	return 0;

}
void htoi(char str[])
{
	int len=strlen(str);
	int i,sum=0,no,c=0;
	for(i=len-1;i>=0;i--,c++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
			no=10+str[i]-'A';
		}
		else if(str[i]>='a'&&str[i]<='z')
		{
			no=10+str[i]-'a';
		}
		else if(str[i]>='0'&&str[i]<='9')
		{
			no=str[i]-'0';
		}
		else
		{
			printf("\nOPP's.....\tWrong Number Entered :......");
			break;
		}
		sum=sum+no*pow(16,c);
	}
	printf("Decimal Eqivalent is %d",sum);
}



