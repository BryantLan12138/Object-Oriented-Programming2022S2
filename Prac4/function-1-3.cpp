void copy_integers(int old_array[],int new_array[],int length) {
    int* ptr_old = old_array;
    int* ptr_new = new_array;

    for(int i = 0; i < length; i++) {
        *(ptr_new + i) = *(ptr_old + i);
    }
}