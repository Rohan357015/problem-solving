unorderd_map<key_type , value_type> myMap1;
unorderd_map<key_type , value_type> myMap2 = {{1, "One"} , {2 , "Two"}};
map1[key] = value;

//insert the value of 2nd mao in One
map1.insert(map2.begin(),map2.end());

map1.erase(key);
map1.size();

map1 == map2; -> Bollean

map1.find(key) != map1.end();   -> Iterator
map1.count(key);  -> 0/1


Accessing only keys
map<int,int>={{1,1},{2,1},{3,5},{4,6}}
for(auto pair:myMap){
    cout << pair.first << endl;   -> {1,2,3,4}
}

Accessing only value
map<int,int>={{1,1},{2,1},{3,5},{4,6}}
for(auto pair:myMap){
    cout << pair.second << endl;  -> {1,1,5,6}
}


Sorting by keys (Ascending order)
bool fun(pair<int , string>key1 ,pair<int ,string>key2){
    return key1.first<key2.first;
}
unorderd_map<int , string> Map = {{2, "One"} , {1 , "Two"}};
vector<pair <int , string > >vec (Map.begin(),Map.end());
sort(vec.begin() , vec.end() ,fun);