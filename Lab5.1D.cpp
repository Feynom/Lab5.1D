#include <iostream>
#include "Vector3D.h"

int main()
{
    Vector3D A, B, C;

    try
    {
    Vector3D F(4, 4, 4);
    }
    catch (invalid_argument e)
    {
        cout << e.what() << endl;
    }
    catch (bad_exception e)
    {
        cout << e.what() << endl;
    }
    catch (MyException& e)
    {
        cout << e.what() << endl;
    }
    catch (const char* e)
    {
        cerr << e << endl;
    }

    

    cout << "Size of class is equal to " << sizeof(Vector3D);

    return 0;
}