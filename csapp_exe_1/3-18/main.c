long test(long x, long y, long z)
{
	long val = x + y + z;
	if (x < -3)
	{
		if (y < z)
			val = x * y;
		else 
			val = y * z;
	} else if (x > 2){
		val = x * z;
	}
	return val;
}

int main()
{
	long x, y, z;
	x = 10;
	y = 5;
	z = 2;
	test(x, y, z);
	return (0);
}
