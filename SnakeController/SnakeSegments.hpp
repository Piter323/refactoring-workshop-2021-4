#include <list>
#include <memory>
#include <stdexcept>
#include <functional>

#include "IEventHandler.hpp"
#include "SnakeInterface.hpp"

class SnakeSegments {

private:
    struct Segment
    {
        int x;
        int y;
    };

    std::list<Segment> m_segments;

public: 
    void addToEndElementToSnake(struct Segment& element) 
    {
        m_segments.push_back(element);
    }

    void addToFrontElementToSnake(struct Segment& element) 
    {
        m_segments.push_front(element);
    }

    void removeElementFromSnake() 
    {
        m_segments.pop_back();
    }

    Segment returnFirstElementOfList() {
        return m_segments.front();
    }
};
