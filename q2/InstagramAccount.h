#ifndef _INSTAGRAM_H_
#define _INSTAGRAM_H_
#include <string>
#include <vector>
#include "util.h"

class InstagramAccount : public Account {
  private:

    // Initialize Keys Vector
    std::vector<std::string> keys;

    std::string username;
    std::string full_name;
    std::string profile_picture;
    std::string bio;
    std::string website;
    unsigned int counts;

  public:
    InstagramAccount(std::string id, std::string email_address, std::string username, std::string full_name, std::string profile_picture,
		std::string bio, std::string website, unsigned int counts);
    
    //virtual ~InstagramAccount();


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
