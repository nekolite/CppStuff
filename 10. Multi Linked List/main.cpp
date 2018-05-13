#include <iostream>
#include <queue>

struct parentNode {
    char data;
    parentNode* nextParent;
    std::queue<int> child;
};

parentNode* headParent;
parentNode* tailParent;

int main() {

    std::cout << "***********************************" << std::endl;
    std::cout << "\tMulti Linked List" << std::endl;
    std::cout << "***********************************\n" << std::endl;

    headParent = nullptr;
    tailParent = nullptr;

    /* parent 1 */
    parentNode* parent1 = new parentNode;
    parent1->data = 'A';
    parent1->nextParent = nullptr;
    headParent = parent1;
    tailParent = parent1;

    /* child 1 */
    parent1->child.push(1);
    parent1->child.push(2);
    parent1->child.push(3);
    parent1->child.push(4);

    /* parent 2 */
    parentNode* parent2 = new parentNode;
    parent2->data = 'B';
    parent2->nextParent = nullptr;
    tailParent->nextParent = parent2;
    tailParent = tailParent->nextParent;

    /* child 2 */
    parent2->child.push(5);

    /* parent 3 */
    parentNode* parent3 = new parentNode;
    parent3->data = 'C';
    parent3->nextParent = nullptr;
    tailParent->nextParent = parent3;
    tailParent = tailParent->nextParent;

    /* child 3 */
    parent3->child.push(6);
    parent3->child.push(7);
    parent3->child.push(8);

    /* parent 4 */
    parentNode* parent4 = new parentNode;
    parent4->data = 'D';
    parent4->nextParent = nullptr;
    tailParent->nextParent = parent4;
    tailParent = tailParent->nextParent;

    /* child 4 */
    parent4->child.push(9);
    parent4->child.push(10);

    parentNode* temp = headParent;

    while (temp != nullptr) {
        std::cout << temp->data << " : ";
        while (!temp->child.empty()) {
            std::cout << temp->child.front() << " -> ";
            temp->child.pop();
        }
        std::cout << std::endl;
        temp = temp->nextParent;
    }

    std::cout << std::endl;
    delete headParent;
    delete tailParent;

    return 0;
}



















