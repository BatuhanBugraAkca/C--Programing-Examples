#include <iostream>
#include<time.h>
using namespace std;
 
int faktoriyel(int sayi)
{
	
	if(sayi==0){
		return 1;
		
	}
	return sayi*faktoriyel(sayi-1);
}

int main() {
            int	sayi;
            cout<<"Bir sayi giriniz";
            cin>>sayi;
           
            cout<<sayi<<"Faktoriyeli"<<faktoriyel(sayi);
            
return 0;            
}
