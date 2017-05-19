#ifndef _YOUTUBE_H_
#define _YOUTUBE_H_
#include <string>
#include <vector>
#include "util.h"

class YouTubeAccount : public Account {
  private:
    // Initialize Keys Vector
    std::vector<std::string> keys;
    std::string title;
    std::string description;
    unsigned int viewCount;
    unsigned int commentCount;
    unsigned int subscriberCount;
    unsigned int videoCount;
    Date * publishedAt;

  public:
  
    YouTubeAccount(std::string id2, std::string email_address2, std::string title2, std::string description2, Date * publishedAt2, unsigned int viewCount2, unsigned int commentCount2, unsigned int subscriberCount2, unsigned int videoCount2);

    //virtual ~YouTubeAccount();



    // Each type of account has a way to return its JSON representation for output.
    virtual Json::Value * createJSON() const;
    
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
