#include<stdio.h>
#include<limits.h>
int main()
{
	printf("\n");
	printf("Range of Char           : %d  -  %d\n ",CHAR_MIN,CHAR_MAX);
	printf("Range of Short          : %d  -  %d\n ",SHRT_MIN,SHRT_MAX);
	printf("Range of Int            : %d  -  %d\n ",INT_MIN,INT_MAX);   //
	printf("Range of Long           : %ld -  %ld\n ",LONG_MIN,LONG_MAX);
	printf("Range of Signed Char    : %d  -  %d\n ",SCHAR_MIN,SCHAR_MAX);
	printf("Range of Unsigned Char  : 0   -  %d\n",UCHAR_MAX);
	printf("Range of Unsigned Int   : 0   -  %u\n",UINT_MAX);
	printf("Range of Unsigned Long  : 0   -  %lu\n",ULONG_MAX);
	printf("Range of Unsigned Short : 0   -  %d\n",USHRT_MAX);
	return 0;

}
