#ifndef _TWITTER_H_
#define _TWITTER_H_
#include <string>
#include <vector>
#include "util.h"

class TwitterAccount : Account {
  private:

    // Initialize Keys Vector
    static const string keyArray[] = {"id", "email_address", "name", "screen_name", "location", "description", "lang", "verified", "url", "profile_image_url", "followers_count", "friends_count", "favourites_count", "statuses_count", "created_at" };
    vector<string> keys (keyArray, keyArray + sizeof(keyArray) / sizeof(keyArray[0]) );

    string name;
    string screen_name;
    string location;
    string description;
    string url;
    string lang;
    string profile_image_url;
    Date * created_at;
    unsigned int favourites_count;
    unsigned int statuses_count;
    bool verified;

  public:

    TwitterAccount(string id2, string email_address2, string name2, string screen_name2, string location2,
		string description2, string url2, string language2, string profile_image_url2, Date * createdAt2, unsigned int favourites_count2,
		unsigned int statuses_count2, bool verified2);
    
    virtual ~TwitterAccount();

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
