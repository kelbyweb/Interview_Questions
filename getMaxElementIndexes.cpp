//Solution

vector<int> getMaxElementIndexes(vector<int> a, vector<int> rotate) {

vector<int> indexes; // new vector array

    // find index of max
    int maxElementIndex = max_element(a.begin(),a.end()) - a.begin();

    // rotate array
    for (int i = 0; i < rotate.size(); i++){
        int value = maxElementIndex - rotate[i];
        if (value < 0){
            value = -1 * (-value % a.size());
            if (value != 0)
                value += a.size();
        }
        indexes.push_back(value);
    }
    return indexes; // return new array
}
