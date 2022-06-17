#include "../include.cpp"
int main()
{
    int first_count = 1;
    string s;
    while (first_count <= 10)
    {
        int second_count = 2;
        while (second_count <= 5)
        {
            s = to_string(second_count) + " x " + to_string(first_count) + " = " + to_string(first_count * second_count);
            printf("%20s", s.c_str());
            second_count++;
        }

        first_count++;
        printf("\n");
    }
    printf("\n\n");
    int first_count_ = 1;
    while (first_count_ <= 10)
    {
        int second_count = 6;
        while (second_count <= 9)
        {
            s = to_string(second_count) + " x " + to_string(first_count_) + " = " + to_string(first_count_ * second_count);
            printf("%20s", s.c_str());
            second_count++;
        }

        first_count_++;
        printf("\n");
    }
}