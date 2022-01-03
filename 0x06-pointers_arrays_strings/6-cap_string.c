/**
 * cap_string - function that capitalizes all words of a str
 *
 * @s: given string
 *
 * Return: string with first char captalized
 */

char *cap_string(char *s)
{
	int i;

	i = 0;

	if (s[i] == 44 || s[i] == 59 || s[i] == 46
	|| s[i] == 33 || s[i] == 63 || s[i] == 34
	|| s[i] == 40 || s[i] == 41 ||
	s[i] == 123 || s[i] == 125 || s[i] == 32|| i == 0)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			s[i] = s[i] + 32;
		}
	}

	return (s);
}
