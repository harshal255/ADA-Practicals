#include <bits/stdc++.h>
using namespace std;


int max(int x,int y){
    if(x>=y){
        return x;
    }
    else{
        return y;
    }
}

int main(){

    cout<<"Enter the Number of objects"<<endl;
    int n; 
    cin>>n;
    int a[n];
    int b[n];
    cout<<endl;
    for(int i= 0;i<n;i++){
        cout<<"Enter the weight of object:"<<i+1<<endl;
        cin>>a[i];
        cout<<endl;
        cout<<"Enter the profit corresponding to the weight:"<<i+1<<endl;
        cin>>b[i];
        cout<<endl;
    
        
    }
    cout<<endl;
    cout<<"Enter the Capacity:"<<endl;
    int n1;
    cin>>n1;
    int c[n+1][n1+1];
    for(int j=0;j<=n;j++){
        for(int k=0;k<=n1;k++){
            if(j==0 || k==0){
                c[j][k]=0;
               
            }
            else if((k- a[j-1])>=0){
                c[j][k]= max(c[j-1][k],c[j-1][k-a[j-1]]+b[j-1]);
               

            }
            else{
                c[j][k]=c[j-1][k];
                
            }
        }
    }
    cout<<endl;
    cout<<"Required Soln is shown below :"<<endl;
    cout<<endl;
    for(int j=0;j<=n;j++){
    for(int k=0;k<=n1;k++){
        cout<<c[j][k];
        cout<<"\t";
    } 
    cout<<endl;
    }


    int soln = c[n][n1];
    cout<<endl;
    cout<<"Maximum providing maximum Profit:";
    int p;
    int q;
    for(int k=0;k<n;k++){
        if(soln >0){
            for(int i=0;i<=n;i++){
                for(int j=0; j<=n1 ; j++){
                    if(c[i][j]==soln){
                        p=i;
                        q=j;
                        break;
                    }
                }
            }
            for(int l=0;l<=n;l++){
                if(c[p][q]==c[p-1][q]){
                    p--;
                }
                else{
                    soln = soln-b[p-1];
                    cout<<"\t"<<a[p-1]<<"\b";
                    break;
                }
            }
        }
        else{
            break;
        }
       
    }
    
    return 0;
}