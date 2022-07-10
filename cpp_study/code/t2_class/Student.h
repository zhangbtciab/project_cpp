//
// Created by btciab on 2022/7/6.
//

#ifndef CPP_STUDY_STUDENT_H
#define CPP_STUDY_STUDENT_H

#include <cstdint>
#include <iostream>
/* (1)类的定义域权限修饰符
*	a.public 共有的
*		公共的意思，用这个修饰符修饰结构/类中的成员变量和成员函数可以被外界访问。
*		一般需要能够被外部访问的属性或者变量，定义为public,就好像该类的外部接口一样。
*	b.private 私有的
*		用这个修饰符修饰类中的成员属性或者成员函数，只有类中的属性或者方法访问。
*	c.protected 保护类型
*
*	结论：struct结构体默认是是public类型的，不写访问修饰符，就是public类型的。
*/

using namespace std;
namespace t2_class{
class Student {
public:
    string name;
    uint32_t id;
    Student(string name, uint32_t id):name(name),id(id){}

    void SetName(string name ) {
        (*this).name = name;
        //name = name;
    }

    void SetId(u_int32_t id) {
        (*this).id = id;
        //id = id;
    }

};

};



#endif //CPP_STUDY_STUDENT_H
