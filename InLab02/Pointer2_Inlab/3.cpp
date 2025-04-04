int* flatten(int** matrix, int r, int c) {
    //TODO
    int so_phantu=r*c;
    int* flatten_array= new int[so_phantu];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            static int t=0;
           flatten_array[t]=matrix[i][j];
           ++t;
        }
    }
    return flatten_array;
}