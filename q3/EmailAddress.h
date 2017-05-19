/*
 * EmailAddress ensures email addresses are formatted to specification.
 *
 *  Created by Caroline Kierstead on 2017-04-17.
 *  Last updated: 2017-04-18
 *  Copyright 2017 UW. All rights reserved.
 *
 */
#ifndef _EMAIL_ADDRESS_H_
#define _EMAIL_ADDRESS_H_
#include <string>

class EmailAddress {
    const std::string _email_address; 
    static const std::string ALL_VALID;
    static const std::string ALPHANUM;

public:
    // Precondition: validateEmailAddress on email_address returns true
    EmailAddress( const std::string & email_address );
    static bool validateEmailAddress( const std::string & email_address );
    std::string id() const;
};

#endif
