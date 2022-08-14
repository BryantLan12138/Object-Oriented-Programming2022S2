int size_of_variable_star_arr() {
    int max_n = 3;
    int *arr = new int[max_n];
    int res = sizeof(arr);
    delete[] arr;
    return res;
}