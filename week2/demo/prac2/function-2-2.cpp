
int binary_to_int(int binary_digits[], int number_of_digits) 
{   
    int pow_of_two = 1;
    int least_significant_digit = number_of_digits - 1;
    int result = 0;
    for(int i = 0; i < number_of_digits; i++) {
        result += binary_digits[least_significant_digit - i] * pow_of_two;
        pow_of_two *= 2;
    }

    return result;
}