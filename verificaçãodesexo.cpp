#include <iostream>
using namespace std;

int main(){
	
	char sexo;
	 
	cout<<"digite a primeira letra \n";
	cin>>sexo;
	sexo = toupper(sexo);	
	
	if( sexo == 'M'  ){
		cout<<"sexo masculino"<<endl;
		
 	}
	else if ( sexo == 'F' ){
		cout<<"sexo feminino"<<endl;
	}
	else{
		cout<<"sexo invalido"<<endl;
	}
				 				 	
system("pause");
return 0;
}

