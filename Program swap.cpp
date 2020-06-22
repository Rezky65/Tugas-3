#include <iostream>
using namespace std;
		void tukar(float &a, float &b){
		float temp=a;
		a=b;
		b=temp;
	}
	int main(){
				float c, d;
		cout<<" c : ";
		cin>>c;
		cout<<" d : ";
		cin>>d;
		tukar(c,d);
		cout<<" Setelah ditukar\n"<<" c : "<<c<<endl;
		cout<<						" d : "<<d<<endl;
		return 0;
	}

