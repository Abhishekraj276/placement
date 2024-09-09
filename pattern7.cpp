#include<iostream>
using namespace std;
//q-3
//int main(){
//	int n;
//	cin>>n;
//	
//	
//   int i=1;   /*row*/
//    
//    while(i<=n){
//    	int j=1; /*column*/
//    	int value=i;
//    	while(j<=i){
//    		cout<<value;
//    		value=value+1;
//    		j= j+1;
//    		
//		}
//		cout<<endl;
//		i=i+1;
//	}
//}


//int main(){
//	int n;
//	cin>>n;
//	
//	
//   int i=1;   /*row*/
//    
//    while(i<=n){
//    	int j=1; /*column*/
//    	
//    	while(j<=i){
//    		cout<<i-j+1;
//    		
//    		j= j+1;
//    		
//		}
//		cout<<endl;
//		i=i+1;
//	}
//}

int main(){
	int n;
	cin>>n;
	
	
   int i=1;   /*row*/
    
    while(i<=n){
    	int j=1; /*column*/
    	
    	while(j<=i){
    		cout<<i+j-1;
    		
    		j= j+1;
    		
		}
		cout<<endl;
		i=i+1;
	}
}
