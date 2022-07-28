
int sum_if_palindrome(int integers[], int length);
bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);

extern int sum_if_palindrome(int integers[], int length)
{
    if(length < 1)
    {
        return -1;
    }
    
    if(is_palindrome(integers,length))
    {
        return sum_array_elements(integers,length);
    }
    else
    {
        return -2;
    }
}

extern bool is_palindrome(int integers[], int length)
{
    bool result = false;
    if(length > 0) 
    {
        for(int i = 0; i < length / 2; i++) {
            if(integers[i] == integers[length - i - 1]) 
            {
                result = true;
            }
            else 
            {
                result = false;
            }
        }
    }

    else
    {
        return -1;
    }

    return result;
}

extern int sum_array_elements(int integers[], int length)
{
    int sum_palindrome = 0;
    int i;
    
    if(length > 0)
    {
        for(i = 0; i < length; i++)
        {
            sum_palindrome += integers[i];
        }
    }
    else
    {
        return -1;
    }
    
    return sum_palindrome;
}
