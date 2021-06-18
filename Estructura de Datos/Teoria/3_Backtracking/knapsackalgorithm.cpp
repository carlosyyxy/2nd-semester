#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>

using namespace std;
struct object {
    int weight, value;
    string name;
};

struct knapsack {
    int capacity, value;
    vector<object> elements;
};

object objects[4];
int n = 4;
knapsack solution, optimal;

void knapsackAlgorithm(int start, knapsack solution, knapsack &optimal);

int main() {
    solution.capacity = 14;
    solution.value = 0;
    optimal.capacity = 14;
    optimal.value = 0;

    objects[0].weight = 2;
    objects[0].value = 3;
    objects[0].name = "Obj1";

    objects[1].weight = 3;
    objects[1].value = 5;
    objects[1].name = "Obj2";

    objects[2].weight = 4;
    objects[2].value = 6;
    objects[2].name = "Obj3";

    objects[3].weight = 5;
    objects[3].value = 10;
    objects[3].name = "Obj4";

    knapsackAlgorithm(0, solution, optimal); // la salida sera Obj1, Obj1, Obj4, Obj4
    cout<<"Valor total: "<<optimal.value;
    cout<<"Elementos: ";
    for (size_t i = 0; i < optimal.elements.size(); i++)
        cout<<optimal.elements[i].name<<" ";
    return 0;
    }

    void knapsackAlgorithm(int start, knapsack solution, knapsack &optimal) {
        if (solution.value > optimal.value)
            optimal = solution;
            
        for (int k = start; k < n; k++) {
            if (objects[k].weight <= solution.capacity) {
                solution.value += objects[k].value;
                solution.capacity -= objects[k].weight;
                solution.elements.push_back(objects[k]);
                knapsackAlgorithm(k, solution, optimal);
                solution.value -= objects[k].value;
                solution.capacity += objects[k].weight;
                solution.elements.pop_back();
            }
        }
    }