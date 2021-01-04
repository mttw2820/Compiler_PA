int arr[10];
int prime(int p);
int main(void){
	int n;
	prime(n);
	return 0;
}

int prime(int p){
	int i;
	int arr2[20];
	if(p <= 1)	return 0;
	arr2[0] = i + arr[1];
	for(i=2;i<p;i++){
		int r;
		r = p % i;
		if(r == 0) return 1;
	}

	

	return 1;
}
