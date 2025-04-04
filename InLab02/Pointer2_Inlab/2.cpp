void addElement(int*& arr, int n, int val, int index) {
    // TODO
    int new_n=n+1;
    int*new_arr=new int[new_n];
    for(int i=0;i<index;i++){
        new_arr[i]=arr[i];
    }
     new_arr[index]=val;
     if(index!=n){
      for(int i=index;i<new_n;i++){
        new_arr[i+1]=arr[i];
    }
     }
    delete[]arr;
    arr=new_arr;
}
