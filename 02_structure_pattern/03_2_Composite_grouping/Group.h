#include "GraphicObject.h"
#include <string>
#include <vector>

class Group : public GraphicObject
{
public:
    explicit Group(const std::string& name);
    void draw() override;
    void push_back(GraphicObject*);

private:
    std::string name;
    std::vector<GraphicObject*> objects;
};