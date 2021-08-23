void cond(long a, long *p)
{
	if (p && a > *p)
		goto done;
done:
	*p = a;
}

int main()
{
	long a;
	long *p = &a;
	cond(a, p);
	return (0);
}
