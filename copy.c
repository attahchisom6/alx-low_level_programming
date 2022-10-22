*A DETAILED EXPLANATION INTO PALINDROME AND I SINCERELY HOPE IT CAN HELP SOMEONE*

A palindrome is a word which when reversed retains the same alphabetic order, and in our case (programming) retains the same positional placement of ASCII CODE in memory. /*Ascii code NOT memory*/
*NOTE: there is no emphasis on a contigious memory location (array for example), so a palindrome can as well be a link*

EXAMPLES OF PALLINDROMES ARE:
1. cac - revese it and u will get back cac
2. pop
3 radar
4 kinik etc

so we want to deaign a function that checks for palindrome: lets whiteboard the steps needed

1. function to check for palindrome - check_palindrome

2. _strlen - function to get the len of a string

3. The main or calling function that will print the result of check_pallindrome - lets call it call_palindrome:

4. Return: call_pallindrome will returb 1 if the string is a palindrome, otherwise it returns 0;

int check_palindrome(char *s, int len, int k)
{
	/*here k is a running counter and len is length of string*/
	if (s[len] != s[k])
		return (0);
	else if (k < len && s[k] == s[len])
	{
		int g;

		g = check_palindrome(s, len - 1, k + 1);
		return (g);
	}
	return (1);
}

*EXPLANATION*
Assuming char *s = "hello";
we want to check if hello is a palindrome
len = 5; /*(length of "hello")*/
k ranges from 1 to 4 i.e k < len;

/*note i am using 1 as base index instead of 0 to avoid confusion*/
so for k = 1
1 = k < len = 5
s[1] = 'h' and s[5] = 'o';
therefore s[1] != s[5]; hence the condition s[k] == s[len] is not satisfied, the program then returns 0 and terminates indicating hello is not a palindrome

consider the case where
char *s = "pelep";
lets check if it is palindrome
check_palindrome("pelep", 5, 4)
len = 5; /*lenght of string*/
k ranges from 1 to 4 /*i.e k < p*/

for k = 1;
s[1] = 'p' and s[5] = 'p';
therefore s[1] = s[5] and 1 < 5;
condition s[k] == s[len] && k < len are satisfied, therefore
g = check_palindrome("ele", 5 - 1, 1 + 1) = check_palindrome("ele", 4, 2);
the program returns 1 i.e g = 1;


hence for our next iteration
len = 4;
k = 2; /*note k counts from the begining of string*/
s[2] = 'e' and s[4] = 'e';
therefore s[2] == s[4] and 2 < 4;
the conditions are satisfied and the program returns 1
g = check_palindrome("l", 4 - 1, 2 + 1) = check_palindrome("l", 3, 3);

for next iteration
len = 3;
k = 3;
so k = len = 3; but our condition says by fire by force k < p; so the program terminates here and return the value stored in g (which is esentially 1)


int _strlen(char *s)
{
	int len;

	if (*s == '\0')
		return (0);
	len = 1 + _strlen(s + 1); /*if u need ezplanation in this dm me*/
	return (len);
}

int call_palindrome(char *s)
{
	int x, len, k = 0;

	len = _strlen(s) - 1;
	x = check_palindrome(s, len, k);
	return (x);
	return (0);
}
