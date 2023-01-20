main()
{
	printf ("Cels\tFahr\n");
	
	int celsius, fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	while (celsius <= upper) {
		fahr =(9/5) * (celsius+32);
		printf("%d\t%d\n", celsius, fahr);
		celsius = celsius + step;
	}
}
