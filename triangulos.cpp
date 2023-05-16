#include <iostream>
using namespace std;
//joao washington 202303803206
int main(){

		int a,b,c, tot;

			cout<<"digite o numero de triangulos \n";
			cin>> tot;
			
			for(int i=1; i<=tot; i++){
			
		cout<<"digite o primeiro lado \n";
		cin>> a;
		cout<<"digite o segundo lado \n";
		cin>> b;
		cout<<"digite o terceiro lado \n";
		cin>> c;
		
			if(a<b+c && b<a+c && c<a+b){
			
		
		
				if(a==b && b==c ){
		
					cout<<"triangulo equilatero"<<endl;
		
			}
				else if(a==b || a==c || c==b){
			
					cout<<"triangulo isosceles"<<endl;
			}
				else{
					cout<<"triangulo escaleno"<<endl;
			}
			
			}
		
				else{
			
					cout<<"os dados nao formam um triangulo \n";
			}
			}	
system("pause");
return 0;
}

