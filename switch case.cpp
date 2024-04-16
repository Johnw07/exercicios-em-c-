#include <iostream>
using namespace std;
//joao washington 202303803206
int main(){
int dia, tot;

cout<<"quantas vezes devemos repetir o programa ? \n";
cin>> tot;
	
for(int i =1; i<=tot; i++ ){
cout<<"digite o dia da semana de 1 a 7 \n";
cin>> dia;
switch(dia){
			
case 1: 
cout<<"domingo \n";
break;
case 2: 
cout<<"segunda \n";
break;
case 3: 
cout<<"terca \n";
break;
case 4: 
cout<<"quarta \n";
break;
case 5: 
cout<<"quinta \n";	
break;
case 6: 
cout<<"sexta \n";
break;
case 7: 
cout<<"sabado \n";	
break;
default:
cout<<"voce escreveu outra coisa !! \n";
}
}
system("pause");
return 0;

}
