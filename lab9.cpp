#include <iostream>
#include <ctime>
using namespace std;

void populateArray(int arr[101][101],int N){
    int i[N],j[N];
    srand(time(0));
    for (int x = 0; x < N; x++) { 
        i[x]= (rand()%(101));
        j[x] = rand()%(101);
    }
    
    for (int a = 0; a < N; a++) {
        int x = i[a];
        int y = j[a];
        if(arr[x][y] > 0){
            arr[x][y] =  arr[x][y] + 1;
        }
        else {arr[x][y] = 1;
        }
    }
    
    int z = 0;
    for (int a = 0; a < 101; a++) { 
        for (int b = 0; b < 101; b++) { 
            if(z<202){
            cout << arr[a][b] << " ";}
            z++;
        }
    if(z<202){cout << endl;}
    }
}

void searchValidEntries (int XL, int YL, int XH, int YH, int arr[101][101]){
    //Takes the coordinates and create the the bounding box 
    cout<< "The output for "<<XL<<","<<YL<<","<<XH<<","<<YH<<endl;
    for(int k=XL;k<=XH; k++ ){
        cout<<" " <<endl;
        for (int s= YL; s<= YH; s++){
            // Checks for elements greater than 0 and prints them out
            if (arr[k][s]>0){
            
            cout<< "[" << k <<" "<<s<<"]  "<<arr[k][s]<< endl;
        }
        }
    } 
}

int main(){
    int arrayA[101][101];
    populateArray(arrayA,2000);
    searchValidEntries (80,1,100,10,arrayA);
    searchValidEntries (10,20,40,79,arrayA);
    searchValidEntries (1,90,100,100,arrayA);
    searchValidEntries (40,30,70,60,arrayA);
    searchValidEntries (50,50,70,70,arrayA);

    return 0;
}
