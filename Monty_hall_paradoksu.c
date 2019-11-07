#include<stdio.h>
#include<stdlib.h>
// rand fonk. sistemden bize rastgele istenilen veri tipinde input vermesi için kullanılır
int main(){
	int not_change = 0;
	int change = 0;
	for(int i = 0;i <10000;i++){
		
		int gg = rand();
		int g = gg % 3 +1 ;
		
		int aa = rand();
		int a = aa % 3 +1 ;
		
		
		
		if (a==g){
			not_change++;
		}else if (a != g){
			int kap = rand();
			int kap2 = kap %2 +1 ;  
			if (kap2 == 1){
				
				change++;
				
			}else {
				not_change++;
				
			}
			
			
		}
	}
	double result = not_change/10000.0;
	printf("%.6lf",result);
	
	
	return 0;
}