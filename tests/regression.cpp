#include <cassert>
#define main expressionExampleMain
#include "../expressionEvaluate.cpp"
#undef main
// 回归：括号和多位整数混合运算不能破坏操作数栈。
int main() {
 assert(evaluateInfixExpression("3+(4*2)-(1+3)/2")==9);
 assert(evaluateInfixExpression("((12+8)*3)/5")==12);
 assert(evaluateInfixExpression("7")==7);
}
