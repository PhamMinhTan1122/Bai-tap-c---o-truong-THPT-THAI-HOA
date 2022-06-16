#include "../include.cpp"
int main()
{
    double canh_1, canh_2, canh_3, canh_4, max_1, max_2, max_3, max_4;
    cout << "Moi ban nhap cac so:" << endl;
    cout << "So 1: ";
    cin >> canh_1;
    cout << "So 2: ";
    cin >> canh_2;
    cout << "So 3: ";
    cin >> canh_3;
    cout << "So : ";
    cin >> canh_4;
    max_1 = canh_1;
    if (canh_2 > canh_1)
    {
        max_1 = canh_2;
    }
    if (canh_3 > max_1)
    {
        max_1 = canh_3;
    }
    if (canh_4 > max_1)
    {
        max_1 = canh_4;
    }
    if (canh_2 > max_1)
    {
        max_1 = canh_2;
    }
    if (canh_3 > max_1)
    {
        max_1 = canh_3;
    }
    if (canh_4 > max_1)
    {
        max_1 = canh_4;
    }

    if (max_1 == canh_1)
    {
        if (canh_2 > canh_3)
            max_2 = canh_2;
        if (canh_2 > canh_4)
            max_2 = canh_2;
        if (canh_3 > canh_4)
            max_2 = canh_3;
        if (canh_3 > canh_2)
            max_2 = canh_3;
        if (canh_4 > canh_2)
            max_2 = canh_4;
        if (canh_4 > canh_3)
            max_2 = canh_4;
        else if (canh_2 > canh_3)
            max_2 = canh_2;
        else if (canh_2 > canh_4)
            max_2 = canh_2;
        else if (canh_3 > canh_4)
            max_2 = canh_3;
        else if (canh_3 > canh_2)
            max_2 = canh_3;
        else if (canh_4 > canh_2)
            max_2 = canh_4;
        else if (canh_4 > canh_3)
            max_2 = canh_4;
    }
    else if (max_1 == canh_2)
    {
        if (canh_1 > canh_3)
            max_2 = canh_1;
        if (canh_1 > canh_4)
            max_2 = canh_1;
        if (canh_3 > canh_4)
            max_2 = canh_3;
        if (canh_3 > canh_1)
            max_2 = canh_3;
        if (canh_4 > canh_1)
            max_2 = canh_4;
        if (canh_4 > canh_3)
            max_2 = canh_4;
        else if (canh_1 > canh_3)
            max_2 = canh_1;
        else if (canh_1 > canh_4)
            max_2 = canh_1;
        else if (canh_3 > canh_4)
            max_2 = canh_3;
        else if (canh_3 > canh_1)
            max_2 = canh_3;
        else if (canh_4 > canh_1)
            max_2 = canh_4;
        else if (canh_4 > canh_3)
            max_2 = canh_4;
    }
    else if (max_1 == canh_3)
    {
        if (canh_1 > canh_2)
            max_2 = canh_1;
        if (canh_1 > canh_4)
            max_2 = canh_1;
        if (canh_2 > canh_4)
            max_2 = canh_2;
        if (canh_2 > canh_1)
            max_2 = canh_2;
        if (canh_4 > canh_1)
            max_2 = canh_4;
        if (canh_4 > canh_2)
            max_2 = canh_4;
        else if (canh_1 > canh_3)
            max_2 = canh_1;
        else if (canh_1 > canh_4)
            max_2 = canh_1;
        else if (canh_3 > canh_4)
            max_2 = canh_3;
        else if (canh_3 > canh_1)
            max_2 = canh_3;
        else if (canh_4 > canh_1)
            max_2 = canh_4;
        else if (canh_4 > canh_3)
            max_2 = canh_4;
    }
    else if (max_1 == canh_4)
    {
        if (canh_1 > canh_2)
            max_2 = canh_1;
        if (canh_1 > canh_3)
            max_2 = canh_1;
        if (canh_2 > canh_3)
            max_2 = canh_2;
        if (canh_2 > canh_1)
            max_2 = canh_2;
        if (canh_3 > canh_1)
            max_2 = canh_3;
        if (canh_3 > canh_2)
            max_2 = canh_3;
        else if (canh_1 > canh_2)
            max_2 = canh_1;
        else if (canh_1 > canh_3)
            max_2 = canh_1;
        else if (canh_2 > canh_3)
            max_2 = canh_2;
        else if (canh_2 > canh_1)
            max_2 = canh_2;

        else if (canh_3 > canh_1)
            max_2 = canh_3;
        else if (canh_3 > canh_2)
            max_2 = canh_3;
    }
    if (max_1 == canh_1 && max_2 == canh_2)
    {
        if (canh_3 > canh_4)
        {
            max_3 = canh_3;
            max_4 = canh_4;
        }
        if (canh_4 > canh_3)
        {
            max_3 = canh_4;
            max_4 = canh_3;
        }
    }
    if (max_1 == canh_1 && max_2 == canh_3)
    {
        if (canh_2 > canh_4)
        {
            max_3 = canh_2;
            max_4 = canh_4;
        }
        if (canh_4 > canh_2)
        {
            max_3 = canh_4;
            max_4 = canh_2;
        }
    }
    if (max_1 == canh_1 && max_2 == canh_4)
    {
        if (canh_2 > canh_3)
        {
            max_3 = canh_2;
            max_4 = canh_3;
        }
        if (canh_3 > canh_2)
        {
            max_3 = canh_3;
            max_4 = canh_2;
        }
    }
    if (max_1 == canh_2 && max_2 == canh_1)
    {
        if (canh_3 > canh_4)
        {
            max_3 = canh_3;
            max_4 = canh_4;
        }
        if (canh_4 > canh_3)
        {
            max_3 = canh_4;
            max_4 = canh_3;
        }
    }
    if (max_1 == canh_2 && max_2 == canh_3)
    {
        if (canh_1 > canh_4)
        {
            max_3 = canh_1;
            max_4 = canh_4;
        }
        if (canh_4 > canh_1)
        {
            max_3 = canh_4;
            max_4 = canh_1;
        }
    }
    if (max_1 == canh_2 && max_2 == canh_4)
    {
        if (canh_1 > canh_3)
        {
            max_3 = canh_1;
            max_4 = canh_3;
        }
        if (canh_3 > canh_1)
        {
            max_3 = canh_3;
            max_4 = canh_1;
        }
    }
    if (max_1 == canh_3 && max_2 == canh_1)
    {
        if (canh_2 > canh_4)
        {
            max_3 = canh_2;
            max_4 = canh_4;
        }
        if (canh_4 > canh_2)
        {
            max_3 = canh_4;
            max_4 = canh_2;
        }
    }
    if (max_1 == canh_3 && max_2 == canh_2)
    {
        if (canh_1 > canh_4)
        {
            max_3 = canh_1;
            max_4 = canh_4;
        }
        if (canh_4 > canh_1)
        {
            max_3 = canh_4;
            max_4 = canh_1;
        }
    }
    if (max_1 == canh_3 && max_2 == canh_4)
    {
        if (canh_1 > canh_2)
        {
            max_3 = canh_1;
            max_4 = canh_2;
        }
        if (canh_2 > canh_1)
        {
            max_3 = canh_2;
            max_4 = canh_1;
        }
    }
    if (max_1 == canh_4 && max_2 == canh_1)
    {
        if (canh_2 > canh_3)
        {
            max_3 = canh_2;
            max_4 = canh_3;
        }
        if (canh_3 > canh_2)
        {
            max_3 = canh_3;
            max_4 = canh_2;
        }
    }
    if (max_1 == canh_4 && max_2 == canh_2)
    {
        if (canh_1 > canh_3)
        {
            max_3 = canh_1;
            max_4 = canh_3;
        }
        if (canh_3 > canh_1)
        {
            max_3 = canh_3;
            max_4 = canh_1;
        }
    }
    if (max_1 == canh_4 && max_2 == canh_3)
    {
        if (canh_1 > canh_2)
        {
            max_3 = canh_1;
            max_4 = canh_2;
        }
        if (canh_2 > canh_1)
        {
            max_3 = canh_2;
            max_4 = canh_1;
        }
    }
    cout << "So lon nhat: " << max_1 << endl;
    cout << "So lon nhi: " << max_2 << endl;
    cout << "So lon thu ba: " << max_3 << endl;
    cout << "So lon thu tu: " << max_4 << endl;
    return 0;
}
