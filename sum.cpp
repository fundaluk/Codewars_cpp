//Sum without highest and lowest number


int sum(vector<int> numbers)
{
   
	sort(numbers.begin(), numbers.end());
	int numbers_size = numbers.size();
	int suma = 0;

	if(numbers_size==0 || numbers_size==1)
	{ 
		suma = 0;
	}
	else
	{
		for (int i = 1; i < numbers_size - 1; i++)
			suma += numbers[i];

	}

	return suma;
}