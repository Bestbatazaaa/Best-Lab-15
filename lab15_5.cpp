#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *A, int *B, int *C, int *D){
	int Best[] = {*A,*B,*C,*D};
	for(int j=3;j > 0;j--){
		int i = rand()%(j+1);
		swap(Best[j],Best[i]);
	}
	*A = Best[0];
	*B = Best[1];
	*C = Best[2];
	*D = Best[3];
	}