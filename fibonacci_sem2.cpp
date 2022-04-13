 #include<iostream>
using namespace std;

int fibonacci(int n) 		//membuat fungsi dengan parameter n
	{
	if(n == 0 || n == 1)	//pengkodisisan : jika n bernilai 0 atau 1 maka akan me-return n  
	{
		return n;
	}else{					//jika selain itu maka me-return fungsi fibonacci dengan mengurangi parameternya dengan 1 
		return(fibonacci(n-1)) + (fibonacci(n-2));
	}						//dan dijumlahkan dengan fibonacci dengan parameter sudah dikurangi
}

int main(){
	int n, x, y = 0; 		// mendeklarasikan variabel
	
	cout<<"\tProgram Perhitungan Angka Fibonacci"<<endl;
	cout<<endl;	
	cout<<"Masukkan Batas Bilangan Fibonnaci : "; cin>>n;	//untuk batas bilangan fibonacci menggunakan inputan keyboard
	cout<<"Deret Fibonaccinya : ";							
		for(x = 1; x <= n; x++)								//membuat loop
	
	
		{							
			cout<<fibonacci(y)<<"  ";						//memanggil fungsi fibonacci dengan parameter y, yang tadi masih bernilai 0 lalu cetak spasi
			y++;											//nilai y akan bertambah/diperbarui 
		}
	
	
}
