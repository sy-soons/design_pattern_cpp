class Point
{
    protected:
        Point(const float x, const float y);
    
    public:
        static Point NewCartesian(float x, float y);
        static Point NewPolar(float r, float theta);

    private:
        float x;
        float y;
};