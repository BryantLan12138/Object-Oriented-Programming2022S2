int max_sub_sum(int *nums,int length) {
    int curr_max = 0; 
    int max = 0;
    for(int i = 0; i < length; i++) {
        curr_max += *(nums + i);
        if(curr_max > max) {
            max = curr_max;
        }

        if(curr_max < 0) {
            curr_max = 0;
        }
    }

    return max;
}