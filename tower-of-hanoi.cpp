#include<iostream>
#include<vector>
using namespace std;

void tower_of_hanoi(int disks, char source_name, char aux_name, char dest_name) {

    if (disks == 1) {
        cout << source_name << " -> " << dest_name << endl;
    } else {
        tower_of_hanoi(disks-1, source_name, dest_name, aux_name);
        tower_of_hanoi(1, source_name, aux_name, dest_name);
        tower_of_hanoi(disks-1, aux_name, source_name, dest_name);
    }
}

int tower_of_hanoi_count(int disks) {

    if (disks == 1) {
        return 1;
    } else {
        return tower_of_hanoi_count(disks-1) + tower_of_hanoi_count(1) + tower_of_hanoi_count(disks-1);
    }
}

int main() {
    int disks;
    disks = 3;
    tower_of_hanoi(disks, 'A', 'B', 'C');
    cout << "Steps count: " << tower_of_hanoi_count(disks) << endl;
    return 0;
}