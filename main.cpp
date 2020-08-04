#include <iostream>
#include <vector>
#include <deque>

using namespace std;


#include "mylib.h"
#include "is_stl_container.h"
using namespace is_stl_container_impl;


int main()
{
    int arr_i[] = { 1,2,3};
    double arr_d[] = { 1.1,2.2,3.3};

    vector<int> vec_i= { 1,2,3};
    vector<double> vec_d= { 1.1,2.2,3.3};
    deque<int> dq (arr_i, arr_i + len(arr_i));

    print( sum(arr_i))
    print( sum(arr_d))
    print( sum(vec_i))
    print( sum(vec_d))
    print( sum(dq))



	return 0;
}

