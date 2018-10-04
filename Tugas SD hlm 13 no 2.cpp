#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
main(){
	int a, b, tota=0, w, wi2=0;
	float rata_rata, sdef, v;
	
		cout<<"Masukkan jumlah data : ";cin>>b;
	int c[b];
	for(a=0;a<b;a++){
			cout<<"Masukkan data ke-"<<a+1<<" = ";cin>>c[b];
	tota=tota+c[b];
		wi2=wi2+pow(c[b],2);
		
	}
	rata_rata=tota/b;
	w=pow(tota,2);
	v=(b*wi2-w)/(b*(b-1));
	sdef=sqrt(v);
			cout<<endl;
			cout<<"Rata-rata = "<<rata_rata<<endl;
			cout<<"Varian = "<<v<<endl;
			cout<<"Standar Deviasi = "<<sdef;
	
	getch();
}
