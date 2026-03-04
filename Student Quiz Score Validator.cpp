// Student Quiz Score Validator.cpp

#include <iostream>
using namespace std;

class QuizResult
{
private:
    int score;

public:
    void set_score(int new_score)
    {
        if (new_score >= 0 && new_score <= 100)
        {
            score = new_score;
        }
        else
        {
            score = -1;
        }
    }

    int get_score()
    {
        return score;
    }
};

int main()
{
    QuizResult quiz;

    int input_score;
    cin >> input_score;

    quiz.set_score(input_score);
    cout << "Score: " << quiz.get_score() << endl;

    return 0;
}