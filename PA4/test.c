int test;

int prime(int p){
	int i, k;
	float j;
	i = 0;

	if(p <= 1)	return 0;
	for(i=2;i<p;i){
		int r;
		r = p % i;
		if(r == 0)	return 0;
	}
	return 1;
}
int main(void){
	int a[10];
	test = 0;
	prime(a[1]);
	return 0;
}

