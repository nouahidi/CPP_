#include "Data.hpp"
#include "Serializer.hpp"

int main() {
    Data myData(1337);
    uintptr_t serializedValue = Serializer::serialize(&myData);
    Data* deserializedData = Serializer::deserialize(serializedValue);

    if (deserializedData == &myData){
        std::cout<< deserializedData->getvalue()<<std::endl;
        std::cout << "Serialization and deserialization successful. Original and deserialized pointers are equal." << std::endl;
    }
    else
        std::cout << "Serialization and deserialization failed. Pointers are not equal." << std::endl;
    return (0);
}