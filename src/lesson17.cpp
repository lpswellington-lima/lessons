#include <iostream>
#include <lesson17.h>
#include <config.h>
#include <thread>
#include <future>
#include <chrono>

using namespace std;

void Lesson17::onExecute(){
    IncrementerNew i;
    int a = 0;
    promise<int> promise;
    future<int> future = promise.get_future();
    thread myThread([&promise, &i](){
        int result = i.increment(5);
        promise.set_value(result);
    });

    thread myThread2([](){
        PRINT("Hello there");
    });

    thread myThread3(&IncrementerNew::incrementV2, &i, ref(a));

    PRINT("waiting for result...")
    int result = future.get();
    PRINT("result: " << result);
    if (myThread.joinable()) {
        myThread.join(); // Wait for the thread to finish
    }
    if (myThread2.joinable()){
        myThread2.join();
    }
    if (myThread3.joinable()){
        myThread3.join();
    }
}

int IncrementerNew::increment(int x){
    for (int i=0; i<10; i++){
        this_thread::sleep_for(std::chrono::seconds(2));
        x++;
        PRINT("incrementing: " << x)
    }
    return x;    
}

void IncrementerNew::incrementV2(int& x){
    for (int i=0; i<10; i++){
        this_thread::sleep_for(std::chrono::seconds(1));
        x++;
        PRINT("Value x = " << x);
    }        
}