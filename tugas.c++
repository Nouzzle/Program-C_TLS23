#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
    vector<string> tasks;
    string task;

    cout << "Welcome to your To-Do List!" << endl;

    // Membuka file untuk menulis tugas ke dalam1
    ofstream todoFile("todo.txt", ios::app);

    while (true) {
        cout << "Silakan ketik tugas yang ingin Anda masukkan ke dalam To-Do List Anda. Ketik 'selesai' jika Anda selesai: ";
        getline(cin, task);

        if (task == "selesai")
            break;

        tasks.push_back(task);
        cout << "Tugas telah ditambahkan." << endl;

        // Menulis tugas ke dalam file todo.txt
        todoFile << task << endl;
    }

    // Menutup file setelah selesai
    todoFile.close();

    cout << "\nTugas yang harus Anda lakukan adalah :" << endl;
    for (int i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i] << endl;
    }

    return 0;
}
