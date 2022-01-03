/**
 * cap_string - function that capitalizes all words of a str
 *
 * @s: given string
 *
 * Return: string with first char captalized
 */

char *cap_string(char *s)
{
	int i, c;

	i = 0;

	for (; s[i] != '\0'; i++)
	{
		c = i - 1;

		if (s[c] == 44 || s[c] == 59 || s[c] == 46 ||
		s[c] == 33 || s[c] == 63 || s[c] == 34 ||
		s[c] == 40 || s[c] == 41 || s[c] == 123 ||
		s[c] == 125 || s[c] == 32 || s[c] == '\n' ||
		i == 0)
		{
			if (s[i] > 96 && s[i] < 123)
			{
				s[i] = s[i] - 32;
				continue;
			}
		}
	}
	return (s);
}
