#ifndef _TWITTER_H_
#define _TWITTER_H_
#include <string>
#include <vector>
#include "util.h"

class TwitterAccount : public Account {
  private:

    // Initialize Keys Vector
    std::vector<std::string> keys;

    std::string name;
    std::string screen_name;
    std::string location;
    std::string description;
    std::string url;
    std::string lang;
    std::string profile_image_url;
    Date * created_at;
    unsigned int favourites_count;
    unsigned int statuses_count;
    bool verified;

  public:

    TwitterAccount(std::string id2, std::string email_address2, std::string name2, std::string screen_name2, std::string location2,
		std::string description2, std::string url2, std::string language2, std::string profile_image_url2, Date * createdAt2, unsigned int favourites_count2,
		unsigned int statuses_count2, bool verified2);
    
    //virtual ~TwitterAccount();



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
