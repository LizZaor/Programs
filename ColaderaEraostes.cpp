#include <iostream>

using namespace std;

void Llenar(int vector[],int tam);
void Multiplos(int vector[],int tam);

int main()
{
    int vector[1000];
    Llenar(vector,1000);
    Multiplos(vector,1000);
    for(int i=0;i<1000;i++){
        if(vector[i]==1){
            cout<<i<<endl;
        }
    }
    return 0;
}

void Llenar(int vector[],int tam)
{
    vector[0]=false;
    vector[1]=false;
    for(int i=2;i<tam;i++){
        vector[i]=true;
    }
}

void Multiplos(int vector[],int tam)
{
    int num;
    for(int i=2;i<tam;i++){
        num=i;
        if(i<1000){
            for(int x=num+num;x<tam;x+=num){
                vector[x]=false;
            }
        }
    }
}