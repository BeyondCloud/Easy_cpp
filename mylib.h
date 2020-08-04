#include <iostream>
#include <numeric>
#define print(x) cout<<x<<endl;
template <size_t N,typename T>
int len(const T (&arr)[N])
{
    return N;
}
template <size_t N,typename T>
T sum(const T (&arr)[N])
{
    return std::accumulate(std::begin(arr), std::end(arr), 0.0);
}
template <typename Container>
double sum(const Container &container)
{
    return std::accumulate(container.begin(), container.end(), 0.0);
}


//template <typename Container>
//inline void pContainer(const Container &container) {
//    for (const auto &v : container)
//        cout << v;
//    cout<<endl;
//}
