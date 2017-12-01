# Week 9 Agenda
![Image](https://github.com/tgroechel/F17-280/blob/master/.other/pictures/opera.gif)

## Function Pointers
- Just be comfortable using one
```cpp
double add(int * a, int b) {
    return *a + b;
}

double sub(int * a, int b) {
    return *a - b;
}

int main() {
    double (*varname)(int *, int); // declaration
    int a = 2, b = 3;

    varname = &add; // assginment
    cout << varname(&a, b) << endl; // how to use, 5

    varname = &sub; // can reassign to same type of signature
    cout << varname(&a, &b) << endl; // -1
}
```
## Functors

## Worksheet
[Worksheet](https://docs.google.com/document/d/1R-H_XOJnn3Wnqd4SjiMIgyQFJgBVh1LQF7hBqVjDvbY/edit)

## Exam Style Question
[Exam Style Dynamic](https://docs.google.com/document/d/1BBw-4zw2Pkjh_UhWIFflZMZBn28oGun7Q67SL75IUAo/edit)

## Work on lab

## Project 5 Overview
- slides, what are those?
- [Slides](https://docs.google.com/presentation/d/1owCucd3S0W1IKw5GWbxQNYpw95aUBSQOHa8SaMYmnhE/edit#slide=id.p)


## Closing Time
