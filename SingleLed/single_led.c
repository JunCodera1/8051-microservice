#include <REGX51.H>

void delay(int time){
	while(time--);
}

void main(){
	while(1){
		P2_0 = 0;		//Bat LED
		delay(500000);
		P2_0 = 1; // Tat LED
		delay(500000);
	}
}