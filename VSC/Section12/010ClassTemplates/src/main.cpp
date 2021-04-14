/**
 * Includes
 */ 
#include <iostream>
#include <algorithm>
#include <cstring>
#include "../Libraries/Integer.h"

/**
 * \class Stack
 * 
 * \brief
 */ 
// // class Stack{
// //     private:
// //         int m_Buffer[512];
// //         int m_Top;
// //     public:
// //         void Push(int element){
// //             m_Buffer[++m_Top] = element;
// //         }
// //         void Pop(){
// //             --m_Top;
// //         }
// //         int Top()const{
// //             return m_Buffer[m_Top];
// //         }
// //         bool IsEmpty(){
// //             return m_Top == -1;
// //         }
// // };
// template<typename T>
// class Stack{
//     private:
//         T m_Buffer[512];
//         int m_Top;
//     public:
//         void Push(const T &element){
//             m_Buffer[++m_Top] = element;
//         }
//         void Pop(){
//             --m_Top;
//         }
//         const T &Top()const{
//             return m_Buffer[m_Top];
//         }
//         bool IsEmpty(){
//             return m_Top == -1;
//         }
// };
template<typename T, int size>
class Stack{
    private:
        T m_Buffer[size];
        int m_Top;
    public:
        Stack() = default;
        Stack(const Stack &obj){ // Copy constructor
            m_Top = obj.m_Top;
            for(int i=0; i<=m_Top; ++i){
                m_Buffer[i] = obj.m_Buffer[i];
            }
            
        }
        void Push(const T &element){
            m_Buffer[++m_Top] = element;
        }
        // void Pop(){
        //     --m_Top;
        // }
        void Pop();
        const T &Top()const{
            return m_Buffer[m_Top];
        }
        bool IsEmpty(){
            return m_Top == -1;
        }
        // static Stack Create(){   // hand notation
        //     return Stack<T, size>();
        // }
        static Stack Create();
};
/*Pop*/
template<typename T, int size> 
void Stack<T, size>::Pop(){
            --m_Top;
}
/*Create*/
template<typename T, int size> 
Stack<T, size> Stack<T, size>::Create(){
            return Stack<T, size>();
}


/**
 * \fn 
 * 
 * \brief
 */ 





/**
 * \fn main
 * 
 * \brief
 */
int main(){
    /**
     * Video 135
     */
    // // // Stack s{};
    // // Stack<int> s{};
    // Stack<int, 512> s{};
    Stack<int, 16> s = Stack<int, 16>::Create();
    s.Push(1);
    s.Push(2);
    s.Push(3);
    s.Push(4);
    s.Push(5);
    // while(!s.IsEmpty()){
    //     std::cout << s.Top() << " ";
    //     s.Pop();
    // }
    // std::cout << std::endl;

    auto s2(s);
    while(!s2.IsEmpty()){
        std::cout << s2.Top() << " ";
        s2.Pop();
    }
    std::cout << std::endl;
    

    return 0;
}
 
