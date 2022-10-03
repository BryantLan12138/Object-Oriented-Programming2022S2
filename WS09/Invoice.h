#ifndef INVOICE_H
#define INVOICE_H

#include <string>
#include <iostream>

/**
 * An invoice holds the amount due for a service.
 * An invoice starts off empty and costs of services are added to it.
 */
class Invoice {
public:

    /**
     * Construct a new Invoice with no dollars owed with given valid invoiceCode.
     * It is an error to give a bad invoiceCode.
     */
    Invoice(std::string invoiceCode);

    std::string getInvoiceCode();

    int getDollarsOwed();

    /**
     * Set a four character, uppercase identifier code for this invoice.
     * If the code is invalid, false is returned and the stored code is not changed.
     * Returns true if it is a valid code or false otherwise.
     */
    bool trySetInvoiceCode(std::string invoiceCode);

    /**
     * Adds the cost of a service to the current invoice in dollars.
     * Use only positive dollar amounts.
     */
    void addServiceCost(int costDollars);

    /**
     * Applies a discount to the Current owed amount, changing its value immediately.
     * Reduces the amount by percent argument with values 0.0->1.0. Values must not be outside this range.
     * If dollars owed would be 20, then a discount percent of 0.25 would have dollars owed become 15
     */
    void applyDiscount(float percent);

    /**
     * Returns the tax amount owed given the current dollars owed of the invoice.
     * Tax is fixed at 10% of dollars owed.
     */
    int computeTax();

private:

    /**
     * Returns true if the given invoiceCode is a 4 character, uppercase string, false otherwise.
     */
    bool isValidInvoiceCode(std::string invoiceCode);

    std::string invoiceCode;    // Four uppercase characters unique to the invoice
    int dollarsOwed;            // Our invoices only work with whole dollars
};

#endif