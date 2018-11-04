#include <iostream>
#include <time.h>

using namespace std;
int Aleatorio();
void Agregar(int vector[],int num,int pos);
void Eliminar(int vector[],int num,int pos);
void Buscar(int vector[],int num);
void Modificar(int vector[],int Nuevonum,int num);
void Insertar(int vector[],int pos,int num);
void Mostrar(int vector[],int tam);

int main()
{
    srand(time(NULL));
    int vector[20];
    int opcion,pos=0,num,Nuevonum;
    cout<<"\t--Menu--\n";
    cout<<"[1]Agregar\n[2]Eliminar\n[3]Buscar\n[4]Modificar\n[5]Insertar\n[6]Reporte\n[0]Salir\n";
    do
    {
    cout<<"Selecciona alguna opcion: ";cin>>opcion;
        switch(opcion)
        {
            case 1:
                cout<<"\t--Agregado--\n";
                Agregar(vector,Aleatorio(),pos);
                Mostrar(vector,pos);
                pos++;
            break;
            case 2:
                cout<<"\t--Eliminar--\n";
                cout<<"Ingrese el valor a eliminar: ";cin>>num;
                Eliminar(vector,num,pos);
            break;
            case 3:
                cout<<"\t--Buscar--\n";
                cout<<"Ingrese el valor a buscar: ";cin>>num;
                Buscar(vector,num);
            break;
            case 4:
                cout<<"\t--Modificar\n";
                cout<<"Ingrese el valor para modificar: ";cin>>num;
                cout<<"Ingrese el valor nuevo: ";cin>>Nuevonum;
                Modificar(vector,num,Nuevonum);
            break;
            case 5:
                cout<<"\t--Insertar\n";
            break;
            case 6:
                cout<<"\t--Reporte\n";
                Mostrar(vector,pos);
            break;
            default:
                cout<<"Opcion Invalida\n";
            break;
        }
    }while(opcion!=0);
    return 0;
}

int Aleatorio()
{
     int num=9+rand()%299;
     return num;
}

void Mostrar(int vector[],int pos)
{
    for(int i=0;i<pos;i++)
    {
        cout<<"["<<i<<"]= "<<vector[i]<<endl;  
    }
}
void Agregar(int vector[],int num,int pos)
{
    vector[pos]=num;
}

void Eliminar(int vector[],int num,int pos)
{
    for(int i=0;i<=pos;i++)
    {
        if(vector[i]==num)
        {
            vector[i]=0;
        }
    }
}

void Buscar(int vector[],int num)
{
    for(int i=0;i<=20;i++)
    {
        if(vector[i]==num)
        {
            cout<<"Posicion: "<<i<<endl;
        }
    } 
}

void Modificar(int vector[],int Nuevonum,int num)
{
   for(int i=0;i<=20;i++)
    {
        if(vector[i]==num)
        {
           
        }
    }
}