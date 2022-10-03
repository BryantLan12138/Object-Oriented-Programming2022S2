#include "Invoice.h"

Invoice::Invoice(std::string invoiceCode) : invoiceCode(invoiceCode), dollarsOwed(0) {
    if (isValidInvoiceCode(invoiceCode) == false) {
        std::cout << "Bad invoice code! " << invoiceCode << std::endl;
    }
}

std::string Invoice::getInvoiceCode() {
    return invoiceCode;
}

int Invoice::getDollarsOwed() {
    return dollarsOwed;
}

bool Invoice::trySetInvoiceCode(std::string invoiceCode) {
    if (isValidInvoiceCode(invoiceCode) == false) {
        return false;
    }

    this->invoiceCode = invoiceCode;
    return true;
}

void Invoice::addServiceCost(int costDollars) {
    dollarsOwed += costDollars;
}

void Invoice::applyDiscount(float percent) {
    dollarsOwed = dollarsOwed - dollarsOwed * percent;
}

int Invoice::computeTax() {
     return dollarsOwed * 0.1f;
}

bool Invoice::isValidInvoiceCode(std::string invoiceCode) {
    // Check it is correct length
    if (invoiceCode.length() != 4) {
        return false;
    }

    // Check it is all uppercase characters
    for (int i=0; i<invoiceCode.length(); i++) {
        if (std::isupper(invoiceCode[i]) == 0) {
            return false;
        }
    }

    // Otherwise good!
    return true;
}