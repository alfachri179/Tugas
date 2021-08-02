#include <iostream>
using namespace std;

//prototype void bubblesort
void bubblesort(int data[], int jumdat);
int main(){
	
	//Identitas
	cout << "KODINGAN BUBBLE SORT" <<endl;
	cout << "Nama: Muhammad Sahid Hikam" << endl;
	cout << "NPM: 43A87006200195" << endl;
	cout << endl;
	//EndIdentitas
	
    int jumdat;
    cout <<"Masukan jumlah data: ";cin >> jumdat;

    int data[jumdat];
    for (int i = 0; i < jumdat; i++)
    {
        cout << "Masukan data ke " << i+1 <<" = "; cin>>data[i];
    }

    bubblesort(data, jumdat);
}

void bubblesort(int data[], int jumdat){
    cout<< "-------------------" << endl;
    cout<< "DATA AWAL ---------" << endl;
    for (int i = 0; i < jumdat; i++)
    {
        cout << data[i] <<" ";
    }
    cout << endl;
    cout << "SETELAH DISORT" << endl;
    int box;
    for (int x = 0; x < jumdat; x++)
    {
        for (int y = x+1; y < jumdat; y++)
        {
            if (data[x] > data[y])
            {
                box = data[x];
                data[x] = data[y];
                data[y] = box;
                cout <<"Proses: ";
                for (int f = 0; f < jumdat; f++)
                {
                    cout << data[f] << " ";
                }
                cout << endl;
            }
        }
    }
         cout << "-----HASIL AKHIR-----" << endl;
         for(int hasil=0; hasil<jumdat; hasil++){
         	cout << data[hasil] << " ";
		 }
}
