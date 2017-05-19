#ifndef _REDDIT_H_
#define _REDDIT_H_
#include <string>
#include <vector>
#include "util.h"

class RedditAccount : Account {
  private:

    // Initialize Keys Vector
    static const string keyArray[] = {"id", "email_address", "name", "is_mod", "is_employee", "over_18", "has_verified_email", "is_gold", "gold_creddits", "link_karma", "comment_karma", "inbox_count", "suspension_expiration", "created"};
    vector<string> keys (keyArray, keyArray + sizeof(keyArray) / sizeof(keyArray[0]) );

    Date * creationDate;
    Date * expirationDate;
    string name;
    bool is_mod;
    bool is_employee;
    bool over_18;
    bool has_verified_email;
    bool is_gold;
    unsigned int gold_creddits;
    unsigned int link_karma;
    unsigned int comment_karma;
    unsigned int inbox_count;
    
  public:

    RedditAccount(string id2, string email_address2, string name2, bool is_mod2, bool is_employee2, 
		bool over_18_2, bool has_verified_email2, bool is_gold2, 
		unsigned int gold_creddits2, unsigned int link_karma2, unsigned int comment_karma2,
		unsigned int inbox_count2, Date * expirationDate2, Date * creationDate2);
    
    virtual ~RedditAccount();

    /* SKIPPED

    // Each type of account has a way to return its JSON representation for output.
    virtual Json::Value * createJSON() const override;

    // Is this account currently suspended? Check expiration date (if applicable) to system date.
    virtual bool suspended() const override;

    // Is this account a moderator?
    virtual bool moderator() const override;

    // If account doesn't have a specific username (distinct from the id), returns id.
    virtual std::string username() const override;

    // How many photos/videos/media/profile pictures are associated with this account?
    virtual unsigned int numAssociatedMedia() const override; 
    */

};

#endif
