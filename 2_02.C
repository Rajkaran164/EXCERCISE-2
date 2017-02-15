/*Write loop equivalent to
	 for(i=0;i<lim-1&&(c=getchar())!=EOF&&c!='\n';i++)
		s[i]=c;
*/
#include<stdio.h>
#define lim 1000
int main()
{
	int i;
	char s[lim],c;
	i=0;
	while(i<lim-1)
	{
		if((c=getchar())!='\n')
		{
			if(c!=EOF)
				s[i++]=c;
		}
	}
	return 0;

}
