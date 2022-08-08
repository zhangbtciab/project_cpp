package com.atguigu.java;

/**
 * JEP 360:Sealed Classes(Preview)密封的类和接口（预览）
 *
 * @author shkstart  Email:shkstart@126.com
 * @create 2020 11:28
 */
public sealed class Person permits Teacher,Student,Worker{ } //人

final class Teacher extends Person { }//教师

sealed class Student extends Person permits MiddleSchoolStudent,GraduateStudent{ } //学生

final class MiddleSchoolStudent extends Student { }  //中学生

final class GraduateStudent extends Student { }  //研究生

non-sealed class Worker extends Person { }  //工人

class RailWayWorker extends Worker{} //铁路工人

//class Doctor extends Person{}


