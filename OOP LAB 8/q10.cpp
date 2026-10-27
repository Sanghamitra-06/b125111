#include <iostream>
using namespace std;
class Recommender {
public:
    virtual void generateRecommendation(int userRating, int popularity) {
        cout << "Generating recommendation score..." << endl;
    }
};
class PersonalizedRecommender : public Recommender {
public:
    void generateRecommendation(int userRating, int popularity) override {
        double score = 0.7 * userRating + 0.3 * popularity;
        cout << "Personalized Recommendation Score: " << score << endl;
    }
};
class TrendingRecommender : public Recommender {
public:
    void generateRecommendation(int userRating, int popularity) override {
        double score = 0.3 * userRating + 0.7 * popularity;
        cout << "Trending Recommendation Score: " << score << endl;
    }
};

int main() {
    Recommender* p1 = new PersonalizedRecommender();
    Recommender* p2 = new TrendingRecommender();

    p1->generateRecommendation(85, 40);
    p2->generateRecommendation(85, 40);

    delete p1;
    delete p2;

    return 0;
}