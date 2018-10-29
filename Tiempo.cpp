#include <iostream>

using namespace std;

int Segundero(int Hrs, int Min,int Seg);
void ContadorSeg(int TotalSeg);

int main()
{
    int Segundos, Horas,Minutos;
    int TotalSeg;
    cout<<"Ingrese las horas: ";cin>>Horas;
    cout<<"Ingrese los minutos: ";cin>>Minutos;
    cout<<"Ingrese los segundos: ";cin>>Segundos;
    cout<<"Segundos Equivalentes: "<<Segundero(Horas,Minutos,Segundos)<<endl;
	TotalSeg=Segundero(Horas,Minutos,Segundos);
	ContadorSeg(TotalSeg);
	
    return 0;
}

int Segundero(int Horas,int Minutos,int Segundos)
{
	int Suma;
	Suma=(Horas*3600)+(Minutos*60)+Segundos;
	return Suma;

}

void ContadorSeg(int TotalSeg)
{
	int Horas=0, Minutos=0, Segundos=0;
	Horas=(TotalSeg/3600);
	cout<<"Hora(s): "<<Horas<<endl;
	Minutos=(TotalSeg%3600)/60;
	cout<<"Minuto(s): "<<Minutos<<endl;
	Segundos=(TotalSeg%3600)%60;
	cout<<"Segundos: "<<Segundos;	
}