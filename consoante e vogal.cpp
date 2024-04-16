#include <iostream>
using namespace std;

int main(){
	
char letra, consoante;
	

cout<<"digite uma letra \n";
cin>>letra;
	
if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
cout<<"essa letra e uma vogal \n";	
}
else{
cout<<"essa letra e uma consoante \n";
}
	
system("pause");
return 0;
					
}
