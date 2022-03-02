#include<iostream>
using namespace std;

int main()
{
	int matA [2] [2]= {4, 2, 8, 10};
	int j,i;
	cout<<"Matriks A"<<endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout<<matA [i] [j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Hasil perkalian Matriks A dan eksponen 5"<<endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			//soal perkalian matriks A dan eksponen 5
			cout<<matA[i] [j] * 5 <<" ";
		}
		cout<<endl;
	}
	system ("PAUSE");
	return 0;
}
