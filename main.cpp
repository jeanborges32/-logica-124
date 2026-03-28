#include<iostream>
#include<string>


int main(){

    std::string nome;
    int idade;
    float altura;

    std::cout<<"Qual seu nome: "<<std::endl;
    std::cin>>nome;
    std::cout<<"Qual a sua idade: "<<std::endl;
    std::cin>>idade;
    std::cout<<"qual a sua altura: "<<std::endl;
    std::cin>>altura;

    std::cout<<"Bem-vindo(a) "<<nome<<"!!"<<std::endl;
    std::cout<<"Sua idade "<<idade<<"anos. "<<std::endl;
    std::cout<<"Sua altura "<<altura<<"!!"<<std::endl;

    

    return 0;
}

  


