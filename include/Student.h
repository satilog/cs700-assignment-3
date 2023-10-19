/**
 * @file Student.h
 * @author Sathyajit Loganathan
 * @brief Declaration of the Student class.
 * @date October 19, 2023
 *
 * This file contains the declaration of the Student class, which is derived from the Customer class.
 * The Student class includes additional features specific to student customers of the bank.
 */

#ifndef STUDENT_H
#define STUDENT_H

#pragma once

#include "Customer.h"

/**
 * @class Student
 * @brief Represents a student customer in the banking system.
 *
 * This class is a derivative of the Customer class, holding information and operations
 * that are specific to student customers.
 */
class Student : public Customer
{
public:
    /**
     * @brief Constant for the savings interest applicable to student customers.
     */
    static const double SAVINGS_INTEREST;

    /**
     * @brief Constant for the check interest applicable to student customers.
     */
    static const double CHECK_INTEREST;

    /**
     * @brief Constant for the check charge applicable to student customers.
     */
    static const double CHECK_CHARGE;

    /**
     * @brief Constant for the overdraft penalty applicable to student customers.
     */
    static const double OVERDRAFT_PENALTY;

    /**
     * @brief Constructs a Student object.
     *
     * Initializes a new student customer with the given details.
     *
     * @param name The name of the student customer.
     * @param address The address of the student customer.
     * @param age The age of the student customer.
     * @param telephoneNumber The telephone number of the student customer.
     */
    Student(string name, string address, int age, long long telephoneNumber);

    /**
     * @brief Retrieves the savings interest for student customers.
     *
     * @return The savings interest rate.
     */
    double getSavingsInterest();

    /**
     * @brief Retrieves the checking interest for student customers.
     *
     * @return The checking interest rate.
     */
    double getCheckingInterest();

    /**
     * @brief Retrieves the checking charge for student customers.
     *
     * @return The checking charge amount.
     */
    double getCheckingCharge();

    /**
     * @brief Retrieves the overdraft penalty for student customers.
     *
     * @return The overdraft penalty amount.
     */
    double getOverdraftPenalty();
};

#endif  // STUDENT_H
