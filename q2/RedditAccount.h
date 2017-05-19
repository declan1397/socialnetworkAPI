#ifndef _REDDIT_H_
#define _REDDIT_H_
#include <string>
#include <vector>
#include "util.h"

class RedditAccount : public Account {
  private:

    // Initialize Keys Vector
    std::vector<std::string> keys;
    Date * creationDate;
    Date * expirationDate;
    std::string name;
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

    RedditAccount(std::string id2, std::string email_address2, std::string name2, bool is_mod2, bool is_employee2, 
		bool over_18_2, bool has_verified_email2, bool is_gold2, 
		unsigned int gold_creddits2, unsigned int link_karma2, unsigned int comment_karma2,
		unsigned int inbox_count2, Date * expirationDate2, Date * creationDate2);
    
    //virtual ~RedditAccount();



    // Each type of account has a way to return its JSON representation for output.
    virtual Json::Value * createJSON() const override;
    /* SKIPPED
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
