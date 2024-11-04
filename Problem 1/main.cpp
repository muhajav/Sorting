#include <bits/stdc++.h>
using namespace std;

int main() {

	long long nisn[] = {9960312699, 9963959682, 9950310962, 9970272750, 9970293945, 9952382180, 9965653989};
	string nama[] = {"Handi Ramadhan", "Rio Alfandra", "Ronaldo Valentino Uneputty", "Achmad Yaumil Fadjri R.",
						"Alivia Rahma Pramesti", "Ari Lutfianto", "Arief Budiman"};
	int value[] = {90, 55, 80, 60, 70, 65, 60};

	int dataSize = sizeof(value)/sizeof(value[0]);

	// Sorting Value using insertion method
	for(int i=0; i<dataSize-1; i++)
	{
		for(int j=0; j<dataSize-1; j++)
		{
			if(value[j]<value[j+1])
			{
				long long temp1 = nisn[j];
				nisn[j] = nisn[j+1];
				nisn[j+1] = temp1;

				string temp2 = nama[j];
				nama[j] = nama[j+1];
				nama[j+1] = temp2;

				int temp3 = value[j];
				value[j] = value[j+1];
				value[j+1] = temp3;
			}
		}
	}

	// Sorting NISN using insertion method
	for(int i=0; i<dataSize-1; i++)
	{
		for(int j=0; j<dataSize-1; j++)
		{
			if(nisn[j]<nisn[j+1])
			{
				long long temp1 = nisn[j];
				nisn[j] = nisn[j+1];
				nisn[j+1] = temp1;

				string temp2 = nama[j];
				nama[j] = nama[j+1];
				nama[j+1] = temp2;

				int temp3 = value[j];
				value[j] = value[j+1];
				value[j+1] = temp3;
			}
		}
	}

	// binary search
	bool found=0;
	int l=0;
	int r=dataSize-1;     // 9 8 5 4 1
	while(!found&&l<=r)
	{
		int k=(l+r)/2;
		if(nisn[k]<9950310962)
		{
			r=k-1;
		} else if(nisn[k]>9950310962)
		{
			l=k+1;
		} else {
			found=1;
			cout<<"The NISN has already found"<<'\n';
			cout<<"Name: "<<nama[k]<<'\n';
			cout<<"Value: "<<value[k]<<'\n';
		}
	}

	if(!found)
	{
		cout<<"The NISN hasn't been in order"<<'\n';
	}

	//sequential search
	for(int i=0; i<dataSize; i++)
	{
		if(value[i]==60) nama[i]="Joko";
	}

}
