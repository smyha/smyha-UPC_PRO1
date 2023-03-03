//X59349 - FlagColumns
#include<iostream>
#include<vector>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Flag;

Flag read_flag (int size){
    Flag data(size, Row(size));
    for (int i = 0; i < size; ++i){
        for (int j = 0; j < size; ++j){
            cin >> data[i][j];
        }
    }
    return data;

}

int column_count (const Flag& flag){
    int size = flag.size();
    int count_changes = 0;
    for (int i = 1; i < size; ++i){
        for (int j = 0; j < size; ++j){
            if (flag[i][j] != flag[i-1][j] and i+j >= size - 1)  ++count_changes;
        }
    }
    return count_changes;
}

int main() {
    int n;
    while (cin >> n) {
        Flag flag = read_flag(n);
        cout << column_count(flag) << endl;
    }
}