#include <bits/stdc++.h>

using namespace std;

// Pair in STL ---> Pairs are used to store two values in a single variable.
void explainPair()
{
    cout << "Hello";
    pair<int, int> p = {78, 99};
    pair<int, int> p3 = make_pair(78, 99);
    cout << p3.first << " " << p3.second << endl; // 78 99
    cout << p.first << "," << p.second << endl;   // 78,99
    // pair of pairs
    pair<int, pair<int, int>> p1 = {22, {24, 77}};
    cout << p1.second.first << " " << endl;
    // array of pairs
    pair<int, int> arr[3] = {{1, 2}, {4, 5}, {89, 98}};
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl; // 1 2 4 5 89 98
    }
}

// Vectors in STL ----> Vectors are used to store multiple values in a single variable & they are dynamic in nature.

void explainVector()
{
    vector<int> v;
    v.push_back(10);
    v.emplace_back(11);
    v.emplace_back(12);
    v.emplace_back(1);
    v.emplace_back(5);
    v.emplace_back(2);
    v.emplace(v.begin(), 3);
    // for each
    for (auto &&i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    // vector with size--makes an array of size 5 and in all those five places fill the 100
    vector<int> vec(5, 100);
    for (auto &i : vec) // always use universal refrence && (tick) and &(false)
    {
        cout << i << " ";
    }
    cout << endl;

    // No hundered just garbage value
    vector<int> ve(5);

    // Making copy of a vector
    vector<int> v1(vec);
    for (auto &&i : v1)
    {
        cout << i << ", ";
    }
    cout << endl;

    // Iterators
    vector<int>::iterator it = v.begin(); // begin()--> it points to the memory address of the first element not the element itself
    it++;                                 // it points to the next element
    cout << *(it) << endl;                // 11

    it = it + 2;
    cout << *(it) << endl; // 12

    vector<int>::iterator it1 = v.end(); // end()--> it points to the memory address after the last element not the last element then we have to subtract the address to get the last element.
    it1--;                               // it points to the previous element
    cout << *(it1) << endl;              // 2

    vector<int>::reverse_iterator rit = v.rend(); // reverse_iterator points to the memory address before the first element not the first element then we have to add the address to get the first element.
    rit--;
    cout << *(rit) << endl; // first element-->3

    cout << v[0] << "   " << v.at(0) << endl; // both are same

    // iterating through a vector

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    // A shorter way to iterate
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // For each loop
    for (auto it : v)
    {
        // Here it is an int;
        cout << it << " ";
    }
    cout << endl;

    // Delete from a vector
    v.erase(v.begin());     // erases the first element
    v.erase(v.begin() + 1); // erases the second element

    // {1,2,3,4,5} --> {1,3,4,5}
    // v.erase(start,end);
    v.erase(v.begin() + 1, v.begin() + 4); // erases the second element to the fourth element not the fourth element itself.

    // Insert in a vector
    vector<int> v5(2, 33);            //{33,33}
    v5.insert(v5.begin(), 100);       //{100,33,33}
    v5.insert(v5.begin() + 1, 200);   //{100,200,33,33}
    v5.insert(v5.begin() + 2, 300);   //{100,200,300,33,33}
    v5.insert(v5.begin() + 3, 2, 10); //{100,200,300,10,10,33,33}
    vector<int> copy(2, 50);
    v5.insert(v5.begin(), copy.begin(), copy.end()); //{50,50,100,200,300,10,10,33,33}
    for (auto &&i : v5)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << v5.size() << endl; // 9

    v5.pop_back(); // removes the last element -->{50,50,100,200,300,10,10,33}

    // v6-->{10,20} v7-->{30,40}
    vector<int> v6 = {10, 20};
    vector<int> v7 = {30, 40};
    v6.swap(v7); // v6-->{30,40} v7-->{10,20} // v6 and v7 are swapped

    v5.clear();         // erases the whole vector and trims it down to an empty vector
    cout << v5.empty(); // true
    cout << v.empty();  // false
}

// List in STL C++: A doubly-linked list data structure
void explainList()
{
    // Create an empty list of integers
    list<int> ls;

    // Push elements to the back of the list
    ls.push_back(1);
    ls.emplace_back(2);

    // Push elements to the front of the list
    ls.push_front(3);
    ls.emplace_front(4);

    // Iterate through the list and print its contents
    cout << "List contents: ";

    for (auto &&i : ls)
    {
        cout << i << " "; // Print each element
    }
    cout << endl; // Move to next line after printing

    // List contents will be printed as: 4 3 1 2
    cout << "List size: " << ls.size() << endl;

    // List operations similar to vector:
    // begin(), end(), rebegin(), rend(), clear(), insert(), size(), swap()
}

void explainDeque()
{

    deque<int> dq;
    dq.push_back(1);     //{1}
    dq.emplace_back(2);  //{1,2}
    dq.push_front(3);    //{3,1,2}
    dq.emplace_front(4); //{4,3,1,2}
    // Gives the the value of last/first element but also they modify the deque
    dq.pop_back();  //{4,3,1}
    dq.pop_front(); //{3,1}
    // Gives the reference of first/last element but they doesn't modify the deque
    int fistElement = dq.front();
    int lastElement = dq.back();
    cout << fistElement << " " << lastElement << endl; // 3 1
    for (auto &&i : dq)
    {
        cout << i << " ";
    }
    cout << endl;
}

void explainStack()
{
    // LIFO --> Last In First Out
    stack<int> st;
    st.push(1);                 // 1
    st.push(2);                 // 2 1
    st.push(3);                 // 3 2 1
    cout << st.top() << endl;   // 3
    st.emplace(5);              // 5 3 2 1
    st.pop();                   // 3 2 1
    st.pop();                   // 2 1
    cout << st.size() << endl;  // 2
    cout << st.empty() << endl; // false

    stack<int> stk;
    stk.swap(st);
    cout << stk.size() << endl; // 2
}

void explainQueue() // FIFO --> First In First Out
{
    queue<int> q;
    q.push(1);                 // 1
    q.push(2);                 // 1 2
    q.push(3);                 // 1 2 3
    cout << q.front() << endl; // 1
    q.pop();                   // 2 3
    cout << q.back() << endl;  // 3
    cout << q.size();          // 2
}

void explainPriorityQueue()
// Priority Queue is a data structure that stores elements in a specific order based on their priority.
// The elements with higher priority are served before elements with lower priority.
{
    priority_queue<int> pq;
    pq.push(3);                 // 3
    pq.push(7);                 // 7 3
    pq.push(1);                 // 7 3 1
    pq.emplace(89);             // 89 7 3 1
    cout << pq.top() << endl;   // 89
    pq.pop();                   // 7 3 1
    cout << pq.top() << endl;   // 7
    pq.pop();                   // 3 1
    cout << pq.top() << endl;   // 1
    pq.pop();                   // 1
    cout << pq.empty() << endl; // true

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(3);                 // 3
    minHeap.push(7);                 // 3 7
    minHeap.push(1);                 // 1 3 7
    minHeap.emplace(89);             // 1 3 7 89
    cout << minHeap.top() << endl;   // 1
    minHeap.pop();                   // 3 7 89
    cout << minHeap.top() << endl;   // 3
    minHeap.pop();                   // 7 89
    cout << minHeap.top() << endl;   // 7
    minHeap.pop();                   // 89
    cout << minHeap.empty() << endl; // true
}

// In sets everything happens in logarithmic(log(n)) time complexity
void explainSet()
{
    set<int> s;
    // set is a collection of unique elements in sorted order
    s.insert(1);                // 1
    s.emplace(2);               // 1 2
    s.insert(2);                // 1 2
    s.insert(3);                // 1 2 3
    s.insert(8);                // 1 2 3 8
    s.insert(5);                // 1 2 3 5 8
    s.erase(2);                 // takes logrithmic time         // 1 3 5 8
    cout << s.size() << endl;   // 4
    cout << s.count(1) << endl; // 1

    auto it = s.find(3); // return the address of the element not the element itself
    cout << *it << endl;

    auto it1 = s.find(2); // return the address of the s.end() if the element is not present in the set --> after the last element in the set.

    auto it3 = s.find(3);
    s.erase(it3); // It takes constant time;

    // s.erase(it3, s.end());// It will erase the element from the address of the element to the end of the set

    auto it4 = s.find(3);
    auto it5 = s.find(8);
    s.erase(it4, it5); // It will erase the element from it4 to before it5

    // upper bound --> return the address of the element which is just greater than the element
    // lower bound --> return the address of the element which is just less than the element or equal to the element
    // set<int> s = {1,2,3,4,5,6,7,8}
    auto it6 = s.upper_bound(3); // 4
                                 //  return the address of the element which is just greater than the element
    auto it7 = s.lower_bound(3); // 3
    // return the address of the element which is just less than the element or equal to the element
}

void explainMultiSet()
{
    // Everything is same as set but only stores duplicate elements also in sorted order

    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(2); //{1,1,2}
    ms.insert(2); //{1,1,2,2}

    // all 1's erased
    ms.erase(1); // {2,2}

    int cnt = ms.count(1); // 2

    // only a single two will be erased because find returns the address of the element not the element itself
    ms.erase(ms.find(2));
}

void unorderedSet()
{
    unordered_set<int> us;
    // Lower bound and upper bound function doesn't work, rest of them work same as set
    // It does not store elements in any particular order
    // it has time complexity(O(1)) than set,excepts some collsion happens(O(n)).
}

void explainMap()
{
    // map is a collection of key value pairs and keys are unique and stored order
    map<int, int> m;
    map<int, pair<int, int>> m1;
    map<pair<int, int>, int> m2;

    m[1] = 2;         // {1,2}
    m.emplace(3, 4);  // {1,2 3,4}
    m.insert({5, 6}); // {1,2 3,4 5,6}

    m2[{2, 3}] = 4;

    for (auto &&i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << m[1] << endl;       // 2
    cout << m2[{1, 2}] << endl; // 4

    auto it = m.find(1);
    cout << (it->first) << " " << endl; // 1
    cout << (it->second) << endl;       // 2

    auto it1 = m.find(5);
    // if it1 is not found then it1 will point to m.end() which is the address just after the last element in the map.

    auto it3 = m.lower_bound(2);
    auto it4 = m.upper_bound(2);
}

void explainMultiMap()
{
    // Everything is same as map but stores duplicate keys
    // only map[key] cannot be used here
}

void explainUnsortedMap()
{
    // Same as set and unordered_set difference is that it doesn't store elements in any particular order
}

bool comparetors(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second)
    {
        return true;
    }
    if (p1.second > p2.second)
    {
        return false;
    }
    if (p1.first > p2.first)
    {
        return true;
    }
    return false;
}

void explainExtra()
{
    // sort(a,a+n,comparetors); // sort the array
    // sort(v.begin(), v.end(), comparetors); // sort the vector

    // sort(a+2,a+4,greater<int>());//sort the sub array from a[2] to a[3]
    int n = 3;
    pair<int, int> a[n] = {{1, 2}, {3, 4}, {5, 6}};

    // sort it according to second element
    // if second elements are same sort according to first element but in desending order

    sort(a, a + n, comparetors);
    // {{5,6},{3,4},{1,2}}

    //__builtin_popcount(x); // return the number of set bits in x

    int num = 7;
    int cnt = __builtin_popcount(num); // 3
    cout << cnt << endl;

    long long num1 = 16578734829799277299;
    int cnt1 = __builtin_popcountll(num1); // 63

    string s = "123";
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end())); // 123, 132, 213, 231, 312, 321
    // next_permutation(a,a+n); is to find the next possible permutatons of the array

    // int maxi = *max_element(a, a + n);
}

int main()
{
    // explainPair();
    // explainVector();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPriorityQueue();
    // explainSet();
    // explainUnorderedSet();
    // explainMap();
    // explainMultiMap();
    // explainUnsortedMap();
    // explainExtra();
    return 0;
}
