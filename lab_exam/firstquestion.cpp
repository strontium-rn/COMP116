#include<iostream>
#include<string>
using namespace std;

const int MAX_REVIEWS = 10;
const int MAX_NAME_LENGTH = 50;
const int MAX_REVIEW_LENGTH = 100;

class ProductWithReview{
    private:
        char name[MAX_NAME_LENGTH];
        double price;
        char reviews[MAX_REVIEWS][MAX_REVIEW_LENGTH];
        int ratings[MAX_REVIEWS];
        int reviewCount;

    public:
        //constructor
}
