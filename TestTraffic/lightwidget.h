#ifndef LIGHTWIDGET_H
#define LIGHTWIDGET_H
#include <QtCore>
#include <QtWidgets>

#define SIZE 25

class LightWidget :public QObject,/*public QGraphicsLayoutItem,*/ public QGraphicsItem
{
    Q_OBJECT
    Q_INTERFACES(QGraphicsItem)
//    Q_INTERFACES(QGraphicsLayoutItem)
    Q_PROPERTY(bool on READ isOn WRITE setOn)
public:  
    LightWidget(const QColor &color,QGraphicsItem *parent = 0);
    // Virtual Function Area (Must be implemented)
    QRectF boundingRect() const Q_DECL_OVERRIDE;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) Q_DECL_OVERRIDE;
//    void setGeometry(const QRectF &rect);
//    QSizeF sizeHint(Qt::SizeHint which, const QSizeF &constraint) const;
    // End Virtual Function Area
    QColor getColor() const;
    bool isOn() const;
    void setOn(bool on);
    void setColor(const QColor &color);
public slots:
    void turnOff();
    void turnOn();
private:
    QColor m_color;
    bool m_on;

};

#endif // LIGHTWIDGET_H