#include <iostream>

using namespace std;

int mostrarMatriz(int matriz[][20]);
void avanza(int matriz[][20],int pincel, int vista, int &r, int &c);
int giroDerecha(int &vista);
int giroIzquierda(int &vista);

int main()
{
	int matriz[20][20] ={0};
    int op,pincel=0;
    int vist=2;
    int r=0,c=0;
    do
    {
     cout <<"\t**MENU**"<<endl;
     cout <<"[1]Pluma Arriba\n";
     cout<<"[2]Pluma Abajo\n";
     cout<<"[3]Girar a la Derecha\n";
     cout<<"[4]Girar a la Izquierda\n";
     cout<<"[5]Avanzar\n";
     cout<<"[6]Mostrar Tablero\n";
     cout<<"[0]Salir"<<endl;
     cout <<"Seleccione una opcion: ";cin >> op; 
     
     switch (op)
     {
         case 0:
            cout<<"Hasta Pronto!\n";
            break;
         
         case 1:
         	cout<<"PLUMA ARRIBA"<<endl;	
          	if(pincel==1)
          	{
          	   pincel = 0;
          	}
          
         	break;
         
         case 2:
         	cout<<"PLUMA ABAJO"<<endl;	
         	if(pincel==0)
         	{
         	   pincel = 1;
         	}
         	matriz[r][c]=1;
         	break;
         
         
         case 3:
            cout<<"Giro a la derecha \n";
            giroDerecha(vist);
            break;
         
         case 4:
            cout<< "Giro a la izquierda \n";
            giroIzquierda(vist);
            break;
         
         case 5:	
            avanza(matriz,pincel,vist,r,c);
            break;
         
         case 6:	
            mostrarMatriz(matriz);
            break;
         
         default:
            cout<<"Eligia una opcion valida\n";
            break;
         
     }
     
     }while(op!=0); 

    
     return 0;
	
}


int mostrarMatriz(int matriz[][20])
{
    for(int r=0;r<20;r++)
    {
        for(int c=0;c<20;c++)
        {
            cout<<matriz[r][c];
        }
        cout<<endl;
    }
    
}
void avanza(int matriz[][20],int pincel, int vista, int &r, int &c)
{
	
	int pasos;
	cout<<"¿Cuantos pasos avanzara la tortuga?: ";cin>>pasos;
	
	if(vista == 1)
	{
		for(int i = 1; i <= pasos;i++)
	    {
			r++;
			if(r  == 20)
			{
			    r = 19;
			}
			if(pincel == 1)
			{
			    matriz[r][c]=1;
			}
		}
	}
	
	if(vista == 4)
	{
        for(int i = 1; i <= pasos;i++)
        {
           r--;
           if(r == -1)
           {
           	    r = 0;
		   }
		   if(pincel == 1)
		   {
		   	    matriz[r][c] = 1;
		   }
		}
    }
    
    if(vista == 3)
	{
        for(int i = 1; i <= pasos;i++)
        {
            c++;
            if(c == 20)
            {
            	c = 19;
			}
			if(pincel == 1)
			{
				matriz[r][c] = 1;
			}
	    }
    }
    
    if(vista == 2)
	{
        for(int i = 1; i <= pasos;i++)
        {
            c--;
            if(c == -1)
            {
            	c = 0;
			}
			if(pincel == 1)
			{
				matriz[r][c] = 1;
			}
		}
    }	
    
}
int giroDerecha(int &vista)
{
    
    if(vista>=4)
    {
        vista=1;
    }
    else
    {
        vista++;
    }
}
int giroIzquierda( int &vista)
{
	
	if(vista<=1)
    {
        vista=4;
    }
    else
    {
        vista--;
    }
}

