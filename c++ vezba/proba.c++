// //5.	Napisati program kojim se na osnovu matrice A pravi niz B tako da je 
// //svaki element niza B indeks najvećeg element odgovarajuće vrste matrice A. 
// //Učitavanje niza A, formiranje niza B i ispis niza B realizovati pomoću odvojenih 
// //potprograma. 

// #include <iostream>

// using namespace std;
// void unos(int mat[100][100],int n){
//     int i,j;
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++)cin>>mat[i][j];
//     }
// }
// void ispis(int mat[100],int n){
//     int i,j;
//     for(i=0;i<n;i++){
//         cout<<mat[i]<<" ";
//     }
    
// }
// void formiranje(int niz[100],int n,int niz1[100],int br){
//     int i,imax,j,max;
//     imax=0;
//     max=niz[0];
//     for(i=1;i<n;i++){
        
//             if(niz[i]>max){
//                 max=niz[i];
//                 imax=i;
//             }
        
//     }
//     niz1[br]=imax;
    
    
// }


// int main()
// {  int i,j,mat[100][100],niz[100],n,br=0;
// cin>>n;
// unos(mat,n);
// for(i=0;i<n;i++){
//     formiranje(mat[i],n,niz,br);
//     br++;
// }
// ispis(niz,n);
// }


////3.Napisati program kojim se na izlazu ispisuje 1 ako u 
// //svakoj koloni matrice postoji broj b. 
// //Za ispitivanje napraviti funkciju. Učitavanje matrice A uraditi pomoću potprograma. 
// #include <iostream>

// using namespace std;
// void postojanje(int mat[100][100],int n,int m,int br){
//     int i,j,sum=0;
//     bool flag=false;
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             if(mat[j][i]==br){
//                 flag=true;
//                 sum++;
//                 break;
//             }
//             flag=false;
//         }
//     }
//     if(sum==n)printf("1");
    
    
// }
// int main()
// {   int i,j,n,m,mat[100][100],broj;
//     cout<<"uunesi n i m i broj";
//     cin>>n>>m>>broj;
//     for(i=0;i<m;i++)
//     for(j=0;j<n;j++){
//         cin>>mat[i][j];
//     }
//     postojanje(mat,n,m,broj);
//     return 0;
// }


//8.	Napisati program koji na osnovu datog niza realnih brojeva X formira novi niz Y koji sadrži elemente niza X koji su manji od srednje vrednosti niza X. Ispisati elemente niza Y. Učitavanje niza X, formiranje niza Y i ispis niza Y realizovati pomoću odvojenih potprograma. 
// #include <iostream>

// using namespace std;
// void printanje(int niz[],int n){
//     int i;
//     for(i=0;i<n;i++)cout<<niz[i];
// }
// int main()
// {   int n,nizX[100],nizY[100],i,br=0;
// float suma=0;
//     cout<<"unesi n";
//     cin>>n;
//     for(i=0;i<n;i++){
//         cin>>nizX[i];
//         suma+=nizX[i];
//     }
//     suma=suma*1.0/n;
//     for(i=0;i<n;i++){
//         if(nizX[i]<suma){nizY[br]=nizX[i];
//         br++;}
//     }
//     printanje(nizY,br);
    
    
//     return 0;
// }


////5.	Napisati program kojim se na osnovu matrice A pravi niz B tako da je 
//svaki element niza B indeks najvećeg element odgovarajuće vrste matrice A. 
//Učitavanje niza A, formiranje niza B i ispis niza B realizovati pomoću odvojenih 
//potprograma. 

// #include <iostream>

// using namespace std;
// void unos(int mat[100][100],int n){
//     int i,j;
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++)cin>>mat[i][j];
//     }
// }
// void ispis(int mat[100],int n){
//     int i,j;
//     for(i=0;i<n;i++){
//         cout<<mat[i]<<" ";
//     }
    
// }
// void formiranje(int niz[100],int n,int niz1[100],int br){
//     int i,imax,j,max;
//     imax=0;
//     max=niz[0];
//     for(i=1;i<n;i++){
        
//             if(niz[i]>max){
//                 max=niz[i];
//                 imax=i;
//             }
        
//     }
//     niz1[br]=imax;
    
    
// }


// int main()
// {  int i,j,mat[100][100],niz[100],n,br=0;
// cin>>n;
// unos(mat,n);
// for(i=0;i<n;i++){
//     formiranje(mat[i],n,niz,br);
//     br++;
// }
// ispis(niz,n);
// }




//KLASE
// class Student{
//     char ime[10];
//     char prezime[20];
//     int brIndeksa;
//     public:
//     void incijalizacija(char *p,char*i,int br){
//         strcpy(ime,i);
//         strcpy(prezime,p);
//         brIndeksa=br;

//     }
//     void prikaz(){
//         cout<<ime<<" "<<prezime;
//     }
    
// };

// int main()
// {    Student matematicar;
//      matematicar.incijalizacija("ibrahimovic","adnan",16);
//      matematicar.prikaz();

//     return 0;
// }




// class Tacka{
//     int x;
//     int y;
//     public:
//     void incijalizacija(int x,int y){
//         this->x=x;
//         this->y=y;
//     }
//     void prikaz(){
//         cout<<x<<" "<<y<<endl;
//     }
//     void transliranje(int dx,int dy){
//         x+=dx;
//         y+=dy;
//     }
    
// };

// int main()
// {    Tacka tackica;
//      tackica.incijalizacija(5,6);
//      tackica.prikaz();
//      tackica.transliranje(1,-4);
//      tackica.prikaz();

//     return 0;

// int main()
// {    Tacka tackica;
//      tackica.incijalizacija(5,6);
//      tackica.prikaz();
//      tackica.transliranje(1,-4);
//      tackica.prikaz();

//     return 0;