int main(){
	long sum = 0;
	long i = 0;
	while (i++ < 10){
		if (i & 10)
			continue;
		sum += i;
	}
}
