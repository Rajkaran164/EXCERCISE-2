#include <stdio.h>
#include <stdlib.h>
int any(char s1[], char s2[]);
int main(void)
{
    char s1[100];
    char s2[100];
    printf("Enter a First string s1 :");
    gets(s1);
    printf("Enter a Second string s2 :");
	gets(s2);
    printf("%d\n", any(s1, s2));

    return EXIT_SUCCESS;
}

/* any:  returns the first location in s1 where any character from s2
	 occurs, or -1 if s1 contains no characters from s2. */
int any(char s1[], char s2[])
{
    int i, k;

    for (i = 0; s1[i] != '\0'; i++)
	for (k = 0; s2[k] != '\0'; k++)
	    if (s1[i] == s2[k])
		return i;
    return -1; /* s1 contains no characters from s2 */
}
