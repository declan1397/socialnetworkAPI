#include "RedditAccount.h"

RedditAccount::RedditAccount(string id2, string email_address2, string name2, bool is_mod2, bool is_employee2, 
bool over_18_2, bool has_verified_email2, bool is_gold2, 
unsigned int gold_creddits2, unsigned int link_karma2, unsigned int comment_karma2,
unsigned int inbox_count2, Date * expirationDate2, Date * creationDate2){
    id = id2;
    email_address = email_address2;
    name = name2;
    is_mod = is_mod2;
    is_employee = is_employee2;
    over_18 = over_18_2;
    has_verified_email = has_verified_email2;
    is_gold = is_gold2;
    gold_creddits = gold_creddits2;
    link_karma = link_karma2;
    comment_karma = comment_karma2;
    inbox_count = inbox_count2;
    expirationDate = expirationDate2;
    creationDate = creationDate2;

    // Populate keys
    std::string keyArray[] = {"id", "email_address", "name", "is_mod", "is_employee", "over_18", "has_verified_email", "is_gold", "gold_creddits", "link_karma", "comment_karma", "inbox_count", "suspension_expiration", "created"};

    for (int i=0; i < keyArray.length(); i++){
        keys.push_back(keyArray[i]);
    }
}

virtual Json::Value * createJSON() const {
    
}