#include <iostream>
using namespace std;

int main() {
	    char operation;
	        double num1, num2;

		    cout << "简单计算器" << endl;
		        cout << "输入运算符 (+, -, *, /): ";
			    cin >> operation;

			        cout << "输入两个数字: ";
				    cin >> num1 >> num2;

				        switch(operation) {
						        case '+':
								            cout << num1 << " + " << num2 << " = " << num1 + num2;
									                break;
											        case '-':
											            cout << num1 << " - " << num2 << " = " << num1 - num2;
												                break;
														        case '*':
														            cout << num1 << " * " << num2 << " = " << num1 * num2;
															                break;
																	        case '/':
																	            if(num2 != 0)
																			                    cout << num1 << " / " << num2 << " = " << num1 / num2;
																		                else
																					                cout << "错误：除数不能为0!";
																				            break;
																					            default:
																					                cout << "错误：无效的运算符!";
																							    }

					    return 0;
}
