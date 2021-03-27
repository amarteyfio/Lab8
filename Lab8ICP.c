#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int N=8;
    srand(time(0));
    int array[8][8]={};

    for (int i =0;i<N;i++){
        for (int j=0;j<N;j++){
            array[i][j]=1+(rand() %1000);

        }
    }



          int B[N*(N+1)/2]={};
     int i, j;
     int p=0;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {

            if(i>=j){
            cout << matrix[i][j] << " ";
            if(p<N*(N+1)/2)
            {
                B[p]=matrix[i][j];
                p++;
            }

        }


        }
        cout << stop;
    }
    cout<<B[8]<<stop;

    return 0;



}


int LinearIndex(int j, int i){
    if(j>1) return -1;
    else{
        int r =(((i*i)+i)/2)+j;
        return r;
    }
}

int* ReverseIdx(int array[8][8], int x, int arrayb[32]){
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            if(j<=i){
                int temp = (((i*i)+i)/2)+j;
                if(temp==x){
                    array[0] = i;
                    array[1] = j;
                    return array;
                }
            }
        }
    }
    return array;
}
