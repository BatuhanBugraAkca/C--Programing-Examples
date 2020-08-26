#include <iostream>


using namespace std;



int main(){

int  a=15,b,c=12; 

	int *aptr = &a;
	int *bptr = &b;
	int *cptr = &c;
	


    cout<<"a'nin adresi :"<<&a<<endl; 
    cout<<"aptr'nin adresi:"<<&aptr<<endl;
    cout<<"a'nin degeri:"<<a<<endl;
	cout<<"aptr'nin degeri:"<<&aptr<<endl;
    cout<<"aptr nin gösterdigi yerdeki deger:"<<*aptr<<endl;
    cout<<"*&aptr'nin adresi:"<<*&aptr<<endl;
    cout<<"&*aptr'nin adresi:"<<&*aptr<<endl;
   	*aptr=9;
     cout<<"aptr nin gösterdigi yerdeki deger:"<<*aptr<<endl;
     cout<<"b nin degeri :"<<b<<endl;
	 cout<<"b nin adresi :"<<&b<<endl;
  	 cout<<"bptr nin adresi :"<<&bptr<<endl;
  	 *bptr=*cptr;
     cout<<"cptr nin degeri :"<<bptr<<endl;
     cout<<"bptr nin degeri :"<<bptr<<endl;
     cout<<"cptr nin gösterdigi yerdeki deger:"<<*cptr<<endl;
     cout<<"bptr nin gösterdigi yerdeki deger:"<<*bptr<<endl;
     cout<<"*&cptr'nin adresi:"<<*&cptr<<endl;
     cout<<"&*cptr'nin adresi:"<<&*cptr<<endl;
     *bptr=44;
     cout<<"bptr nin gösterdigi yerdeki deger:"<<*bptr<<endl;
     cout<<"c nin degeri :"<<c<<endl;




    
	
    return 0;
}
