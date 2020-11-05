#ifndef RANGE_H
#define RANGE_H

template <typename T>
class Range{
    T m_min{};
    T m_max{};
public:
    constexpr Range() = default;
    constexpr Range(int min, int max) : m_min(min), m_max(max) {}
    constexpr T getMin() const {return m_min;}
    constexpr T getMax() const {return m_max;}
    constexpr bool check(const T& t) const { return t > m_min && t < m_max;}
    constexpr T getVal(const T& t) const
    {
        if (check(t)) return t;
        return t <= m_min ? m_min : m_max;
    }
};

#endif // RANGE_H
