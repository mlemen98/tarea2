#include <iostream>
using namespace std;

struct Alumno{
    char nombre[30];
    float nota1;
    float nota2;
    float nota3;
    float promedio;
};

void llenarAlumnos(Alumno[],int);
void mostrarAlumnos(Alumno[],int);
void ordenarPromedios(Alumno[],int);

int main(){
    /**
        Escribir un programa que permita ingresar el nombre y 3 notas de N alumnos y
        los almacene en un array de estructura.
        Mostrar los alumnos ingresados incluyendo su promedio ordenado por orden
        de merito.
            **/
    Alumno alumnos[30];
    int N = 2;
    llenarAlumnos(alumnos,N);
    ordenarPromedios(alumnos,N);
    cout<<"ORDEN DE MERITO"<<endl;
    mostrarAlumnos(alumnos,N);

    return 0;
}

void llenarAlumnos(Alumno A[],int N){
    for(int i=0;i<N;i++){
        cout<<"ALUMNO "<<i+1<<endl;
        cout<<"Nombre : ";
        cin.getline(A[i].nombre,30);
        cout<<" Nota 1: ";
        cin>>A[i].nota1;
        cin.ignore();

        cout<<" Nota 2: ";
        cin>>A[i].nota2;
        cin.ignore();

        cout<<" Nota 3: ";
        cin>>A[i].nota3;
        cin.ignore();
        cout<<endl;
        A[i].promedio = (A[i].nota1+A[i].nota2+A[i].nota3)/3;
    }
}

void mostrarAlumnos(Alumno A[],int N){
    for(int i=0;i<N;i++){
        cout<<"  Nombre : "<<A[i].nombre<<endl;
        cout<<"Promedio : "<<A[i].promedio<<endl;
        cout<<endl;
    }
}

void ordenarPromedios(Alumno A[],int N){
    /*****
        13  12  10  9
    *******/
    for(int i=1;i<=N;i++){
        for(int j=0;j<N-1;j++){
            if(A[j].promedio<A[j+1].promedio){
                Alumno aux = A[j];
                A[j] = A[j+1];
                A[j+1] = aux;
            }
        }
    }
}
