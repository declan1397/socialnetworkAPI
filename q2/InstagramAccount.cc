#include "InstagramAccount.h"

InstagramAccount::InstagramAccount(string id2, string email_address2, string username2, string full_name2, string profile_picture2,
string bio2, string website2, unsigned int counts2){
    id = id2;
    email_address = email_address2;
    username = username2;
    full_name = full_name2;
    profile_picture = profile_picture2;
    bio = bio2;
    website = website2;
    counts = counts2;

    // Populate Keys Vector
    std::string keyArray[] = {"id", "email_address", "username", "full_name", "bio", "profile_picture", "website", "counts", "followed_by", "follows"};
    for (int i=0; i < keyArray.length(); i++){
        keys.push_back(keyArray[i]);
    }
}
virtual Json::Value * createJSON() const {
    
}