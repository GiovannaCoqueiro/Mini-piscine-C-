#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <vector>

template <typename T>
class Singleton {
    public:
        static Singleton *getInstance() {
            if (!instance) {
                instance = new Singleton;
            }
            return instance;
        }

        void addToList(T *object) {
            objects.push_back(object);
        }

        bool retrieveFromList(typename std::vector<T *>::size_type index) {
            if (index < objects.size()) {
                objects.erase(objects.begin() + index);
                return true;
            }
            return false;
        }

        T *accessList(typename std::vector<T *>::size_type index) {
            if (index < objects.size()) {
                return objects[index];
            }
            return 0; 
        }

        std::vector<T *> wholeList() {
            return objects;
        }

    private:
        Singleton() {} 
        Singleton(const Singleton&);
        ~Singleton() {}
        static Singleton *instance;
        std::vector<T *> objects;
};

template <typename T>
Singleton<T>* Singleton<T>::instance = 0;

#endif