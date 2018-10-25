#include <iostream>

using namespace std;

void comprimir(int vec[],int tam);

int main()
{
    int vec[25]={1,2,2,2,2,3,1,1,1,2,4,4,4,2,5,5,2,2,3,3,3,4,4,4,5};
    comprimir(vec,25);
    return 0;
}

void comprimir(int vec[],int tam)
{
    int i,x;
    for(i=0;i<tam-1;i++)
    {
        for(x=i+1;x<tam;x++)
        {
            if(vec[x]==vec[i])
            vec[x]=-1;
        }
    }
    
    for(i=0;i<tam;i++)
    {
        cout<<vec[i]<<endl;
    }
    
}
