 #include <iostream>
 #include <conio.h>
 using namespace std;

 void WypiszArg(int argc, char *argv[]) //argc - ilo�� argument�w #argv[] tablica argument�w
 {
     cout << "Liczba argumentow: " << argc << endl;
     cout << "Lista argumentow: " << endl;
     for(int i=0; i<argc; i++)
     {
         cout << i << ") " << argv[i] << endl;
     }
 }

 int main(int argc, char *argv[])
 {
     WypiszArg(argc, argv);
     return 0;
 }
