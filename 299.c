#include <stdio.h>

int main() {
	    char operation;
	        double num1, num2;
		    
		    printf("简单计算器\n");
		        printf("输入运算符 (+, -, *, /): ");
			    scanf("%c", &operation);
			        
			        printf("输入两个数字: ");
				    scanf("%lf %lf", &num1, &num2);
				        
				        switch(operation) {
						        case '+':
								            printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
									                break;
											        case '-':
											            printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
												                break;
														        case '*':
														            printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
															                break;
																	        case '/':
																	            if(num2 != 0)
																			                    printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
																		                else
																					                printf("错误：除数不能为0!");
																				            break;
																					            default:
																					                printf("错误：无效的运算符!");
																							    }
					    
					    return 0;
}
