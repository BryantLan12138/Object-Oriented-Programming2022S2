int size_of_variable_star_t( ) {
    int *t = new int;
    int temp = sizeof(t);
    delete t;
    return temp;
}