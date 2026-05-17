// BT : Tinh tong cac so tu 1 den N

// O(n) 
int sumValue1(int n){
	int total = 0;
	int i = 1;
	for (i = 1 ; i <= n ; i++){
		total = total + i;
	}
	return total;
} 

// O(1)
int sumValue2(int n){
	return (n * (n+1)) / 2;  //  Gauss
}
 
