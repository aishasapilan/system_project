#include <iostream>

using namespace std;

class Stopwatch {
private:
  void Stopwatch::time_point << steady_clock> start_time;
    bool running;

public:
    Stopwatch() : running(false) {}

    void start() {
        if (!running) {
            start_time = steady_clock::now();
            running = true;
        }
    }

    void stop() {
        if (running) {
            running = false;
          time_point<<steady_clock> end_time = steady_clock::now();
            duration<double> elapsed_seconds = end_time - start_time;
            cout << "Elapsed time: " << elapsed_seconds.count() << " seconds\n";
        }
    }

    void reset() {
        running = false;
    }
};

int main() {
    Stopwatch stopwatch;
    char input;

    cout << "Press 's' to start, 't' to stop, 'r' to reset, and 'q' to quit.\n";

    while (true) {
        cin >> input;

        switch (input) {
            case 's':
                stopwatch.start();
                break;
            case 't':
                stopwatch.stop();
                break;
            case 'r':
                stopwatch.reset();
                break;
            case 'q':
                return 0;
            default:
                cout << "Invalid input. Press 's' to start, 't' to stop, 'r' to reset, and 'q' to quit.\n";
        }
    }

    return 0;
}

