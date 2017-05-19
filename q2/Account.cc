// Account.cpp
#include "Account.h"

// NOTICE: This may cause error (using id2 and email_address2), since it is inconsistent with declaration

// COMPLETE
Account::Account( const std::string & id2, const std::string & email_address2 ){
    ID = id2;
    email_address = email_address2;
}

/* Skipped
Json::Value * Account::createFriendsJSON() const {

}*/

/* Skipped
Json::Value * Account::createFollowersJSON() const {
    
}*/

// COMPLETE
static bool Account::validateJSON( const Json::Value & value ){
    // Go through JSON, checking if instances keys are in the JSON
    for (int i=0; i < this->keys.size(); i++){
        if (!value.isMember(keys[i]){
            return false;
        }
    }

    // Every key was found in JSON
    return true;
}

// COMPLETE
std::string Account::id() const {
    return ID;
}

// COMPLETE
unsigned int Account::numFriends() const{
    return friends.size();
}

// COMPLETE
unsigned int Account::numFollowers() const{
    return followers.size();
}

// Add the specified friend/follower to the list of friends/followers.

// COMPLETE
void Account::addFollower( const Account * account ){
    followers.push_back(account);
}

// COMPLETE
void Account::addFriend( const Account * account ){
    friends.push_back(account);
}

// Remove specified friend/follower. Returns true if successful; otherwise, returns false.

// COMPLETE
bool Account::removeFollower( const Account * account ){
    int size = followers.size();
    followers.erase(std::remove(followers.begin(), followers.end(), account), followers.end());
    return size > followers.size();
}

// COMPLETE
bool Account::removeFriend( const Account * account ){
    int size = friends.size();
    friends.erase(std::remove(friends.begin(), friends.end(), account), friends.end());
    return size > friends.size();
}

// Returns true if specified friend/follower is in list; otherwise, returns false.

// COMPLETE
bool Account::hasFollower( const Account * account ) const{
    if (!hasFollowers()){
        return false;
    }

    if ( std::find(followers.begin(), followers.end(), account) != followers.end() )
        return true;
    else
        return false;
}

// COMPLETE
bool Account::hasFollower( const std::string & accountID ) const{
    if (!hasFollowers()){
        return false;
    }

    for (int i=0; i < followers.size(); i++){
        if (followers[i]->id() == accountID){
            return true;
        }
    }
    return false;

}

// COMPLETE
bool Account::hasFriend( const Account * account ) const{
    if (!hasFriends()){
        return false;
    }

    if ( std::find(friends.begin(), friends.end(), account) != friends.end() )
        return true;
    else
        return false;
}

// COMPLETE
bool Account::hasFriend( const std::string & accountID ) const{
    if (!hasFriends()){
        return false;
    }
    
    for (int i=0; i < friends.size(); i++){
        if (friends[i]->id() == accountID){
            return true;
        }
    }
}

// Helper Functions

// COMPLETE
bool Account::hasFollowers() const {
    return numFollowers() > 0;
}

// COMPLETE
bool Account::hasFriends() const {
    return numFriends() > 0;
}