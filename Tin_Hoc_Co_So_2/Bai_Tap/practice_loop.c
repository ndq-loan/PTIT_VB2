// loop
void doLoop (){
	int i = 0;
	
	printf("=========== FOR ============ \n");
	for(i = 5; i > 0; i--){
		printf("%d\n", i);
	}
	for(i = 0 ; i < 6 ; i ++){
		printf("%d\n", i);
	}
	
	printf("=========== WHILE ============ \n");
	int countdown = 5;
	while(countdown < 10) {
		printf("%d\n", countdown);
		countdown++;
	}	
	while(countdown  > 5){
		printf("%d\n", countdown);
		countdown--;
	}
	
	printf("=========== DO ============ \n");
	do {
		printf("%d\n", i);
		i++;
	}
	while(i < 5);
	
}
