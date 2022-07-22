int median_array(int array[], int n) {
    // sort first then find median number
    // use bubble sort this case
    int tmp = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(array[j] < array[i]) {
                tmp = array[j];
                array[j] = array[i];
                array[i] = tmp;
            }
        }
    }
    if(n % 2 == 0 || n < 1) {
        return 0;
    }
    return array[(n - 1)/2];
}