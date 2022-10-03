#include "Invoice.h"
#include <iostream>
using namespace std;


int main(){
    /* Also notice we are using some curly-braces around each test
     - we are allowed to do this and it means that the names of variables 
     used in a test are only inside that scope, and can be reused in later tests. 
     This saves some typing.
    */

    {
        Invoice invoice("SARE");
        invoice.addServiceCost(10);
        if (invoice.getDollarsOwed() != 10) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    {
        Invoice invoice("SARE");
        invoice.addServiceCost(1123);
        if (invoice.getDollarsOwed() != 1124) {
            std::cout << "Test addServiceCost() failed!" << std::endl;
        }
    }

    {
        Invoice invoice("SARE");
        invoice.addServiceCost(1123);
        if (invoice.getInvoiceCode() != "SARE") {
            std::cout << "Test getInvoiceCode() failed!" << std::endl;
        }
    }

    {
        Invoice invoice("SARE");
        invoice.addServiceCost(1123);
        if (invoice.getInvoiceCode() != "SARE") {
            std::cout << "Test getInvoiceCode() failed!" << std::endl;
        }
    }

    // ... to be continued to test the rest functions 
}