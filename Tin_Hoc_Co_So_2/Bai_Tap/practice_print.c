void printData() {
	char x = 'A' + 2 + (7>3); // 65(ASCII&#65;) + 2 + 1(1 true 0 false ) =  &#68; = D 
	printf("\n %d", x);
	printf("\n (3|7)=%d", (3|7));
	
	printf("\n x=%d ; sizeof(int)	=%d", myNumber, sizeof(int));
	printf("\n y=%f ; sizeof(float)	=%d", myFloat, sizeof(float));
	printf("\n z=%c ; sizeof(char)	=%d", myChar , sizeof(char));
	printf("\n h=%s ; sizeof(h)		=%d", arr_1, sizeof(arr_1));
	printf("\n h=%s ; sizeof(h)		=%d", arr_2, sizeof(arr_2));
}
