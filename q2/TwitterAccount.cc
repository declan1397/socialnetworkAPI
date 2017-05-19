#include "TwitterAccount.h"

TwitterAccount::TwitterAccount(string id2, string email_address2, string name2, string screen_name2, string location2,
string description2, string url2, string language2, string profile_image_url2, Date * createdAt2, unsigned int favourites_count2,
unsigned int statuses_count2, bool verified2){
    id = id2;
    email_address = email_address2;
    name = name2;
    screen_name = screen_name2;
    location = location2;
    description = description2;
    url = url2;
    language = language2;
    profile_image_url = profile_image_url2;
    createdAt = createdAt2;
    favourites_count = favourites_count2;
    statuses_count = statuses_count2;
    verified = verified2;
}