#ifndef _YOUTUBE_H_
#define _YOUTUBE_H_
#include <string>
#include <vector>
#include "util.h"

class YouTubeAccount : Account {
  private:
    // Initialize Keys Vector
    static const string keyArray[] = {"id", "email_address", "title", "description", "viewCount", "commentCount", "subscriberCount", "videoCount", "publishedAt"};
    vector<string> keys (keyArray, keyArray + sizeof(keyArray) / sizeof(keyArray[0]) );
  
    string title;
    string description;
    unsigned int viewCount;
    unsigned int commentCount;
    unsigned int subscriberCount;
    unsigned int videoCount;
    Date * publishedAt;

  public:
    YouTubeAccount(string id2, string email_address2, string title2, string description2, Date * publishedAt2, unsigned int viewCount2, unsigned int commentCount2, unsigned int subscriberCount2, unsigned int videoCount2);

    virtual ~YouTubeAccount();
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
