#include<iostream>
using namespace std;
int main(){
    int a,b,i,j ,c,d;
    int m = 0 ;
    int f;
    cout<<"enter the rows of the 1st matric\n";
    cin>>a;
    cout<<"enter the number of columns of the  2nd matric\n";
    cin>>b;
    cout<<"enter the no of rows in the 2nd matrice \n";
    cin>>i;
    cout<<"enter the no of columns in the 2nd matric\n";
    cin>>j;
    if (a!=j){
        cerr<<"not possibe";
    }
    else{
        cout<<" enter the elements of matric 1\n";
        int matric1[a][b];
        int matric2[i][j];
        for (c =0;c<a;c++){
            for(d=0;d<b;d++){
                cin>>matric1[c][d];
            }
        }
        cout<<"your matric is \n";
for(c=0;c<a;c++){
    for(d=0;d<b;d++){
        cout<<matric1[c][d]<<"   ";
    }
    cout<<endl;
}
cout<<"enter the elements of second matric";
for(c=0;c<i;c++){
    for(d=0;d<j;d++){
        cin>>matric2[c][d];
    }

}
cout<<"this is your matric \n";
for (c=0;c<i;c++){
    for(d=0;d<j;d++){
        cout<<matric2[c][d]<<"  ";
    }
    cout<<endl;
}
cout <<"the multiplication of two matrices is \n";
for(f=0;f<a;f++){
for(c=0;c<j;c++){
    m = 0;
    for(d=0;d<i;d++){
        int e = matric1[f][d] * matric2[d][c] ;
        m = m+e;
      
    }
cout<<m<<"  ";} 
cout<<endl;}

    }




    
    
}