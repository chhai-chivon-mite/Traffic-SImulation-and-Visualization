#include "road.h"
#include <QtCore>
#include <QtWidgets>
road::road()
{

}

QPainterPath road::get_1_1()
{
    return draw_1_1 ();
}

QPainterPath road::get_1_2()
{
    return draw_1_2 ();
}

QPainterPath road::get_1_3()
{
    return draw_1_3 ();
}

QPainterPath road::get_1_4()
{
    return draw_1_4 ();
}

QPainterPath road::get_1_5()
{
    return draw_1_5 ();
}

QPainterPath road::get_2_1()
{
    return draw_2_1 ();
}

QPainterPath road::get_2_2()
{
    return draw_2_2 ();
}

QPainterPath road::get_2_3()
{
    return draw_2_3 ();
}

QPainterPath road::get_2_4()
{
    return draw_2_4 ();
}

QPainterPath road::get_2_5()
{
    return draw_2_5 ();
}

QPainterPath road::get_3_1()
{
    return draw_3_1 ();
}

QPainterPath road::get_3_2()
{
    return draw_3_2 ();
}

QPainterPath road::get_3_3()
{
    return draw_3_3 ();
}

QPainterPath road::get_3_4()
{
    return draw_3_4 ();
}

QPainterPath road::get_3_5()
{
    return draw_3_5 ();
}

QPainterPath road::get_4_1()
{
    return draw_4_1 ();
}

QPainterPath road::get_4_2()
{
    return draw_4_2 ();
}

QPainterPath road::get_4_3()
{
    return draw_4_3 ();
}

QPainterPath road::get_4_4()
{
    return draw_4_4 ();
}

QPainterPath road::get_4_5()
{
    return draw_4_5 ();
}

QList<QPainterPath> road::get_all_path()
{
    return m_path_list;
}

QPainterPath road::draw_1_1()
{
    QTransform transform;
    transform.rotate (90);
    transform.translate (-25,-615);
    QPainterPath m_path = transform.map(get_2_1());
    return m_path;
}

QPainterPath road::draw_1_2()
{
    QTransform transform;
    transform.rotate (90);
    transform.translate (-25,-615);
    QPainterPath m_path = transform.map(get_2_2());
    return m_path;
}

QPainterPath road::draw_1_3()
{
    QTransform transform;
    transform.rotate (90);
    transform.translate (-25,-615);
    QPainterPath m_path = transform.map(get_2_3());
    return m_path;
}

QPainterPath road::draw_1_4()
{
    QTransform transform;
    transform.rotate (90);
    transform.translate (-25,-615);
    QPainterPath m_path = transform.map(get_2_4());
    return m_path;
}

QPainterPath road::draw_1_5()
{
    QTransform transform;
    transform.rotate (90);
    transform.translate (-25,-615);
    QPainterPath m_path = transform.map(get_2_5());
    return m_path;
}

QPainterPath road::draw_2_1()
{
    QTransform transform;
    transform.rotate (90);
    transform.translate (-25,-615);
    QPainterPath m_path = transform.map(get_3_1());
    return m_path;
}

QPainterPath road::draw_2_2()
{
    QTransform transform;
    transform.rotate (90);
    transform.translate (-25,-615);
    QPainterPath m_path = transform.map(get_3_2());
    return m_path;
}

QPainterPath road::draw_2_3()
{
    QTransform transform;
    transform.rotate (90);
    transform.translate (-25,-615);
    QPainterPath m_path = transform.map(get_3_3());
    return m_path;
}

QPainterPath road::draw_2_4()
{
    QTransform transform;
    transform.rotate (90);
    transform.translate (-25,-615);
    QPainterPath m_path = transform.map(get_3_4());
    return m_path;
}

QPainterPath road::draw_2_5()
{
    QTransform transform;
    transform.rotate (90);
    transform.translate (-25,-615);
    QPainterPath m_path = transform.map(get_3_5());
    return m_path;
}

QPainterPath road::draw_3_1()
{
    QTransform transform;
    transform.rotate (90);
    transform.translate (-25,-615);
    QPainterPath m_path = transform.map(get_4_1());
    //m_path.translate (100,100);
    return m_path;
}

QPainterPath road::draw_3_2()
{
    QTransform transform;
    transform.rotate (90);
    transform.translate (-25,-615);
    QPainterPath m_path = transform.map(get_4_2());
    return m_path;
}

QPainterPath road::draw_3_3()
{
    QTransform transform;
    transform.rotate (90);
    transform.translate (-25,-615);
    QPainterPath m_path = transform.map(get_4_3());
    return m_path;
}

QPainterPath road::draw_3_4()
{
    QTransform transform;
    transform.rotate (90);
    transform.translate (-25,-615);
    QPainterPath m_path = transform.map(get_4_4());
    return m_path;
}

QPainterPath road::draw_3_5()
{
    QTransform transform;
    transform.rotate (90);
    transform.translate (-25,-615);
    QPainterPath m_path = transform.map(get_4_5());
    return m_path;
}

QPainterPath road::draw_4_1()
{
    QPainterPath m_path;
    m_path.moveTo(325,600);
    m_path.lineTo(325,328 + 30 +20);
    m_path.arcTo(225-150,280 + 30 - 50 ,100 + 150,100 + 150,5,75);
    m_path.lineTo(0,280 - 20);
    return m_path;
}

QPainterPath road::draw_4_2()
{
    QPainterPath m_path;
    m_path.moveTo (325,600);
    m_path.lineTo (325,0);
    return m_path;
}

QPainterPath road::draw_4_3()
{
    QPainterPath m_path;
    m_path.moveTo (340,600);
    m_path.lineTo (340,0);
    return m_path;
}

QPainterPath road::draw_4_4()
{
    QPainterPath m_path;
    m_path.moveTo (355,600);
    m_path.lineTo (355,0);
    return m_path;
}

QPainterPath road::draw_4_5()
{
    QPainterPath m_path;
    m_path.moveTo (355,600);
    m_path.lineTo(355,328 + 30 +20+50 -30);
    m_path.quadTo (QPointF(355,328 + 30-25),QPointF(410,330));
    m_path.lineTo (700,330);
    return m_path;
}