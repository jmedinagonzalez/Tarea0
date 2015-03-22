#include <string.h>
#include<stdlib.h>
#include <time.h>
#include<iostream>
#include<time.h>
#include<fstream>
using namespace std;

int main(int argc, char* argv[])
{
    ofstream myfile;
    myfile.open("tarea00.csv");
    int num, c;
    srand(25);

        if(strcmp(argv[1],"-g")==0){
        time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char output[128];
        strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);

        myfile<<" "<<output<<" ";
            for(c = 1; c <= 14; c++)
    {
        num = rand()%25 ;
        myfile << num;
        if (c<14){myfile<<";";}
    }

    return 0;



     }
      if(strcmp(argv[1],"-v")==0){
        time_t tiempo = time(0);
        struct tm *tlocal = localtime(&tiempo);
        char output[128];
        strftime(output,128,"%d/%m/%y %H:%M:%S",tlocal);
        cout<<"Integrantes : "<<endl;
        cout<<"Gustavo Garcia Garcia."<<endl;
        cout<<"Jonathan Medina Gonzalez."<<endl;
        cout<<"Profesor : Sebastian Salazar ."<<endl;
        cout<<"Ayudante : Patricio Perez Valdeverde ."<<endl;
        cout<<"Fecha : "<<output<<endl;
     return 1;
     }




     else {



        cout<<" La Opcion ingresada : '"<< argv[1]<<" ' . No Es Valida"<<endl;
     }
    myfile.close();
    return 0;
}
