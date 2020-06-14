#include<iostream>
using namespace std;

int main()
{
    int Ano;
    cout<<"Introdusca el anio: ";
    cin>> Ano;
    if(Ano%400==0)
    cout<<"Es bisiesto"<<endl;
    else if(Ano%4==0 and Ano%100!=0){
        cout<<"es bisiesto"<< endl;
    }else{
        cout<<"No es bisiesto"<< endl;
    }
    return 0;
}