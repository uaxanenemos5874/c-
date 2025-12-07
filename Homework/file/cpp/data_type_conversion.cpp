    // This is the solution Homework1 from C++ Course 3, Lesson #30. 
    // Date: 26/10/2025, Time: 7:43

    #include <iostream>
    #include <string>

    using namespace std;

    int main () {
        string st1, Num1_str, Num2_str, Num3_str;
        int Num1, Num3_int, st1_int;
        double Num2, st1_double;
        float Num3, st1_float;



        st1 = "43.22";
        Num1 = 20;
        Num2 = 33.5;
        Num3 = 55.23;

    // convert string to double, float, int.
        st1_int = stoi(st1);
        st1_double = stod(st1);
        st1_float = stof(st1);

    // convert double, float, int to string.    
        Num1_str = to_string(Num1);
        Num2_str = to_string(Num2);
        Num3_str = to_string(Num3);

    // convert double, float to int.

        Num3_int = Num3;
        cout << "Float num3 to int = " << Num3_int << endl;
        Num3_int = (int) Num3;
        cout << "Float num3 to int = " << Num3_int << endl;
        Num3_int = int(Num3);
        cout << "Float num3 to int = " << Num3_int << endl;


        cout << "Srting st1 to int = " << st1_int << endl;
        cout << "String st1 to float = " << st1_float << endl;
        cout << "String st1 to double = " << st1_double << endl;
        cout << "Integer num1 to string = " << Num1_str << endl;
        cout << "Double num2 to string = " << Num2_str << endl;
        cout << "Float num3 to String = " << Num3_str << endl;

        return 0;

    }