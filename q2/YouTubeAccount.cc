class YouTubeAccount;

YouTubeAccount::YouTubeAccount(std::string id2, std::string email_address2, std::string title2, std::string description2, Date * publishedAt2, unsigned int viewCount2, unsigned int commentCount2, unsigned int subscriberCount2, unsigned int videoCount2){
    id = id2;
    email_address = email_address2;
    title = title2;
    description - description2;
    publishedAt = publishedAt2;
    viewCount = viewCount2;
    commentCount = commentCount2;
    subscriberCount = subscriberCount2;
    videoCount = videoCount2;

    // Populate Keys Vector
    string keyArray[] = {"id", "email_address", "title", "description", "viewCount", "commentCount", "subscriberCount", "videoCount", "publishedAt"};
    for (int i=0; i < keyArray.length(); i++){
        keys.push_back(keyArray[i]);
    }
}

virtual Json::Value * createJSON() const override{
    
}