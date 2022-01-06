/**
 * main - main function
 *
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: argument printed, one per line with new line
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	
	return (0);
}
