#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
main(){
	char word[20];
	int v, w, vw;
	cout<<"Masukkan kata Yang Akan di Buat : ";cin>>word;
		cout<<endl;
			vw=strlen(word);
		
	for(v=vw;v>=0;v--){
			for(w=0;w<v;w++){
			cout<<word[w];		
			}
			cout<<endl;
		
	}
	getch();
}

