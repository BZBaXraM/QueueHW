#include <iostream>
#include <queue>

using namespace std;

class Worker {
private:
    int _id;
    char *_name = nullptr;
    char *_surname = nullptr;
    int _age;
    int _page_count;

public:
    explicit Worker(int id, char *nm, char *sn, int age, int pc)
            : _id(id), _name(nm), _surname(sn), _age(age), _page_count(pc) {}

    void print_info() {
        cout << "ID: " << _id << "\n"
             << "Name: " << _name << "\n"
             << "Surname: " << _surname << "\n"
             << "Age: " << _age << "\n"
             << "Page count: " << _page_count << std::endl
             << std::endl;
    }
};

class worker_queue {
private:
    queue<Worker> _workers;

public:
    void start() {
        while (!_workers.empty()) {
            _workers.front().print_info();
            _workers.pop();
        }
    }

    void add_worker(const Worker &w) {
        _workers.push(w);
    }
};

int main() {

    worker_queue q;
    Worker s(2313, "Bahram", "Bayramzade", 24, 97);
    q.add_worker(s);
    q.start();


    return 0;
}
