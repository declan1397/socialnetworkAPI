#ifndef _INSTAGRAM_H_
#define _INSTAGRAM_H_
#include <string>
#include <vector>
#include "util.h"

class InstagramAccount : Account {
  private:

    // Initialize Keys Vector
    static const string keyArray[] = {"id", "email_address", "username", "full_name", "bio", "profile_picture", "website", "counts", "followed_by", "follows"};
    vector<string> keys (keyArray, keyArray + sizeof(keyArray) / sizeof(keyArray[0]) );

    string username;
    string full_name;
    string profile_picture;
    string bio;
    string website;
    unsigned int counts;

  public:
    InstagramAccount(string id, string email_address, string username, string full_name, string profile_picture,
		string bio, string website, unsigned int counts);
    
    virtual ~InstagramAccount();
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
