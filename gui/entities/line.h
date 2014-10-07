#ifndef LINE_H
#define LINE_H

#include <QPainter>
#include <QGraphicsItem>

class Line: public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    Line(QPointF, QPointF);
    QRectF boundingRect() const;
    virtual void paint(QPainter *painter,
                       const QStyleOptionGraphicsItem *option,
                       QWidget *widget);
    enum { Type = UserType + 2 };
    int type() const;

    QPointF start_p, end_p, move_p, check_p;
private:
    QVector<QPointF> stuff;
};

#endif // LINE_H
