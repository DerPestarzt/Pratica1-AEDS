#include<iostream>

using namespace std;

void minmax(int *data, int *min, int *max){

    *min = data[0];
    *max = data[0];

    for(int i = 1; i < 10; i++){

        if(data[i] > *max){
            *max = data[i];

        }else if(data[i] < *min){ 
            *min = data[i];

        }
    }
}

int main(void){

    int data[10] = {22, 9, 33, 28, 13, 17, 01, 44, 90, 11};
    int min, max;

    minmax(data, &min, &max);

    cout << "Min = " << min << endl;
    cout << "Max = " << max << endl;

    exit(0);

}