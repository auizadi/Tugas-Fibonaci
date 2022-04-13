#include <iostream>
using namespace std;

int main(){
	
	int n1 = 0, n2 = 1, jml; //Pendeklarasian variabel
	int temp = 0;
	
	cout<<"Masukkan Batas Bilangan Fibonacci\t: "; cin>>jml;//Bisa diinputkan lewat keyboard
	cout<<endl;
	cout<<"Tampilan Bilangan Fibonacci\t\t: ";
	cout<<n1<<"\t";//cetak bilangan fibonacci mula-mula yaitu 0 dan 1
	cout<<n2<<"\t";
	for(int x = 0; x <= jml; x++) //membuat loop for dimulai dari nilai 0
	{							  //dengan batas sejumlah data yang akan diinputkan 
								  //dan nilai dari x akan di tambah sampai batasnya
		temp = n1 + n2;			  //variabel temp berfungsi untuk hasil sementara untuk fibonacci selanjutnya
		cout<<temp;				  //nilai temp pertama 1 (1+0), lalu akan diloop sampai batas tertentu
		
		n1 = n2;				  //nilai n1 tadi sekarang diganti dengan nilai n2	
		n2 = temp;				  //begitu juga n2 akan digantikan dengan nilai dari variabel temp
		
		if(x != jml){			  //lalu disini ada perkondisian jika x tidak sama dengan jml  
			cout<<"\t";			  //maka akan dicetak spasi satu bar
		}
	}
	
}
