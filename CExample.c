int main(){

    int A[8] ={9, 15, 0, 64, 30, 0, 91, 32};

    int coef[8] ={2, 4, 8, 16, 32, 64, 128, 256};
  
    int result = 0;

    int i = 0;


        for(i=0;i<8;i++){
            result = result + A[i]*coef[i];
                }
    return result;
}