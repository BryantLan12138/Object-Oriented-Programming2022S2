bool is_descending(int array[], int n){
    bool check = true;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(array[i] < array[j]) {
                check = false;
                break;
            }
        }
    }    
    return check;
}