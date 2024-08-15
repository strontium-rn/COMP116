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
        ProductWithReview(){name[0]='\0'; price=0.0; reviewCount=0;}

        void setName(char n[]){
            for (int i = 0; i < MAX_NAME_LENGTH; i++)
            {
                name[i] = n[i];              
            }            
        }
        void setPrice(double p){
            price=p;
        }
        void addReview(char text[], int rating){
            if (reviewCount < MAX_REVIEWS){
                for (int i = 0; i < MAX_REVIEW_LENGTH; i++)
                {
                    reviews[reviewCount][i] = text[i];                    
                }
                ratings[reviewCount] = rating;
                reviewCount++;                
            }
            else{
                cout<<"Cannot add more reviews. Limit reached."<<endl;
            }
            
        }
        double getAverageRating(){
            if (reviewCount == 0) return 0;
            int sum = 0;
            for (int i = 0; i < reviewCount; i++)
            {
                sum += ratings[i];
            }
            return (double)sum/ reviewCount;         
            
        }
        void displayProduct(){
            std::cout << "Product: " << name << std::endl;
            std::cout << "Price: Rs " << price << std::endl;
            std::cout << "Average Rating: " << getAverageRating() << std::endl;
            std::cout << "Reviews:" << std::endl;
            for (int i = 0; i < reviewCount; i++)
            {
                std::cout << "- " << reviews[i] << " (Rating: " << ratings[i] << ")" << std::endl;
        
            }
            
        }
};
int main(){
    ProductWithReview product;
    char productName[] = "Example Product";
    product.setName(productName);
    product.setPrice(2999.99);

    char review1[] = "Great Product!";
    product.addReview(review1, 5);

    char review2[] = "Decent, but could be better";
    product.addReview(review2, 3);

    product.displayProduct();

    return 0;
}