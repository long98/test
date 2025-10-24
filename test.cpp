#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

class Student {
	private:
		    std::string name;
		        int id;
			    double score;

	public:
			        Student(std::string n, int i, double s) : name(n), id(i), score(s) {}
				    
				    void display() const {
					            std::cout << std::setw(10) << id 
							                      << std::setw(15) << name 
									                        << std::setw(8) << std::fixed << std::setprecision(2) << score << std::endl;
						        }
				        
				        double getScore() const { return score; }
					    std::string getName() const { return name; }
};

class GradeManager {
	private:
		    std::vector<Student> students;

	public:
		        void addStudent(const Student& student) {
				        students.push_back(student);
					    }
			    
			    void displayAll() const {
				            std::cout << "\n=== 学生成绩列表 ===" << std::endl;
					            std::cout << std::setw(10) << "学号" 
							                      << std::setw(15) << "姓名" 
									                        << std::setw(8) << "成绩" << std::endl;
						            
						            for(const auto& student : students) {
								                student.display();
										        }
							        }
			        
			        void sortByScore() {
					        std::sort(students.begin(), students.end(), 
								                 [](const Student& a, const Student& b) {
										                      return a.getScore() > b.getScore();
												                       });
						    }
				    
				    double calculateAverage() const {
					            if(students.empty()) return 0.0;
						            
						            double sum = 0;
							            for(const auto& student : students) {
									                sum += student.getScore();
											        }
								            return sum / students.size();
									        }
};

int main() {
	    GradeManager manager;
	        
	        // 添加一些示例学生
		//     manager.addStudent(Student("张三", 1001, 85.5));
		//         manager.addStudent(Student("李四", 1002, 92.0));
		//             manager.addStudent(Student("王五", 1003, 78.5));
		//                 manager.addStudent(Student("赵六", 1004, 88.0));
		//                     
		//                         // 显示所有学生
		//                             manager.displayAll();
		//                                 
		//                                     // 按成绩排序
		//                                         manager.sortByScore();
		//                                             std::cout << "\n=== 按成绩排序后 ===" << std::endl;
		//                                                 manager.displayAll();
		//                                                     
		//                                                         // 计算平均分
		//                                                             std::cout << "\n班级平均分: " << std::fixed << std::setprecision(2) 
		//                                                                           << manager.calculateAverage() << std::endl;
		//                                                                               
		//                                                                                   return 0;
		//                                                                                   }
