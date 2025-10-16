#include <iostream>

int main(){

    int x = 10;  //4
    int y = 11;   //8
    int z = 20;   //6

    //std::cout<<"Ingrese res numeeros uno por uno: "<< std::endl;
    //std::cin>>x;
    //std::cin>>y;
    //std::cin>>z;

    if (x>y){
        if (x>z){
            std::cout<<"x es mayor"<<std::endl;
        }else{
            std::cout<<"z es mayor"<<std::endl;
        }
    }else{
        if(y>z){
            std::cout<<"y es mayor"<<std::endl;
        }else{
            std::cout<<"z es mayor"<<std::endl;
        }
    }
    return 0;
}
