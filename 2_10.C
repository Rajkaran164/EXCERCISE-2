#include<stdio.h>
int main()
{
	char str[100];
	int i=0;
	printf("Enter a String :");
	scanf("%[^\n]s",str);
	while(str[i])
	{
	      str[i]>='A'&&str[i]<='Z' ? str[i]+=32 : str[i];
	      i++;
	}
	printf("String is %s",str);
	return 0;
}