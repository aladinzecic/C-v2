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