class Point
{
    public:
        enum class PointType
        {
            cartesian = 0,//직교좌표
            polar = 1,//극좌표
        };
        Point(const float x, const float y);
        // Point(const float r, const float theta);//인자 타입, 수가 같기 때문에 빌드에러 발생함
        Point(const float x, const float y, PointType type);//enum으로 직교,극좌표 구분

    private:
        float x;
        float y;
};