#include <iostream>

// mayor a tres numeros

int main(){
	int x;
	int y;
	int z;
	
	std::cout<<"ingrese un numero: "<<std::endl;
	std::cin>>x;
	std::cout<<"ingrese un segundo numero: "<<std::endl;
	std::cin>>y;
	std::cout<<"ingrese un tercer numero: "<<std::endl;
	std::cin>>y;
	
	if(x>y){
		if(x>z){
			std::cout<<"el primer numero es mayor "<<std::endl;
		}
		else{
			std::cout<<"el tercer numero es mayor "<<std::endl;
		}
	}
	else{
		if(y>z){
			std::cout<<"el segundo numero es mayor "<<std::endl;
		}
		else{
			std::cout<<"el tercer numero es mayor "<<std::endl;
		}
	}
	return 0;
}
